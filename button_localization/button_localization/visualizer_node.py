import rclpy
from rclpy.node import Node
import yaml
from visualization_msgs.msg import Marker
from geometry_msgs.msg import Point
import numpy as np


class VisualizerNode(Node):
    def __init__(self):
        super().__init__("visualizer_node")

        self.yaml_path    = "/home/sadeep/mobile_receptionist_ws/src/button_localization/config/elevator_interaction.yaml"
        self.data         = self.read_yaml(self.yaml_path)

        self.init_pose_pub_   = self.create_publisher(Marker, "/visualizer/init_pose", 10)
        self.target_pose_pub_ = self.create_publisher(Marker, "/visualizer/target_pose", 10)
        self.normal_pub_      = self.create_publisher(Marker, "/visualizer/normal_vector", 10)

        # Transformation matrix from base_link to lidar_link
        self.base_to_lidar = np.array([
            [1.000, 0.000, 0.000, 0.230],
            [0.000, 1.000, 0.000, 0.000],
            [0.000, 0.000, 1.000, 0.001],
            [0.000, 0.000, 0.000, 1.000]
        ])

        self.timer_  = self.create_timer(0.2, self.timerCallback)

        self.get_logger().info("Visualizer node has been started.")

    def timerCallback(self):

        marker = Marker()
        marker.header.frame_id  = "base_link"
        marker.header.stamp     = self.get_clock().now().to_msg()
        marker.type             = Marker.SPHERE
        marker.action           = Marker.ADD

        marker.scale.x          = 0.05
        marker.scale.y          = 0.05
        marker.scale.z          = 0.05
        marker.color.a          = 1.0
        marker.color.r          = 0.0
        marker.color.g          = 1.0
        marker.color.b          = 0.0

        marker.pose.position.x  = self.data["elevator_interaction"]["initial_pose"]["x"]
        marker.pose.position.y  = self.data["elevator_interaction"]["initial_pose"]["y"]
        marker.pose.position.z  = self.data["elevator_interaction"]["initial_pose"]["z"]
        self.init_pose_pub_.publish(marker)

        marker2 = Marker()
        marker2.header.frame_id  = "base_link"
        marker2.header.stamp     = self.get_clock().now().to_msg()
        marker2.type             = Marker.SPHERE
        marker2.action           = Marker.ADD

        marker2.scale.x          = 0.05
        marker2.scale.y          = 0.05
        marker2.scale.z          = 0.05
        marker2.color.a          = 1.0
        marker2.color.r          = 0.0
        marker2.color.g          = 1.0
        marker2.color.b          = 0.0

        marker2.pose.position.x  = self.data["elevator_interaction"]["target_pose"]["x"]
        marker2.pose.position.y  = self.data["elevator_interaction"]["target_pose"]["y"]
        marker2.pose.position.z  = self.data["elevator_interaction"]["target_pose"]["z"]
        self.target_pose_pub_.publish(marker2)


        grad      =  self.data["elevator_interaction"]["gradient"]
        normal    = np.array([-1, grad, 0])
        transformed_normal = np.dot(self.base_to_lidar, np.append(normal, 1))

        marker                  = Marker()
        marker.header.frame_id  = "base_link"  # Base frame for RViz
        marker.header.stamp     = self.get_clock().now().to_msg()
        marker.ns               = "normal_vector"
        marker.id               = 1
        marker.type             = Marker.ARROW  # Arrow type marker
        marker.action           = Marker.ADD

        start_point_x           = self.data["elevator_interaction"]["initial_pose"]["x"]
        start_point_y           = self.data["elevator_interaction"]["initial_pose"]["y"]
        start_point_z           = self.data["elevator_interaction"]["initial_pose"]["z"]

        marker.scale.x          = 0.01  # Shaft diameter
        marker.scale.y          = 0.05  # Arrowhead diameter
        marker.scale.z          = 0.2  # Arrowhead length

        marker.points           = []
        start_point             = Point()
        start_point.x           = start_point_x
        start_point.y           = start_point_y
        start_point.z           = start_point_z

        end_point               = Point()
        end_point.x             = start_point_x + (-1*transformed_normal[0])
        end_point.y             = start_point_y + (-1*transformed_normal[1])
        end_point.z             = start_point_z + (-1*transformed_normal[2])

        marker.points.append(start_point)  
        marker.points.append(end_point)

        marker.color.a          = 1.0  # Alpha (opacity)
        marker.color.r          = 1.0  # Red
        marker.color.g          = 0.0  # Green
        marker.color.b          = 0.0  # Blue

        self.normal_pub_.publish(marker)


    def read_yaml(self, file_path):
        with open(file_path, 'r') as yaml_file:
            data = yaml.safe_load(yaml_file)
        
        return data
    
def main(args=None):
    rclpy.init(args=args)

    visualizer_node = VisualizerNode()

    try:
        rclpy.spin(visualizer_node)
    except KeyboardInterrupt:
        pass
    finally:
        visualizer_node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()