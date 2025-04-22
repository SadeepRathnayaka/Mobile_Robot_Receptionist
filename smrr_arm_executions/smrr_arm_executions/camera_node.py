#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class USBCamNode(Node):
    def __init__(self):
        super().__init__('usb_cam_node')
        
        # Publisher for image topic
        self.publisher = self.create_publisher(Image, '/camera/image_raw', 10)
        self.timer = self.create_timer(0.033, self.timer_callback)  # ~30 FPS
        
        # OpenCV setup
        self.cap = cv2.VideoCapture(5)  # Use /dev/video0
        self.cap.set(cv2.CAP_PROP_FRAME_WIDTH, 640)
        self.cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 480)
        self.bridge = CvBridge()
        
        if not self.cap.isOpened():
            self.get_logger().error("Cannot open USB camera!")
            raise RuntimeError("Camera init failed")
        
        self.get_logger().info("Camera node has been started.")

    def timer_callback(self):
        ret, frame = self.cap.read()
        if ret:
            # Convert OpenCV frame to ROS 2 Image message
            ros_image = self.bridge.cv2_to_imgmsg(frame, 'bgr8')
            self.publisher.publish(ros_image)
        else:
            self.get_logger().warn("Failed to capture frame")

    def __del__(self):
        self.cap.release()

def main(args=None):
    rclpy.init(args=args)
    node = USBCamNode()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()