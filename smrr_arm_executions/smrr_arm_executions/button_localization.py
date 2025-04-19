#!/usr/bin/env python3
from ultralytics import YOLO
import rclpy
import cv2
from rclpy.node import Node
from sensor_msgs.msg import Image, CameraInfo
from geometry_msgs.msg import Point
from cv_bridge import CvBridge
import numpy as np

bridge = CvBridge()

class CameraSubscriber(Node):
    def __init__(self):
        super().__init__('camera_subscriber')

        self.model = YOLO('/SSD/mobile_robot_receptionist_ws/src/smrr_arm_executions/smrr_arm_executions/best.pt')

        # Subscribe to color, depth, and camera info topics
        self.sub_color = self.create_subscription(Image, '/camera/camera/color/image_raw', self.camera_callback, 10)
        self.sub_depth = self.create_subscription(Image, '/camera/camera/depth/image_rect_raw', self.depth_callback, 10)
        self.sub_camera_info = self.create_subscription(CameraInfo, '/camera/camera/depth/camera_info', self.camera_info_callback, 10)

        self.img_pub_ = self.create_publisher(Image, 'button_localization/inference_result', 1)
        self.position_pub_ = self.create_publisher(Point, '/button_localization/button_location', 10)

        # Store the latest depth image and camera intrinsics
        self.depth_image = None
        self.camera_matrix = None

        self.alpha = -np.pi / 4
        self.rotational_matrix = np.array(
                    [
                        [np.cos(self.alpha), -np.sin(self.alpha), 0],
                        [np.sin(self.alpha),  np.cos(self.alpha), 0],
                        [0,                   0,                  1]
                    ])

    def camera_info_callback(self, msg):
        """ Retrieve the camera intrinsic matrix """
        self.camera_matrix = np.array(msg.k).reshape(3, 3)  # Extracting 3x3 intrinsic matrix

    def depth_callback(self, msg):
        """ Store the latest depth image """
        self.depth_image = bridge.imgmsg_to_cv2(msg, "16UC1")  # Depth in millimeters

    def camera_callback(self, msg):
        if self.depth_image is None or self.camera_matrix is None:
            return  # Wait until both depth and intrinsics are available

        img = bridge.imgmsg_to_cv2(msg, "bgr8")
        results = self.model(img, conf=0.1)

        fx, fy = self.camera_matrix[0, 0], self.camera_matrix[1, 1]  # Focal lengths
        cx, cy = self.camera_matrix[0, 2], self.camera_matrix[1, 2]  # Principal point

        for r in results:
            boxes = r.boxes

            for box in boxes:
                b = box.xyxy[0].to('cpu').detach().numpy().copy()
                c = box.cls
                conf = box.conf.item()
                
                x_min, y_min, x_max, y_max = map(int, b)

                # Get center of the bounding box
                cx_bb = (x_min + x_max) // 2
                cy_bb = (y_min + y_max) // 2

                # Get depth at center of bounding box
                Z = self.depth_image[cy_bb, cx_bb] / 1000.0  # Convert mm to meters

                if Z > 0:  # Ignore invalid depth readings
                    # Compute real-world 3D coordinates (X, Y, Z)
                    X = (cx_bb - cx) * Z / fx
                    Y = (cy_bb - cy) * Z / fy

                    x_ = X
                    y_ = Y
                    z_ = Z

                    # camera optical frame to camera frame(ROS standard)
                    X = z_
                    Y = -x_
                    Z = -y_

                    point = np.array([X,Y,Z])
                    transformed_point = np.dot(self.rotational_matrix, point)
                    rounded_x = round(transformed_point[0],2)
                    rounded_y = round(transformed_point[1],2)
                    rounded_z = round(transformed_point[2],2)

                    point_msg = Point()
                    point_msg.x = rounded_x
                    point_msg.y = rounded_y
                    point_msg.z = rounded_z
                    self.position_pub_.publish(point_msg)

                    # Draw bounding box
                    cv2.rectangle(img, (x_min, y_min), (x_max, y_max), (255, 255, 0), thickness=2)
                    bb_class = self.model.names[int(c)]

                    # Draw label with 3D coordinates
                    label = f'{bb_class} ({rounded_x:.2f}, {rounded_y:.2f}, {rounded_z:.2f})m'
                    cv2.putText(img, label, (x_min, y_min - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 0), 2)

        img_msg = bridge.cv2_to_imgmsg(img, encoding="bgr8")
        self.img_pub_.publish(img_msg)
       
def main(args=None):
    rclpy.init(args=args)

    camera_subscriber = CameraSubscriber()
    rclpy.spin(camera_subscriber)

    camera_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()













from time import sleep
from py_trees.behaviour import Behaviour
from py_trees.common import Status
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, CameraInfo
from geometry_msgs.msg import Point
from cv_bridge import CvBridge
import numpy as np
from ultralytics import YOLO

bridge = CvBridge()

class ButtonLocalization(Behaviour, Node):
    def __init__(self, name, target_button):
        Behaviour.__init__(self, name)
        Node.__init__(self, name)
        self.target_button = target_button
        self.localization_complete = False
        self.detected_point = None

    def setup(self):
        self.logger.debug(f"ButtonLocalization::setup {self.name}")
        
        # Initialize YOLO model
        self.model = YOLO('/SSD/mobile_robot_receptionist_ws/src/smrr_arm_executions/smrr_arm_executions/best.pt')
        
        # Subscribers
        self.sub_color = self.create_subscription(
            Image, '/camera/camera/color/image_raw', self.camera_callback, 10)
        self.sub_depth = self.create_subscription(
            Image, '/camera/camera/depth/image_rect_raw', self.depth_callback, 10)
        self.sub_camera_info = self.create_subscription(
            CameraInfo, '/camera/camera/depth/camera_info', self.camera_info_callback, 10)

        # Publishers
        self.position_pub_ = self.create_publisher(
            Point, '/button_localization/button_location', 10)
        
        # Initialize variables
        self.depth_image = None
        self.camera_matrix = None
        self.alpha = -np.pi / 4
        self.rotational_matrix = np.array([
            [np.cos(self.alpha), -np.sin(self.alpha), 0],
            [np.sin(self.alpha), np.cos(self.alpha), 0],
            [0, 0, 1]
        ])

    def initialise(self):
        self.logger.debug(f"ButtonLocalization::initialise {self.name}")
        self.localization_complete = False
        self.detected_point = None

    def update(self):
        rclpy.spin_once(self, timeout_sec=0.1)
        if self.localization_complete:
            return Status.SUCCESS
        return Status.RUNNING

    def terminate(self, new_status):
        self.logger.debug(f"ButtonLocalization::terminate {self.name} to {new_status}")

    def camera_info_callback(self, msg):
        self.camera_matrix = np.array(msg.k).reshape(3, 3)

    def depth_callback(self, msg):
        self.depth_image = bridge.imgmsg_to_cv2(msg, "16UC1")

    def camera_callback(self, msg):
        if self.depth_image is None or self.camera_matrix is None:
            return

        img = bridge.imgmsg_to_cv2(msg, "bgr8")
        results = self.model(img, conf=0.1)

        fx, fy = self.camera_matrix[0, 0], self.camera_matrix[1, 1]
        cx, cy = self.camera_matrix[0, 2], self.camera_matrix[1, 2]

        for r in results:
            boxes = r.boxes
            for box in boxes:
                b = box.xyxy[0].to('cpu').detach().numpy().copy()
                cls_id = int(box.cls)
                class_name = self.model.names[cls_id]
                
                # Only process the target button
                if class_name != self.target_button:
                    continue
                
                x_min, y_min, x_max, y_max = map(int, b)
                cx_bb = (x_min + x_max) // 2
                cy_bb = (y_min + y_max) // 2
                Z = self.depth_image[cy_bb, cx_bb] / 1000.0

                if Z > 0:
                    X = (cx_bb - cx) * Z / fx
                    Y = (cy_bb - cy) * Z / fy

                    # Transform to ROS standard camera frame
                    X_cam = Z
                    Y_cam = -X
                    Z_cam = -Y

                    point = np.array([X_cam, Y_cam, Z_cam])
                    transformed_point = np.dot(self.rotational_matrix, point)

                    # Store the detected point
                    self.detected_point = Point()
                    self.detected_point.x = round(transformed_point[0], 2)
                    self.detected_point.y = round(transformed_point[1], 2)
                    self.detected_point.z = round(transformed_point[2], 2)
                    
                    # Publish the point
                    self.position_pub_.publish(self.detected_point)
                    self.localization_complete = True
                    
                    # Draw visualization
                    cv2.rectangle(img, (x_min, y_min), (x_max, y_max), (255, 255, 0), 2)
                    label = f'{class_name} ({self.detected_point.x:.2f}, {self.detected_point.y:.2f}, {self.detected_point.z:.2f})m'
                    cv2.putText(img, label, (x_min, y_min - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 0), 2)
                    break
