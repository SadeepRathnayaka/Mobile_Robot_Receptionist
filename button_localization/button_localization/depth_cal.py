from ultralytics import YOLO
import rclpy
import cv2
from rclpy.node import Node
from sensor_msgs.msg import Image, CameraInfo
from cv_bridge import CvBridge
import numpy as np

bridge = CvBridge()

class CameraSubscriber(Node):
    def __init__(self):
        super().__init__('camera_subscriber')

        self.model = YOLO('/home/sadeep/mobile_receptionist_ws/src/button_localization/button_localization/button_detection_YOLO.pt')

        # Subscribe to color, depth, and camera info topics
        self.sub_color = self.create_subscription(Image, '/camera/camera/color/image_raw', self.camera_callback, 10)
        self.sub_depth = self.create_subscription(Image, '/camera/camera/depth/image_rect_raw', self.depth_callback, 10)
        self.sub_camera_info = self.create_subscription(CameraInfo, '/camera/camera/depth/camera_info', self.camera_info_callback, 10)

        self.img_pub_ = self.create_publisher(Image, '/inference_result', 1)

        # Store the latest depth image and camera intrinsics
        self.depth_image = None
        self.camera_matrix = None

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

                    # Draw bounding box
                    cv2.rectangle(img, (x_min, y_min), (x_max, y_max), (255, 255, 0), thickness=2)
                    bb_class = self.model.names[int(c)]

                    # Draw label with 3D coordinates
                    label = f'{bb_class} ({X:.2f}, {Y:.2f}, {Z:.2f})m'
                    cv2.putText(img, label, (x_min, y_min - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 0), 2)

        img_msg = bridge.cv2_to_imgmsg(img, encoding="bgr8")
        self.img_pub_.publish(img_msg)
       
def main(args=None):
    rclpy.init(args=args)

    camera_subscriber = CameraSubscriber()
    rclpy.spin(camera_subscriber)

    camera_subscriber.destroy_node()
    rclpy.shutdown()
