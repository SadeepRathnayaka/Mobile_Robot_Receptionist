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

class HandDetector(Node):
    def __init__(self):
        super().__init__('hand_detector')

        # self.model = YOLO('src/sansar_arm_executions/sansar_arm_executions/robot_hand_detection.pt')
        self.model = YOLO('/SSD/mobile_robot_receptionist_ws/src/smrr_arm_executions/smrr_arm_executions/robot_hand_detection.pt')
        

        self.sub_color = self.create_subscription(Image, '/camera/camera/color/image_raw', self.camera_callback, 10)
        self.sub_depth = self.create_subscription(Image, '/camera/camera/depth/image_rect_raw', self.depth_callback, 10)
        self.sub_camera_info = self.create_subscription(CameraInfo, '/camera/camera/depth/camera_info', self.camera_info_callback, 10)

        self.img_pub_ = self.create_publisher(Image, '/gloves_detection_result', 1)
        self.position_pub_ = self.create_publisher(Point, '/hand_detector/object_position', 10)

        self.depth_image = None
        self.camera_matrix = None

        self.alpha = -np.pi / 4
        self.rotational_matrix = np.array(
                    [
                        [np.cos(self.alpha), -np.sin(self.alpha), 0],
                        [np.sin(self.alpha),  np.cos(self.alpha), 0],
                        [0,                   0,                  1]
                    ])
        
        self.threshold_y = 0.17
        self.threshold_z = 0.03

        self.hand_x = 0.14
        self.hand_y = -0.04
        self.hand_z = 0.05

        self.get_logger().info("Hand Detector node has started")

    def camera_info_callback(self, msg):
        """ Retrieve the camera intrinsic matrix """
        self.camera_matrix = np.array(msg.k).reshape(3, 3)  

    def depth_callback(self, msg):
        """ Store the latest depth image """
        self.depth_image = bridge.imgmsg_to_cv2(msg, "16UC1")  

    def camera_callback(self, msg):
        
        if self.depth_image is None or self.camera_matrix is None:
            return  

        img = bridge.imgmsg_to_cv2(msg, "bgr8")
        results = self.model(img, conf=0.1)  # Confidence threshold (adjustable)

        fx, fy = self.camera_matrix[0, 0], self.camera_matrix[1, 1]  # Focal lengths
        cx, cy = self.camera_matrix[0, 2], self.camera_matrix[1, 2]  # Principal point

        for r in results:
            boxes = r.boxes

            for box in boxes:
                class_id = int(box.cls)
                class_name = self.model.names[class_id]

                if class_name != "red-sqr":  # Filter for only "gloves"
                    continue  

                # print("------------------------------------------------")

                # if class_name != "glove":  # Filter for only "glove"
                #     continue 
                
                
                conf = box.conf.item()
                b = box.xyxy[0].to('cpu').detach().numpy().copy()
                x_min, y_min, x_max, y_max = map(int, b)

                # Get center of bounding box
                cx_bb = (x_min + x_max) // 2
                cy_bb = (y_min + y_max) // 2

                # Get depth at the center of the bounding box
                Z = self.depth_image[cy_bb, cx_bb] / 1000.0  # Convert mm to meters   0.3

                # if Z <= 0:  # Ignore invalid depth readings
                #     print(class_name, Z) 
                    
                #     continue  

                # Compute real-world 3D coordinates (X, Y, Z)
                X = (cx_bb - cx) * Z / fx                    # -0.22
                Y = (cy_bb - cy) * Z / fy                    # -0.10

                x_ = X
                y_ = Y
                z_ = Z

                X = z_
                Y = -x_ 
                Z = -y_ 

                X = X + self.hand_x
                Y = Y + self.hand_y
                Z = Z + self.hand_z

                

                # Projection formula: u = fx * X/Z + cx, v = fy * Y/Z + cy
                # u = int((fx * X_3D / Z_3D) + cx)
                # v = int((fy * Y_3D / Z_3D) + cy)
                

                # cv2.circle(img, (u, v), 50, (255, 0, 0), -1)  # Blue dot to visualize projection
                # cv2.putText(img, f'({u}, {v}) px', (u + 10, v - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 255), 2)


                point = np.array([X,Y,Z])
                print("point:", point)
                transformed_point = np.dot(self.rotational_matrix, point)
                rounded_x = round(transformed_point[0],2)
                rounded_y = round(transformed_point[1],2) - self.threshold_y
                rounded_z = round(transformed_point[2],2) + self.threshold_z
                print("transforemed_point:", ([rounded_x, rounded_y, rounded_z]))

                point_msg = Point()
                point_msg.x = rounded_x
                point_msg.y = rounded_y 
                point_msg.z = rounded_z 
                self.position_pub_.publish(point_msg)

                # Draw bounding box
                cv2.rectangle(img, (x_min, y_min), (x_max, y_max), (0, 255, 0), thickness=2)

                # Draw label with 3D coordinates
                label = f'{class_name}  : ({rounded_x:.2f}, {rounded_y:.2f}, {rounded_z:.2f})m'
                cv2.putText(img, label, (x_min, y_min - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
                # cv2.putText(img, f'({u}, {v}) px', (x_min, y_min - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
                
                
        img_msg = bridge.cv2_to_imgmsg(img, encoding="bgr8")
        self.img_pub_.publish(img_msg)

        
        
       
def main(args=None):
    rclpy.init(args=args)
    hand_detector = HandDetector()
    rclpy.spin(hand_detector)
    hand_detector.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
