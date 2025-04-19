#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray


class ArmMovements(Node):
    def __init__(self):
        super().__init__("arm_movements_node")

        self.arm_movements_pub = self.create_publisher(Float64MultiArray, "smrr_arm/arm_movements/joint_alignments", 10)

        self.predefined_angles = {
            "home" : [0.0, 0.0, 0.0, 0.0],
            "button_up": [40.0, 0.0, 90.0, 10.0],  
            "button_down": [40.0, 0.0, 80.0, 10.0] 
        }

        self.declare_parameter("movement", "button_up")  

        self.last_published_angles = None  

        self.create_timer(1.0, self.check_and_publish)

    def check_and_publish(self):
        movement = self.get_parameter("movement").get_parameter_value().string_value

        if movement in self.predefined_angles:
            angles = self.predefined_angles[movement]
            if self.last_published_angles is None or angles != self.last_published_angles:
                self.publish_angles(angles)
        else:
            self.get_logger().warn(f"Invalid movement: {movement}. Choose from {list(self.predefined_angles.keys())}")

    def publish_angles(self, angles):
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
