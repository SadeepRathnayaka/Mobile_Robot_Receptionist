import yaml
from pathlib import Path
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray

class ArmMovementsNode(Node):
    def __init__(self):
        super().__init__("arm_movements_node")

        self.arm_movements_pub = self.create_publisher(Float64MultiArray, "arm_movements/joint_alignments", 10)

        self.predefined_angles = {
            "home": [0.0, 0.0, 0.0, 0.0],
            "button_up": [40.0, 0.0, 90.0, 10.0],
            "button_down": [40.0, 0.0, 80.0, 10.0]
        }

        self.declare_parameter("movement", "button_up")
        self.declare_parameter("config_file_path", str(Path.home() / "arm_movement_status.yaml"))

        self.last_published_angles = None
        self.pending_full_angles = None
        self.elbow_timer = None
        self.config_file_path = None

        self.create_timer(1.0, self.check_and_publish)

    def check_and_publish(self):
        # Get config file path from parameter
        if self.config_file_path is None:
            self.config_file_path = self.get_parameter("config_file_path").get_parameter_value().string_value

        movement = self.get_parameter("movement").get_parameter_value().string_value

        if movement in self.predefined_angles:
            angles = self.predefined_angles[movement]
            if self.last_published_angles is None or angles != self.last_published_angles:
                # Reset YAML status when starting new movement
                self.update_yaml_status(False)
                self.publish_elbow_first(angles)
        else:
            self.get_logger().warn(f"Invalid movement: {movement}. Choose from {list(self.predefined_angles.keys())}")

    def publish_elbow_first(self, angles):
        if self.elbow_timer is not None:
            self.elbow_timer.cancel()

        if len(angles) > 2 and angles[2] != 0.0:
            elbow_only = [0.0, 0.0, angles[2], 0.0]
            self.publish_angles(elbow_only)
            
            self.pending_full_angles = angles
            self.elbow_timer = self.create_timer(1.0, self.publish_full_angles)
        else:
            self.publish_angles(angles)
            self.update_yaml_status(True)

    def publish_full_angles(self):
        if self.pending_full_angles is not None:
            self.publish_angles(self.pending_full_angles)
            self.pending_full_angles = None
            self.update_yaml_status(True)
        self.elbow_timer = None

    def update_yaml_status(self, status):
        """Update the YAML file with the current completion status"""
        try:
            config_data = {'task_complete': status}
            
            with open(self.config_file_path, 'w') as f:
                yaml.safe_dump(config_data, f)
            
            self.get_logger().info(f"Updated YAML file at {self.config_file_path} with task_complete={status}")
        except Exception as e:
            self.get_logger().error(f"Failed to update YAML file: {str(e)}")

    def publish_angles(self, angles):
        msg = Float64MultiArray()
        msg.data = angles
        self.arm_movements_pub.publish(msg)
        self.get_logger().info(f"Published angles: {angles}")
        
        if angles == self.pending_full_angles or (len(angles) <= 2 or angles[2] == 0.0):
            self.last_published_angles = angles