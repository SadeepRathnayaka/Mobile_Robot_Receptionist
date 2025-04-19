#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray


class PressButton(Node):
    def __init__(self):
        super().__init__("press_button_node")

        self.arm_movements_pub = self.create_publisher(Float64MultiArray, "press_button/joint_alignments", 10)

        # Declare parameter for selecting predefined angles
        self.declare_parameter("movement", "button_up")  # Default to "button_up"

        # Store last published angles
        self.last_published_angles = None  

        # Timer to periodically check for parameter updates
        self.create_timer(1.0, self.check_and_publish)

    def check_and_publish(self):
        """Check for parameter updates and publish the corresponding joint angles."""
        movement = self.get_parameter("movement").get_parameter_value().string_value

        # Get the angles based on parameter input
        if movement in self.predefined_angles:
            angles = self.predefined_angles[movement]
            if self.last_published_angles is None or angles != self.last_published_angles:
                self.publish_angles(angles)
        else:
            self.get_logger().warn(f"Invalid movement: {movement}. Choose from {list(self.predefined_angles.keys())}")

    def publish_angles(self, angles):
        """Publish the joint angles."""
        msg = Float64MultiArray()
        msg.data = angles
        self.arm_movements_pub.publish(msg)
        self.get_logger().info(f"Published angles: {angles}")

        self.last_published_angles = angles  # Update last published angles


def main(args=None):
    rclpy.init(args=args)
    node = ArmMovements()

    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
