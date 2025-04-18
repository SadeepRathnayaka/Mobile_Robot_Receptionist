import rclpy
import numpy as np
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from smrr_interfaces.msg import Entities
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from .include.transform import GeometricTransformations

class LidarProcessor:
    def __init__(self, node):
        self.node = node
        self.transform = GeometricTransformations(node)
        self.lidar_data = []
        
    def process_lidar_data(self, lidar_data_msg):
        """Process raw lidar data into cartesian coordinates with filtering"""
        lidar_ranges = np.array(lidar_data_msg.ranges)
        valid_mask = (lidar_ranges >= 0.3) & (lidar_ranges <= 3.0)
        
        angles = lidar_data_msg.angle_min + np.arange(len(lidar_ranges)) * lidar_data_msg.angle_increment
        angles = angles[valid_mask]
        ranges = lidar_ranges[valid_mask]
        
        x = ranges * np.cos(angles)
        y = ranges * np.sin(angles)
        return np.column_stack((x, y))
    
    def update_tracked_entities(self, lidar_points, threshold=0.5):
        """Update tracked entities based on new lidar data"""
        updated_data = []
        
        for entity in self.lidar_data:
            if len(entity) < 2:  # Skip invalid entries
                continue
                
            person_x, person_y = float(entity[0]), float(entity[1])
            class_ = entity[2] if len(entity) > 2 else "unknown"
            
            if person_x > 100.0 or person_y > 100.0:
                continue
                
            distances = np.linalg.norm(lidar_points - [person_x, person_y], axis=1)
            nearby_points = distances <= threshold
            
            if not np.any(nearby_points):
                self.node.get_logger().warn(f"Entity with class {class_} not found in LiDAR data")

                # print("------------New --------------------------")
                # print(entity)
                # print("nearby points : ", distances)
                # print("------------------------------------------")

                updated_data.append([1000, 1000, class_])  # Mark as far away
                continue
                
            median_x, median_y = np.mean(lidar_points[nearby_points], axis=0)
            updated_data.append([median_x, median_y, class_])
            
        return updated_data
    
    def fuse_visual_data(self, visual_data, threshold=0.4):
        """Fuse visual data only for initial detection and new person identification"""
        try:
            # Case 1: No existing lidar data - use visual data directly
            if not self.lidar_data:
                if visual_data.x and visual_data.y and visual_data.classes:
                    # Convert to proper numeric types
                    visual_x = np.array(visual_data.x, dtype=np.float64)
                    visual_y = np.array(visual_data.y, dtype=np.float64)
                    visual_classes = np.array(visual_data.classes)
                    
                    # Stack only coordinates for distance calculation
                    visual_points = np.column_stack((visual_x, visual_y, visual_classes))
                    return visual_points.tolist()
                return []

            # Case 2: Check for new persons in visual data
            # Convert existing lidar data to numpy array
            lidar_array = np.array(self.lidar_data)
            
            # Handle case where lidar_data might be 1D
            if lidar_array.ndim == 1:
                if len(lidar_array) >= 2:
                    lidar_coords = lidar_array[:2].astype(np.float64).reshape(1, -1)
                else:
                    lidar_coords = np.empty((0, 2), dtype=np.float64)
            else:
                lidar_coords = lidar_array[:, :2].astype(np.float64)

            # Process visual data
            visual_x = np.array(visual_data.x, dtype=np.float64)
            visual_y = np.array(visual_data.y, dtype=np.float64)
            visual_classes = np.array(visual_data.classes)
            
            # Stack coordinates and classes separately
            visual_coords = np.column_stack((visual_x, visual_y))
            visual_points = np.column_stack((visual_x, visual_y, visual_classes))

            new_entities = []
            for i, v_coord in enumerate(visual_coords):
                # Calculate distances using only coordinates (float values)
                if lidar_coords.size > 0:
                    distances = np.linalg.norm(lidar_coords - v_coord, axis=1)
                    if np.min(distances) > threshold:  # New person detected
                        new_entities.append(visual_points[i].tolist())

            # Return original lidar data + any new persons from visual
            return self.lidar_data + new_entities

        except Exception as e:
            self.node.get_logger().error(f"Fusion error: {str(e)}", throttle_duration_sec=5)
            return self.lidar_data  # Return current data if error occurs

    def detect_static_obstacles(self, lidar_points, human_radius=0.35):
        """Identify static obstacles by filtering out dynamic entities"""
        if not self.lidar_data:
            return lidar_points
            
        lidar_entities = np.array(self.lidar_data)
        if lidar_entities.ndim == 1:  # Handle 1D case
            if len(lidar_entities) >= 2:
                lidar_entities = lidar_entities[:2].reshape(1, -1)
            else:
                lidar_entities = np.empty((0, 2))
        else:
            lidar_entities = lidar_entities[:, :2].astype(float)
            
        if lidar_entities.size == 0:
            return lidar_points
            
        distances = np.linalg.norm(lidar_points[:, None] - lidar_entities, axis=2)
        return lidar_points[np.min(distances, axis=1) > human_radius]
    
    def transform_to_map_frame(self, points, source_frame="rplidar_link"):
        """Transform points to map frame"""
        if points.size == 0:
            return np.empty((0, 2))
            
        transformation = self.transform.get_transform("map", source_frame)
        if transformation is None:
            return None
            
        # Convert to homogeneous coordinates
        homogenous_points = np.column_stack((
            points[:, 0],
            points[:, 1],
            np.zeros(len(points)),
            np.ones(len(points))
        )).T
        
        transformed = self.transform.transform_points(homogenous_points, transformation)
        return transformed.T[:, :2]

class LidarSubscriber(Node):
    def __init__(self):
        super().__init__("lidar_subscriber")
        self.cb_group = ReentrantCallbackGroup()
        self.processor = LidarProcessor(self)
        
        # Publishers and Subscribers
        self.laser_sub = self.create_subscription(
            LaserScan, "/scan", self.lidar_callback, 10, 
            callback_group=self.cb_group
        )
        self.laser_pub = self.create_publisher(
            Entities, "/object_tracker/laser_data_array_", 10
        )
        self.stat_obs_pub = self.create_publisher(
            Entities, "/object_tracker/static_data_array_", 10
        )
        
        self.get_logger().info("Lidar subscriber node has been started")

    def lidar_callback(self, lidar_data_msg):
        try:
            # Process raw lidar data
            lidar_points = self.processor.process_lidar_data(lidar_data_msg)
            
            # Update tracked entities
            self.processor.lidar_data = self.processor.update_tracked_entities(lidar_points)
            
            # Create message for dynamic entities
            dynamic_msg = Entities()
            if self.processor.lidar_data:
                lidar_array = np.array(self.processor.lidar_data)
                if lidar_array.size > 0:
                    xy_points = lidar_array[:, :2].astype(float) if lidar_array.ndim > 1 else lidar_array[:2].reshape(1, -1)
                    transformed_dynamic = self.processor.transform_to_map_frame(xy_points)
                    
                    if transformed_dynamic is not None and transformed_dynamic.size > 0:
                        dynamic_msg.count = len(self.processor.lidar_data)
                        dynamic_msg.classes = [str(x[2]) if len(x) > 2 else "unknown" for x in self.processor.lidar_data]
                        dynamic_msg.x = transformed_dynamic[:, 0].tolist()
                        dynamic_msg.y = transformed_dynamic[:, 1].tolist()
                        self.laser_pub.publish(dynamic_msg)
            
            # Create message for static obstacles
            static_obstacles = self.processor.detect_static_obstacles(lidar_points)
            if static_obstacles.size > 0:
                transformed_static = self.processor.transform_to_map_frame(static_obstacles)
                
                if transformed_static is not None and transformed_static.size > 0:
                    static_msg = Entities()
                    static_msg.x = transformed_static[:, 0].tolist()
                    static_msg.y = transformed_static[:, 1].tolist()
                    self.stat_obs_pub.publish(static_msg)
                    
        except Exception as e:
            self.get_logger().error(f"Error in lidar_callback: {str(e)}", throttle_duration_sec=5)

class VisualDataSubscriber(Node):
    def __init__(self):
        super().__init__("visual_data_subscriber")
        self.cb_group = ReentrantCallbackGroup()
        self.processor = None  # Will be set by main()
        
        self.visual_sub = self.create_subscription(
            Entities, "/object_tracker/visual_dynamic_obs_array", 
            self.visual_callback, 10, callback_group=self.cb_group
        )

    def visual_callback(self, visual_msg):
        try:
            if self.processor:
                # Only update if we have valid visual data
                if visual_msg.x and visual_msg.y and visual_msg.classes:
                    # Store the fused result (will only add new persons)
                    self.processor.lidar_data = self.processor.fuse_visual_data(visual_msg)
        except Exception as e:
            self.get_logger().error(f"Error in visual_callback: {str(e)}", throttle_duration_sec=5)

            
def main(args=None):
    rclpy.init(args=args)
    
    try:
        lidar_subscriber = LidarSubscriber()
        visual_subscriber = VisualDataSubscriber()
        
        # Share the processor instance
        visual_subscriber.processor = lidar_subscriber.processor
        
        executor = MultiThreadedExecutor()
        executor.add_node(lidar_subscriber)
        executor.add_node(visual_subscriber)
        
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        rclpy.shutdown()

if __name__ == "__main__":
    main()