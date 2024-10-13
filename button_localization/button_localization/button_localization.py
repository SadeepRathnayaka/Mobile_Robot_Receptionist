from ultralytics import YOLO
import rclpy
import cv2
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Float32MultiArray, Float32
from geometry_msgs.msg import PoseArray, Pose
from cv_bridge import CvBridge
import numpy as np
from visualization_msgs.msg import Marker, MarkerArray
import math
import torch
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from geometry_msgs.msg import Point


bridge = CvBridge()
depth_ = Float32()
grad_ = Float32()


class ButtonLocalization(Node):
    def __init__(self):
        super().__init__("button_localization")

        self.cb_group     = ReentrantCallbackGroup()
        self.image_sub_   = self.create_subscription(Image, "/zed2_left_camera/image_raw", self.camera_callback, 10, callback_group=self.cb_group)
        self.image_pub_   = self.create_publisher(Image, "/annotated_image", 1)
        self.pose_pub_    = self.create_publisher(PoseArray, "/pose_topic", 1)                     # make it to publish pose array
        self.goal_marker_ = self.create_publisher(Marker, "/goal_marker", 1)
        self.init_marker_ = self.create_publisher(Marker, "/init_marker", 1)
        self.normal_pub_  = self.create_publisher(Marker, "/normal_marker", 1)

        self.pixel_x = 900
        self.pixel_y = 280

        # Intrinsic camera parameters
        self.f_x = 537.6983672158217
        self.f_y = 537.1784833375057

        self.c_x = 640.9944295362419  
        self.c_y = 362.64041228998025

        # Transformation matrix from base_link to camera_link
        self.base_to_camera = np.array([
            [0.00  , 0.00  , 1.00 , 0.06],
            [-1.00 , 0.00  , 0.00 , 0.06],
            [0.00  ,-1.00  , 0.00 , 1.10],
            [0.00  , 0.00  , 0.00 , 1.00]
        ])

        # Transformation matrix from base_link to lidar_link
        self.base_to_lidar = np.array([
            [1.000, 0.000, 0.000, 0.230],
            [0.000, 1.000, 0.000, 0.000],
            [0.000, 0.000, 1.000, 0.001],
            [0.000, 0.000, 0.000, 1.000]
        ])

        self.get_logger().info("Button Localization Node has been started")


    def camera_callback(self, msg):
        img = bridge.imgmsg_to_cv2(msg, "bgr8")

        cv2.circle(img, (self.pixel_x, self.pixel_y), 15, (0, 0, 255), -1)
        img_msg = bridge.cv2_to_imgmsg(img)
        self.image_pub_.publish(img_msg)

        normal = self.normal_vector_calculation()

        init_pose, target_pose = self.pose_calculation(self.pixel_x, self.pixel_y, normal)
        self.normal_visualizer(normal, [target_pose.position.x, target_pose.position.y, target_pose.position.z])


    def pose_calculation(self, pixel_x, pixel_y, normal):

        global depth_
        depth = depth_.data
        
        X = depth * (self.pixel_x - self.c_x) / self.f_x
        Y = depth * (self.pixel_y - self.c_y) / self.f_y
        Z = depth

        point = np.array([X, Y, Z])
        transformed_point = np.dot(self.base_to_camera, np.append(point, 1))     # transform the point to the base_link frame

        offset = 0.2
        init_pose = Pose()
        init_pose.position.x        = transformed_point[0] + offset * normal[0]   # the initial point the arm is moving to
        init_pose.position.y        = transformed_point[1] + offset * normal[1]
        init_pose.position.z        = transformed_point[2] + offset * normal[2]

        target_pose = Pose()
        target_pose.position.x      = transformed_point[0] + 0.05 * normal[0]     # 5 cm away from the goal position, if the arm hits the wall the robot will fall back in simulation.
        target_pose.position.y      = transformed_point[1] + 0.05 * normal[1]
        target_pose.position.z      = transformed_point[2] + 0.05 * normal[2]

        pose_array                  = PoseArray()
        pose_array.header.frame_id  = "base_link"
        pose_array.header.stamp     = self.get_clock().now().to_msg()
        pose_array.poses.append(init_pose)
        pose_array.poses.append(target_pose)
        pose_array.poses.append(init_pose)
        self.pose_pub_.publish(pose_array)

        self.pose_visualizer([init_pose.position.x, init_pose.position.y, init_pose.position.z],
                             [target_pose.position.x, target_pose.position.y, target_pose.position.z])

        return init_pose, target_pose

        
    def pose_visualizer(self, pose1, pose2):

        # Visualize the first pose using an RViz Marker
        marker                  = Marker()
        marker.header.frame_id  = "base_link"
        marker.header.stamp     = self.get_clock().now().to_msg()
        marker.ns               = "init_pose"
        marker.id               = 1
        marker.type             = Marker.SPHERE
        marker.action           = Marker.ADD
        
        marker.scale.x          = 0.05
        marker.scale.y          = 0.05
        marker.scale.z          = 0.05
        marker.color.a          = 1.0
        marker.color.r          = 0.0
        marker.color.g          = 1.0
        marker.color.b          = 0.0

        marker.pose.position.x  = pose1[0]
        marker.pose.position.y  = pose1[1]
        marker.pose.position.z  = pose1[2]
        self.init_marker_.publish(marker)

        marker.pose.position.x  = pose2[0]
        marker.pose.position.y  = pose2[1]
        marker.pose.position.z  = pose2[2]
        self.goal_marker_.publish(marker)


    def normal_vector_calculation(self):
        global grad_
        grad = grad_.data

        normal = np.array([-1, grad, 0])                                          # 3D normal vector
        transformed_normal = np.dot(self.base_to_lidar, np.append(normal, 1))     # transform the normal to the lidar_link frame

        return transformed_normal


    def normal_visualizer(self, normal, starting_point):
        
        """Visualize the normal vector using an RViz Marker."""
        marker                  = Marker()
        marker.header.frame_id  = "base_link"  # Base frame for RViz
        marker.header.stamp     = self.get_clock().now().to_msg()
        marker.ns               = "normal_vector"
        marker.id               = 1
        marker.type             = Marker.ARROW  # Arrow type marker
        marker.action           = Marker.ADD

        start_point_x           = starting_point[0]
        start_point_y           = starting_point[1]
        start_point_z           = starting_point[2]

        marker.scale.x          = 0.01  # Shaft diameter
        marker.scale.y          = 0.05  # Arrowhead diameter
        marker.scale.z          = 0.2  # Arrowhead length

        marker.points           = []
        start_point             = Point()
        start_point.x           = start_point_x
        start_point.y           = start_point_y
        start_point.z           = start_point_z

        end_point               = Point()
        end_point.x             = start_point_x + normal[0]
        end_point.y             = start_point_y + normal[1]
        end_point.z             = start_point_z + normal[2]

        marker.points.append(start_point)  
        marker.points.append(end_point)

        marker.color.a          = 1.0  # Alpha (opacity)
        marker.color.r          = 1.0  # Red
        marker.color.g          = 0.0  # Green
        marker.color.b          = 0.0  # Blue

        self.normal_pub_.publish(marker)


class DepthSubscriber(Node):
    def __init__(self):
        super().__init__("depth_subscriber")

        self.cb_group       = ReentrantCallbackGroup()
        self.depth_sub_     = self.create_subscription(Float32MultiArray, "/button_info", self.depth_callback, 10, callback_group=self.cb_group)

        self.depth_arr      = np.array([])
        self.grad_arr       = np.array([])

    def depth_callback(self, msg):
        if (len(self.depth_arr) < 5):
            self.depth_arr  = np.append(self.depth_arr, msg.data[0])
            self.grad_arr   = np.append(self.grad_arr, msg.data[1])
        else:
            depth_.data     = np.mean(self.depth_arr)
            grad_.data      = np.median(self.grad_arr)
            self.depth_arr  = np.array([])
            self.grad_arr   = np.array([])
            

def main(args=None):
    rclpy.init(args=args)

    button_localization = ButtonLocalization()
    depth_subscriber    = DepthSubscriber()

    executor            = MultiThreadedExecutor()
    executor.add_node(button_localization)
    executor.add_node(depth_subscriber)
    executor.spin()


if __name__ == "__main__":
    main()