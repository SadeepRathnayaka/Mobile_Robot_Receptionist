from ultralytics import YOLO
import rclpy
import cv2
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import numpy as np
from smrr_interfaces.msg import Entities
from visualization_msgs.msg import Marker, MarkerArray
import math
import torch

bridge = CvBridge()

class ButtonLocalization(Node):
    def __init__(self):
        super().__init__("button_localization")

        self.sub_ = self.create_subscription(Image, "/zed2_left_camera/image_raw", self.camera_callback, 10)
        self.pub_ = self.create_publisher(Image, "/annotated_image", 1)

        self.depth = 0.62
        self.pixel_x = 900
        self.pixel_y = 240

        # Intrinsic camera parameters
        self.f_x = 537.6983672158217
        self.f_y = 537.1784833375057

        self.c_x = 640.9944295362419  
        self.c_y = 362.64041228998025

        self.get_logger().info("Button Localization Node has been started")


    def camera_callback(self, msg):
        img = bridge.imgmsg_to_cv2(msg, "bgr8")

        cv2.circle(img, (self.pixel_x, self.pixel_y), 5, (0, 0, 255), -1)
        img_msg = bridge.cv2_to_imgmsg(img)
        self.pub_.publish(img_msg)

        self.pose_calculation(self.pixel_x, self.pixel_y, self.depth)


    def pose_calculation(self, pixel_x, pixel_y, depth):
        # Calculate the position of the button in the camera frame
        
        X = self.depth * (self.pixel_x - self.c_x) / self.f_x
        Y = self.depth * (self.pixel_y - self.c_y) / self.f_y
        Z = self.depth

        point = np.array([X, Y, Z])
        self.get_logger().info("Button position in the camera frame: {}".format(point))
        return point

def main(args=None):
    rclpy.init(args=args)

    button_localization = ButtonLocalization()
    rclpy.spin(button_localization)

    button_localization.destroy_node()
    rclpy.shutdown()