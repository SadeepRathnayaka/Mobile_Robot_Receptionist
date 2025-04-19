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
        self.angle_pub = self.create_publisher(Float64MultiArray, "smrr_arm/joystick_control/target_angles", 10)

        self.shoulder_joint = 0
        self.bicep_joint = 0
        self.elbow_joint = 0
        self.wrist_joint = 0

        self.shoulder_max_angle = 90
        self.bicep_max_angle = 45
        self.elbow_max_angle = 90
        self.wrist_max_angle = 45

        self.shoulder_min_angle = -12
        self.bicep_min_angle = -45
        self.elbow_min_angle = 0
        self.wrist_min_angle = -45

        self.target_joint_angles = [0.0, 0.0, 0.0, 0.0]
        self.temp_joint_angles = [0.0, 0.0, 0.0, 0.0]

        self.get_logger().info("Joystick control node started")

    def joy_callback(self, msg):

        # self.get_logger().info("Msg received")

        if (msg.buttons[5] == 1) :

            if (msg.axes[1] > 0.2):
                self.shoulder_joint += 0.5
                if (self.shoulder_joint >= self.shoulder_max_angle) : self.shoulder_joint = self.shoulder_max_angle
                self.get_logger().info(f"Shoulder joint : {self.shoulder_joint}")

            elif (msg.axes[1] < -0.2):
                self.shoulder_joint -= 0.5
                if (self.shoulder_joint <= self.shoulder_min_angle) : self.shoulder_joint = self.shoulder_min_angle
                self.get_logger().info(f"Shoulder joint : {self.shoulder_joint}")

            elif (msg.axes[0] > 0.2):
                self.bicep_joint += 0.5
                if (self.bicep_joint >= self.bicep_max_angle) : self.bicep_joint = self.bicep_max_angle
                self.get_logger().info(f"Bicep joint : {self.bicep_joint}")

            elif (msg.axes[0] < -0.2):
                self.bicep_joint -= 0.5
                if (self.bicep_joint <= self.bicep_min_angle) : self.bicep_joint = self.bicep_min_angle
                self.get_logger().info(f"Bicep joint : {self.bicep_joint}")

            elif (msg.buttons[3] > 0.2):
                self.elbow_joint += 0.5
                if (self.elbow_joint >= self.elbow_max_angle) : self.elbow_joint = self.elbow_max_angle
                self.get_logger().info(f"Elbow joint : {self.elbow_joint}")

            elif (msg.buttons[0] > 0.2):
                self.elbow_joint -= 0.5
                if (self.elbow_joint <= self.elbow_min_angle) : self.elbow_joint = self.elbow_min_angle
                self.get_logger().info(f"Elbow joint : {self.elbow_joint}")

            elif (msg.buttons[2] > 0.2):
                self.wrist_joint += 0.5
                if (self.wrist_joint >= self.wrist_max_angle) : self.wrist_joint = self.wrist_max_angle
                self.get_logger().info(f"Wrist joint : {self.wrist_joint}")

            elif (msg.buttons[1] > 0.2):
                self.wrist_joint -= 0.5
                if (self.wrist_joint <= self.wrist_min_angle) : self.wrist_joint = self.wrist_min_angle
                self.get_logger().info(f"Wrist joint : {self.wrist_joint}")

            elif (msg.buttons[4] > 0.2):
                self.shoulder_joint = 0.0
                self.bicep_joint = 0.0
                self.elbow_joint = 0.0
                self.wrist_joint = 0.0
                self.get_logger().info("Going to home position")

            else :
                self.target_joint_angles[0] = float(round(self.shoulder_joint))
                self.target_joint_angles[1] = float(round(self.bicep_joint))
                self.target_joint_angles[2] = float(round(self.elbow_joint))
                self.target_joint_angles[3] = float(round(self.wrist_joint))

                if (not self.is_equal_angles()):
                    # self.get_logger().info("different angle set received")
                    target_angle_msgs = Float64MultiArray()
                    target_angle_msgs.data = self.target_joint_angles
                    self.angle_pub.publish(target_angle_msgs)
                    self.get_logger().info(f"Publish target angles : {self.target_joint_angles}")



    def is_equal_angles(self):
        if (np.abs(self.target_joint_angles[0] - self.temp_joint_angles[0]) < 2 and
            np.abs(self.target_joint_angles[1] - self.temp_joint_angles[1]) < 2 and
            np.abs(self.target_joint_angles[2] - self.temp_joint_angles[2]) < 2 and
            np.abs(self.target_joint_angles[3] - self.temp_joint_angles[3]) < 2) :
            return True
        
        self.temp_joint_angles[0] = self.target_joint_angles[0]
        self.temp_joint_angles[1] = self.target_joint_angles[1]
        self.temp_joint_angles[2] = self.target_joint_angles[2]
        self.temp_joint_angles[3] = self.target_joint_angles[3]
        return False
    


def main(args=None):
    rclpy.init(args=args)
    joystick_controller = JoystickController()
    rclpy.spin(joystick_controller)
    joystick_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

        

