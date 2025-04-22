#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray, String

class HandGestures(Node):
    def __init__(self):
        super().__init__("hand_gesture_node")

        # Predefined gestures (modify values as needed)
        self.gestures = {
            "aubowan": [40.0, 10.0, 70.0, 20.0],  # Example: [shoulder, bicep, elbow, wrist]
            "home": [0.0, 0.0, 0.0, 0.0], 
        }

        self.last_gesture = None  # Track last executed gesture

        # Publishers and Subscribers
        self.joint_pub = self.create_publisher(Float64MultiArray, "/smrr_arm/hand_gestures", 10)
        self.create_subscription(String, "/gesture_command", self.gesture_callback, 10)

    def gesture_callback(self, msg):
        gesture_name = msg.data

        if gesture_name not in self.gestures:
            self.get_logger().warn(f"Unknown gesture: {gesture_name}")
            return

        # Only publish if the gesture is new
        if gesture_name != self.last_gesture:
            self.last_gesture = gesture_name
            joint_angles = self.gestures[gesture_name]

            # Publish joint angles
            msg = Float64MultiArray()
            msg.data = joint_angles
            self.joint_pub.publish(msg)
            self.get_logger().info(f"Executing gesture: {gesture_name}")

def main(args=None):
    rclpy.init(args=args)
    node = HandGestures()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()