#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
from sensor_msgs.msg import JointState
import numpy as np
import serial  

class SerialWrite(Node):
    def __init__(self):
        super().__init__("Serial_Write")

        self.angle_sub = self.create_subscription(Float64MultiArray, "smrr_arm/joystick_control/target_angles", self.callback, 10)
        self.joint_alignment_pub = self.create_subscription(Float64MultiArray, "smrr_arm/arm_alignment/joint_alignments", self.arm_alignment_callback, 10)
        self.joint_arm_movements_pub = self.create_subscription(Float64MultiArray, "smrr_arm/arm_movements/joint_alignments", self.arm_movements_callback, 10)
        self.joint_angles_pub = self.create_publisher(Float64MultiArray, "smrr_arm/joint_angles", 10)

        try:
            self.serial_port = serial.Serial(
                port="/dev/ttyUSB0",  
                baudrate=115200,      
                timeout=1             
            )
            self.get_logger().info("Serial port opened successfully")
        except serial.SerialException as e:
            self.get_logger().error(f"Failed to open serial port: {e}")
            self.serial_port = None  

        self.shoulder_joint_angle = 0.0
        self.bicep_joint_angle = 0.0
        self.elbow_joint_angle = 0.0
        self.wrist_joint_angle = 0.0

    def callback(self, msg):
        # Convert joint angles to degrees
        self.shoulder_joint_angle = int(msg.data[0])
        self.bicep_joint_angle = int(msg.data[1])
        self.elbow_joint_angle = int(msg.data[2])
        self.wrist_joint_angle = int(msg.data[3])

        # Send the angles to the serial port
        if self.serial_port and self.serial_port.is_open:
            string_msg = (
                f"right_shoulder,{self.shoulder_joint_angle},"
                f"right_bicep,{self.bicep_joint_angle},"
                f"right_elbow,{self.elbow_joint_angle},"
                f"right_wrist,{self.wrist_joint_angle}\n"
            )

            self.serial_port.write(string_msg.encode())  
            self.get_logger().info(f"Sent to serial: {string_msg.strip()}")
        else:
            self.get_logger().error("Serial port not open, cannot send data.")

    def arm_movements_callback(self, msg):
        # Convert joint angles to degrees
        self.shoulder_joint_angle = int(msg.data[0])
        self.bicep_joint_angle = int(msg.data[1])
        self.elbow_joint_angle = int(msg.data[2])
        self.wrist_joint_angle = int(msg.data[3])

        # Send the angles to the serial port
        if self.serial_port and self.serial_port.is_open:
            string_msg = (
                f"right_shoulder,{self.shoulder_joint_angle},"
                f"right_bicep,{self.bicep_joint_angle},"
                f"right_elbow,{self.elbow_joint_angle},"
                f"right_wrist,{self.wrist_joint_angle}\n"
            )

            self.serial_port.write(string_msg.encode())  
            self.get_logger().info(f"Sent to serial: {string_msg.strip()}")
        else:
            self.get_logger().error("Serial port not open, cannot send data.")

    def arm_alignment_callback(self, msg):
        self.shoulder_joint_angle += int(msg.data[0])
        self.bicep_joint_angle += int(msg.data[1])
        self.elbow_joint_angle += int(msg.data[2])
        self.wrist_joint_angle += int(msg.data[3])

        # Send the angles to the serial port
        if self.serial_port and self.serial_port.is_open:
            string_msg = (
                f"right_shoulder,{self.shoulder_joint_angle},"
                f"right_bicep,{self.bicep_joint_angle},"
                f"right_elbow,{self.elbow_joint_angle},"
                f"right_wrist,{self.wrist_joint_angle}\n"
            )

            self.serial_port.write(string_msg.encode())  
            self.get_logger().info(f"Sent to serial: {string_msg.strip()}")



    def destroy_node(self):
        if self.serial_port and self.serial_port.is_open:
            self.serial_port.close()
            self.get_logger().info("Serial port closed.")
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    serial_writer = SerialWrite()
    rclpy.spin(serial_writer)
    serial_writer.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
