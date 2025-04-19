#!/usr/bin/env python3
import rclpy
import numpy as np
from rclpy.node import Node
from geometry_msgs.msg import Point
from std_msgs.msg import Float64MultiArray
import time

class ArmAlignmentNode(Node):
    def __init__(self):
        super().__init__('arm_alignment')

        # self.hand_sub = self.create_subscription(Point, '/fingertip_pose/object_position', self.hand_callback, 10)
        self.hand_sub = self.create_subscription(Point, '/hand_detector/object_position', self.hand_callback, 10)

        self.joint_alignment_pub = self.create_publisher(Float64MultiArray, "smrr_arm/arm_alignment/joint_alignments", 10)
        # self.target_sub = self.create_subscription(Point, '/target_position', self.target_callback, 10)

        self.hand_positions = []  
        self.hand_x = 0.14
        self.hand_y = -0.04
        self.hand_z = 0.05

        self.target_position = Point()
        self.target_position.x = 0.34
        self.target_position.y = -0.52
        self.target_position.z = -0.04

        self.threshold = 0.01  
        self.num_samples = 5  
        self.waiting_for_new_data = True  

        self.bicep_alignment = 1.0
        self.bicep_alignment_max = 2.0
        self.shoulder_alignment = 1.0
        self.shoulder_alignment_max = 2.0
        self.sleep_time = 4

        self.joint_alignments = [0.0, 0.0, 0.0, 0.0]

    def hand_callback(self, msg):

        if (np.abs(msg.x) > 1.0 or np.abs(msg.y > 1.0 or np.abs(msg.z) > 1.0)):
            return
        
        if not self.waiting_for_new_data:
            return  

        self.hand_positions.append([msg.x, msg.y, msg.z])

        if len(self.hand_positions) >= self.num_samples:
            self.waiting_for_new_data = False  
            self.align_hand_with_target()  

    # def target_callback(self, msg):
    #     self.target_position = [msg.x, msg.y, msg.z]
    #     self.waiting_for_new_data = True  

    def align_hand_with_target(self):
        if not self.target_position or len(self.hand_positions) < self.num_samples:
            return  

        hand_median = np.median(np.array(self.hand_positions), axis=0)
        hand_y, hand_z = hand_median[1], hand_median[2]
        self.get_logger().info(f"Y : {hand_y} , Z : {hand_z}")

        target_y, target_z = self.target_position.y, self.target_position.z

        self.hand_positions.clear()

        if round(np.abs(hand_y - target_y), 2) > self.threshold:

            if (np.abs(hand_y - target_y) > 0.05):
                if (hand_y > target_y):
                    direction = "increase"
                    alignment = self.bicep_alignment_max
                else:
                    direction = "decrease"
                    alignment = -self.bicep_alignment_max
            
            else:
                if (hand_y > target_y):
                    direction = "increase"
                    alignment = self.bicep_alignment
                else:
                    direction = "decrease"
                    alignment = -self.bicep_alignment

            self.joint_alignments = [0.0, alignment, 0.0, 0.0]
            alignment_msg = Float64MultiArray()
            alignment_msg.data = self.joint_alignments
            self.joint_alignment_pub.publish(alignment_msg)

            print(f"Moving bicep joint to {direction} Y-axis: {hand_y:.2f} -> {target_y:.2f}")
            time.sleep(self.sleep_time)

            self.waiting_for_new_data = True  
            return 


        elif round(abs(hand_z - target_z), 2) > self.threshold:

            if (abs(hand_z - target_z) > 0.05):
                if (hand_z < target_z):
                    direction = "increase"
                    alignment = self.shoulder_alignment_max
                else:
                    direction = "decrease"
                    alignment = -self.shoulder_alignment_max
            else:
                if (hand_z < target_z):
                    direction = "increase"
                    alignment = self.shoulder_alignment
                else:
                    direction = "decrease"
                    alignment = -self.shoulder_alignment

            self.joint_alignments = [alignment, 0.0, 0.0, 0.0]
            alignment_msg = Float64MultiArray()
            alignment_msg.data = self.joint_alignments
            self.joint_alignment_pub.publish(alignment_msg)

            print(f"Moving shoulder joint to {direction} Z-axis: {hand_z:.2f} -> {target_z:.2f}")
            time.sleep(self.sleep_time)
            self.waiting_for_new_data = True  
            return    

        print("Hand is aligned with the target.")
        # return

def main(args=None):
    rclpy.init(args=args)
    node = ArmAlignmentNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
