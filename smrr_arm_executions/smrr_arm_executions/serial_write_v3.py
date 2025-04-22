#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
import time

class SerialWrite(Node):
    def __init__(self):
        super().__init__("Serial_Write")

        # Subscribers
        self.angle_sub = self.create_subscription(Float64MultiArray, 
                        "smrr_arm/joystick_control/target_angles", 
                        self.joystick_callback, 10)
        
        self.hand_gestures_sub = self.create_subscription(Float64MultiArray, 
                                "/smrr_arm/hand_gestures", 
                                self.hand_gestures_callback, 10)
        
        self.joint_alignment_sub = self.create_subscription(Float64MultiArray, 
                                  "smrr_arm/arm_alignment/joint_alignments", 
                                  self.arm_alignment_callback, 10)
        
        self.joint_arm_movements_sub = self.create_subscription(Float64MultiArray, 
                                      "smrr_arm/arm_movements/joint_alignments", 
                                      self.arm_movements_callback, 10)

        # Publishers
        self.joint_angles_pub = self.create_publisher(Float64MultiArray, "/arm_pose", 10)
        self.current_angle_pub = self.create_publisher(Float64MultiArray, 
                                 "/smrr_arm/current_joint_angles", 10)

        # Joint states
        self.target_angles = [0.0, 0.0, 0.0, 0.0]  # [shoulder, bicep, elbow, wrist]
        self.current_angles = [0.0, 0.0, 0.0, 0.0]
        self.last_gesture_angles = None

    def joystick_callback(self, msg):
        """Direct publishing for joystick commands"""
        self.target_angles = [float(x) for x in msg.data]
        self.publish_full_angles(self.target_angles)
        self.publish_current_angles()

    def arm_movements_callback(self, msg):
        """Sequential movement for arm movements"""
        self.target_angles = [float(x) for x in msg.data]
        self.publish_sequential_movement(self.target_angles)
        self.publish_current_angles()

    def hand_gestures_callback(self, msg):
        """Sequential movement for hand gestures"""
        new_angles = [float(x) for x in msg.data]
        if new_angles != self.last_gesture_angles:
            self.last_gesture_angles = new_angles
            self.publish_sequential_movement(new_angles)
            self.publish_current_angles()

    def arm_alignment_callback(self, msg):
        """Direct publishing for arm alignment"""
        adjustments = [float(x) for x in msg.data]
        self.target_angles = [current + adj for current, adj in zip(self.current_angles, adjustments)]
        self.publish_full_angles(self.target_angles)
        self.publish_current_angles()

    def publish_sequential_movement(self, angles):
        """Sequential movement: elbow->shoulder->bicep->wrist"""
        # Elbow first
        partial = [0.0, 0.0, angles[2], 0.0]
        self.publish_partial_angles(partial, "elbow")
        time.sleep(5 if angles[2] > 50 else 3)

        # Shoulder next
        partial = [angles[0], 0.0, angles[2], 0.0]
        self.publish_partial_angles(partial, "shoulder")
        time.sleep(5 if angles[0] > 50 else 3)

        # Then bicep
        partial = [angles[0], angles[1], angles[2], 0.0]
        self.publish_partial_angles(partial, "bicep")
        time.sleep(4 if abs(angles[1]) > 30 else 3)

        # Finally wrist
        self.publish_partial_angles(angles, "wrist")
        time.sleep(4 if abs(angles[3]) > 30 else 3)

        self.current_angles = angles.copy()

    def publish_full_angles(self, angles):
        """Direct publishing of all angles"""
        msg = Float64MultiArray()
        msg.data = angles + [1.0]  # Maintain your original format
        self.joint_angles_pub.publish(msg)
        self.current_angles = angles.copy()
        self.get_logger().info("Published full angles")

    def publish_partial_angles(self, angles, joint_name):
        """Helper for partial angle publishing"""
        msg = Float64MultiArray()
        msg.data = angles + [1.0]  # Maintain your original format
        self.joint_angles_pub.publish(msg)
        self.get_logger().info(f"Moving {joint_name} to {angles}")

    def publish_current_angles(self):
        """Publish current joint angles"""
        msg = Float64MultiArray()
        msg.data = self.current_angles.copy()
        self.current_angle_pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = SerialWrite()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()