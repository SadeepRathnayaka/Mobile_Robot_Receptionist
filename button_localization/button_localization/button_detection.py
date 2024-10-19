from ultralytics import YOLO
import rclpy
from rclpy import Node
import cv2
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
from std_msgs.msg import Int16MultiArray
bridge = CvBridge()

class ButtonDetection(Node):
    def __init__(self):
        super().__init__("button_detection")

        self.declare_parameter("target_button", "up")

        self.target_button  = self.get_parameter("target_button").get_parameter_value().string_value
        self.get_logger().info("Target button is set to : " + self.target_button)

        self.model          = YOLO("/home/sadeep/mobile_receptionist_ws/src/object_tracker/object_tracker/best.pt")

        self.img_sub_       = self.create_subscription(Image, "/zed2_left_camera/image_raw",self.camera_callback, 10)
        self.img_pub_       = self.create_publisher(Image, "/button_localization/detected_buttons", 10)
        self.pixel_pub_     = self.create_publisher(Int16MultiArray, "/button_localization/pixel_coordinates", 10)


    def camera_callback(self, msg):
        img               = bridge.imgmsg_to_cv2(msg, "bgr8")
        results           = self.model(img)

        target_button     = self.target_button

        pixel_point = self.detect_target_button(results, img, target_button)

        if (pixel_point == None) :
            self.get_logger().warn("No target button detected...")
            return

        img_msg           = bridge.cv2_to_imgmsg(img)
        self.img_pub_(img)

        pixel_msg = Int16MultiArray()
        pixel_msg.data = [pixel_point[0], pixel_point[1]]
        self.pixel_pub_.publish(pixel_msg)



    def detect_target_button(self, results, img, target_button) :
        
        for r in results:
            boxes = r.boxes

            for box in boxes :
                b    = box.xyxy[0].to('cpu').detach().numpy().copy()
                c    = box.cls
                conf = box.conf.item()

                if (self.model.names[int(c)] == self.target_button):

                    x_min = int(b[0])  # Top-left x-coordinate
                    y_min = int(b[1])  # Top-left y-coordinate
                    x_max = int(b[2])  # Bottom-right x-coordinate
                    y_max = int(b[3])  # Bottom-right y-coordinate

                    cv2.rectangle(img, (x_min, y_min), (x_max, y_max), (255, 255, 0), thickness=2)                          # Draw rectangle

                    mid_point_x = int((x_min + x_max) / 2)
                    mid_point_y = int((y_min + y_max) / 2)

                    cv2.circle(img, (mid_point_x, mid_point_y), 15, (0,0,255), -1)

                    label = self.target_button
                    cv2.putText(img, label, (x_min, y_min - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.9, (255, 255, 0), 2)

                    return [mid_point_x, mid_point_y]
                
            return None


