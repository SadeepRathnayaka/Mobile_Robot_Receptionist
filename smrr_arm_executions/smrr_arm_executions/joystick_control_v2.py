#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from std_msgs.msg import Float64MultiArray
import numpy as np

class JoystickController(Node):
    def __init__(self):
        super().__init__("Joystick_Controller")

        self.joy_sub = self.create_subscription(Joy, "/joy", self.joy_callback, 10)
        self.current_angle_sub = self.create_subscription(Float64MultiArray, "/smrr_arm/current_joint_angles", self.current_joints_callback, 10)
        self.angle_pub = self.create_publisher(Float64MultiArray, "smrr_arm/joystick_control/target_angles", 10)

        # Initialize joint angles
        self.shoulder_joint = 0.0
        self.bicep_joint = 0.0
        self.elbow_joint = 0.0
        self.wrist_joint = 0.0

        # Joint angle limits
        self.shoulder_max_angle = 90
        self.bicep_max_angle = 45
        self.elbow_max_angle = 90
        self.wrist_max_angle = 45

        self.shoulder_min_angle = -12
        self.bicep_min_angle = -45
        self.elbow_min_angle = 0
        self.wrist_min_angle = -45

        # For tracking changes
        self.last_published_angles = [0.0, 0.0, 0.0, 0.0]
        self.publish_rate = self.create_timer(0.05, self.publish_current_angles)  # 20Hz

        self.get_logger().info("Joystick control node started")

    def joy_callback(self, msg):
        joint_adjusted = False

        # Only process inputs when button 5 (RB) is pressed
        if msg.buttons[5] == 1:
            # Shoulder control (left stick up/down)
            if abs(msg.axes[1]) > 0.2:
                self.shoulder_joint += 0.5 * np.sign(msg.axes[1])
                self.shoulder_joint = np.clip(self.shoulder_joint, self.shoulder_min_angle, self.shoulder_max_angle)
                joint_adjusted = True
                self.get_logger().info(f"Shoulder joint: {self.shoulder_joint}", throttle_duration_sec=0.5)

            # Bicep control (left stick left/right)
            if abs(msg.axes[0]) > 0.2:
                self.bicep_joint += 0.5 * np.sign(msg.axes[0])
                self.bicep_joint = np.clip(self.bicep_joint, self.bicep_min_angle, self.bicep_max_angle)
                joint_adjusted = True
                self.get_logger().info(f"Bicep joint: {self.bicep_joint}", throttle_duration_sec=0.5)

            # Elbow control (buttons Y and A)
            if msg.buttons[3] == 1:  # Y button
                self.elbow_joint += 0.5
                self.elbow_joint = min(self.elbow_joint, self.elbow_max_angle)
                joint_adjusted = True
                self.get_logger().info(f"Elbow joint: {self.elbow_joint}", throttle_duration_sec=0.5)
            elif msg.buttons[0] == 1:  # A button
                self.elbow_joint -= 0.5
                self.elbow_joint = max(self.elbow_joint, self.elbow_min_angle)
                joint_adjusted = True
                self.get_logger().info(f"Elbow joint: {self.elbow_joint}", throttle_duration_sec=0.5)

            # Wrist control (buttons X and B)
            if msg.buttons[2] == 1:  # X button
                self.wrist_joint += 0.5
                self.wrist_joint = min(self.wrist_joint, self.wrist_max_angle)
                joint_adjusted = True
                self.get_logger().info(f"Wrist joint: {self.wrist_joint}", throttle_duration_sec=0.5)
            elif msg.buttons[1] == 1:  # B button
                self.wrist_joint -= 0.5
                self.wrist_joint = max(self.wrist_joint, self.wrist_min_angle)
                joint_adjusted = True
                self.get_logger().info(f"Wrist joint: {self.wrist_joint}", throttle_duration_sec=0.5)

            # Home position (button LB)
            if msg.buttons[4] == 1:
                self.shoulder_joint = 0.0
                self.bicep_joint = 0.0
                self.elbow_joint = 0.0
                self.wrist_joint = 0.0
                joint_adjusted = True
                self.get_logger().info("Going to home position")

        # If any joint was adjusted, update the target angles immediately
        if joint_adjusted:
            self.publish_current_angles()

    def current_joints_callback(self, msg):
        self.shoulder_joint = int(msg.data[0])
        self.bicep_joint_angle = int(msg.data[1])
        self.elbow_joint_angle = int(msg.data[2])
        self.wrist_joint_angle = int(msg.data[3])


    def publish_current_angles(self):
        """Publish the current joint angles if they've changed"""
        current_angles = [
            float(round(self.shoulder_joint)),
            float(round(self.bicep_joint)),
            float(round(self.elbow_joint)),
            float(round(self.wrist_joint))
        ]

        # Only publish if angles have changed significantly
        if not np.allclose(current_angles, self.last_published_angles, atol=0.9):
            target_angle_msgs = Float64MultiArray()
            target_angle_msgs.data = current_angles
            self.angle_pub.publish(target_angle_msgs)
            self.last_published_angles = current_angles
            self.get_logger().info(f"Published target angles: {current_angles}", throttle_duration_sec=0.1)

    
def main(args=None):
    rclpy.init(args=args)
    joystick_controller = JoystickController()
    rclpy.spin(joystick_controller)
    joystick_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()