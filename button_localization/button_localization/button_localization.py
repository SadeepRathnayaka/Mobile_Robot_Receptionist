from ultralytics import YOLO
import rclpy
import cv2
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Float32
from geometry_msgs.msg import Pose
from cv_bridge import CvBridge
import numpy as np
from visualization_msgs.msg import Marker
import math
import torch
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from geometry_msgs.msg import Point


bridge = CvBridge()
depth_ = Float32()

class ButtonLocalization(Node):
    def __init__(self):
        super().__init__("button_localization")

        self.cb_group = ReentrantCallbackGroup()
        self.image_sub_ = self.create_subscription(Image, "/zed2_left_camera/image_raw", self.camera_callback, 10, callback_group=self.cb_group)
        self.image_pub_ = self.create_publisher(Image, "/annotated_image", 1)
        self.pose_pub_ = self.create_publisher(Pose, "/pose_topic", 1)
        self.marker_pub_ = self.create_publisher(Marker, "/button_marker", 1)
        self.normal_pub_ = self.create_publisher(Marker, "/normal_marker", 1)

        self.pixel_x = 900
        self.pixel_y = 280

        # Intrinsic camera parameters
        self.f_x = 537.6983672158217
        self.f_y = 537.1784833375057

        self.c_x = 640.9944295362419  
        self.c_y = 362.64041228998025

        self.transform_matrix = np.array([
            [0.00  , 0.00  , 1.00 , 0.06],
            [-1.00 , 0.00  , 0.00 , 0.06],
            [0.00  ,-1.00  , 0.00 , 1.10],
            [0.00  , 0.00  , 0.00 , 1.00]
        ])

        self.get_logger().info("Button Localization Node has been started")


    def camera_callback(self, msg):
        img = bridge.imgmsg_to_cv2(msg, "bgr8")

        cv2.circle(img, (self.pixel_x, self.pixel_y), 15, (0, 0, 255), -1)
        img_msg = bridge.cv2_to_imgmsg(img)
        self.image_pub_.publish(img_msg)

        self.pose_calculation(self.pixel_x, self.pixel_y)
        self.normal_visualizer()


    def pose_calculation(self, pixel_x, pixel_y):
        # Calculate the position of the button in the camera frame

        global depth_
        depth = depth_.data
        
        X = depth * (self.pixel_x - self.c_x) / self.f_x
        Y = depth * (self.pixel_y - self.c_y) / self.f_y
        Z = depth

        point = np.array([X, Y, Z])
        transformed_point = np.dot(self.transform_matrix, np.append(point, 1))     # transform the point to the base_link frame

        pose = Pose()
        pose.position.x = transformed_point[0] - 0.1
        pose.position.y = transformed_point[1]
        pose.position.z = transformed_point[2] 
        self.pose_pub_.publish(pose)

        # Create and configure a Marker message for RViz visualization
        marker = Marker()
        marker.header.frame_id = "base_link"  
        marker.header.stamp = self.get_clock().now().to_msg()
        marker.ns = "button_marker"
        marker.id = 0
        marker.type = Marker.SPHERE  
        marker.action = Marker.ADD

        marker.pose.position.x = transformed_point[0] 
        marker.pose.position.y = transformed_point[1]
        marker.pose.position.z = transformed_point[2]

        marker.scale.x = 0.05
        marker.scale.y = 0.05
        marker.scale.z = 0.05
        marker.color.r = 0.0
        marker.color.g = 1.0  # Green color
        marker.color.b = 0.0
        marker.color.a = 1.0  # Fully opaque
        self.marker_pub_.publish(marker)

    
    def normal_visualizer(self):
        normal = np.array([-0.77, -0.0024, 0.001])  # 3D normal vector

        """Visualize the normal vector using an RViz Marker."""
        marker = Marker()
        marker.header.frame_id = "base_link"  # Base frame for RViz
        marker.header.stamp = self.get_clock().now().to_msg()
        marker.ns = "normal_vector"
        marker.id = 1
        marker.type = Marker.ARROW  # Arrow type marker
        marker.action = Marker.ADD

        # Arrow start point
        start_point_x = 0.0
        start_point_y = 0.0
        start_point_z = 0.0

        # Define the marker's scale (arrow dimensions)
        marker.scale.x = 0.1  # Shaft diameter
        marker.scale.y = 0.2  # Arrowhead diameter
        marker.scale.z = 0.2  # Arrowhead length

        # Define the arrow's start and end points using the normal vector
        marker.points = []
        start_point = Point()
        start_point.x = start_point_x
        start_point.y = start_point_y
        start_point.z = start_point_z

        end_point = Point()
        end_point.x = start_point_x + normal[0]
        end_point.y = start_point_y + normal[1]
        end_point.z = start_point_z + normal[2]

        marker.points.append(start_point)  # Use ROS Point message for points
        marker.points.append(end_point)

        # Set the color of the marker
        marker.color.a = 1.0  # Alpha (opacity)
        marker.color.r = 1.0  # Red
        marker.color.g = 0.0  # Green
        marker.color.b = 0.0  # Blue

        # Publish the marker to visualize the arrow
        self.normal_pub_.publish(marker)


class DepthSubscriber(Node):
    def __init__(self):
        super().__init__("depth_subscriber")

        self.cb_group = ReentrantCallbackGroup()
        self.depth_sub_ = self.create_subscription(Float32, "/button_depth", self.depth_callback, 10, callback_group=self.cb_group)

    def depth_callback(self, msg):
        global depth_
        depth_ = msg

def main(args=None):
    rclpy.init(args=args)

    button_localization = ButtonLocalization()
    depth_subscriber = DepthSubscriber()

    executor = MultiThreadedExecutor()
    executor.add_node(button_localization)
    executor.add_node(depth_subscriber)
    executor.spin()

if __name__ == "__main__":
    main()