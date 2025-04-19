#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray

class SerialWrite(Node):
    def __init__(self):
        super().__init__("Serial_Write")

        self.angle_sub = self.create_subscription(Float64MultiArray, "smrr_arm/joystick_control/target_angles", self.callback, 10)
        self.joint_alignment_sub = self.create_subscription(Float64MultiArray, "smrr_arm/arm_alignment/joint_alignments", self.arm_alignment_callback, 10)
        self.joint_arm_movements_sub = self.create_subscription(Float64MultiArray, "smrr_arm/arm_movements/joint_alignments", self.arm_movements_callback, 10)
        self.joint_angles_pub = self.create_publisher(Float64MultiArray, "smrr_arm/joint_angles", 10) 
        self.current_angle_pub = self.create_publisher(Float64MultiArray, "smrr_arm/current_joint_angles", 10)

        self.shoulder_joint_angle = 0.0
        self.bicep_joint_angle = 0.0
        self.elbow_joint_angle = 0.0
        self.wrist_joint_angle = 0.0

        self.shoulder_joint_angle_cr = 0.0
        self.bicep_joint_angle_cr = 0.0
        self.elbow_joint_angle_cr = 0.0
        self.wrist_joint_angle_cr = 0.0

    def callback(self, msg):
        self.shoulder_joint_angle = int(msg.data[0])
        self.bicep_joint_angle = int(msg.data[1])
        self.elbow_joint_angle = int(msg.data[2])
        self.wrist_joint_angle = int(msg.data[3])

        self.shoulder_joint_angle_cr = self.shoulder_joint_angle
        self.bicep_joint_angle_cr = self.bicep_joint_angle 
        self.elbow_joint_angle_cr = self.elbow_joint_angle
        self.wrist_joint_angle_cr = self.wrist_joint_angle

        angles = [self.shoulder_joint_angle, self.bicep_joint_angle, self.elbow_joint_angle, self.wrist_joint_angle]
        current_angles = [self.shoulder_joint_angle_cr, self.bicep_joint_angle_cr, self.elbow_joint_angle_cr, self.wrist_joint_angle_cr]
        pub_angles = Float64MultiArray()
        current_angles = Float64MultiArray()
        pub_angles.data = angles
        current_angles.data = current_angles
        self.joint_angles_pub.publish(pub_angles)
        self.current_angle_pub.publish(current_angles)


    def arm_movements_callback(self, msg):
        self.shoulder_joint_angle = int(msg.data[0])
        self.bicep_joint_angle = int(msg.data[1])
        self.elbow_joint_angle = int(msg.data[2])
        self.wrist_joint_angle = int(msg.data[3])

        self.shoulder_joint_angle_cr = self.shoulder_joint_angle
        self.bicep_joint_angle_cr = self.bicep_joint_angle 
        self.elbow_joint_angle_cr = self.elbow_joint_angle
        self.wrist_joint_angle_cr = self.wrist_joint_angle

        angles = [self.shoulder_joint_angle, self.bicep_joint_angle, self.elbow_joint_angle, self.wrist_joint_angle]
        current_angles = [self.shoulder_joint_angle_cr, self.bicep_joint_angle_cr, self.elbow_joint_angle_cr, self.wrist_joint_angle_cr]
        pub_angles = Float64MultiArray()
        current_angles = Float64MultiArray()
        pub_angles.data = angles
        current_angles.data = current_angles
        self.joint_angles_pub.publish(pub_angles)
        self.current_angle_pub.publish(current_angles)

    
    def arm_alignment_callback(self, msg):
        self.shoulder_joint_angle += int(msg.data[0])
        self.bicep_joint_angle += int(msg.data[1])
        self.elbow_joint_angle += int(msg.data[2])
        self.wrist_joint_angle += int(msg.data[3])

        self.shoulder_joint_angle_cr = self.shoulder_joint_angle
        self.bicep_joint_angle_cr = self.bicep_joint_angle 
        self.elbow_joint_angle_cr = self.elbow_joint_angle
        self.wrist_joint_angle_cr = self.wrist_joint_angle

        angles = [self.shoulder_joint_angle, self.bicep_joint_angle, self.elbow_joint_angle, self.wrist_joint_angle]
        current_angles = [self.shoulder_joint_angle_cr, self.bicep_joint_angle_cr, self.elbow_joint_angle_cr, self.wrist_joint_angle_cr]
        pub_angles = Float64MultiArray()
        current_angles = Float64MultiArray()
        pub_angles.data = angles
        current_angles.data = current_angles
        self.joint_angles_pub.publish(pub_angles)
        self.current_angle_pub.publish(current_angles)
        


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
