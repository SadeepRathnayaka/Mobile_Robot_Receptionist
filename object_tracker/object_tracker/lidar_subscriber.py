import rclpy
import numpy as np
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from smrr_interfaces.msg import Entities
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from .include.transform import GeometricTransformations

# Global variables
visual_data   = Entities()
lidar_data    = []

class LidarSubscriber(Node):
    def __init__(self):
        super().__init__("lidar_subscriber")
        self.cb_group      = ReentrantCallbackGroup()
        self.laser_sub_    = self.create_subscription(LaserScan, "/scan", self.lidar_callback, 10, callback_group=self.cb_group)
        self.laser_pub_    = self.create_publisher(Entities, "/object_tracker/laser_data_array_", 10)
        self.stat_obs_pub_ = self.create_publisher(Entities, "/object_tracker/static_data_array", 10)
        self.transform     = GeometricTransformations(self)

        self.get_logger().info("Lidar subscriber node has been started")

    def lidar_callback(self, lidar_data_msg):
        global lidar_data, visual_data

        lidar_ranges          = np.array(lidar_data_msg.ranges)
        lidar_angle_min       = lidar_data_msg.angle_min
        lidar_angle_increment = lidar_data_msg.angle_increment

        valid_mask = (lidar_ranges <= 6.0)

        lidar_ranges = lidar_ranges[valid_mask]

        lidar_angles = np.arange(lidar_angle_min, 
                                lidar_angle_min + len(lidar_data_msg.ranges) * lidar_angle_increment, 
                                lidar_angle_increment)
        lidar_angles = lidar_angles[valid_mask] 

        lidar_x               = lidar_ranges * np.cos(lidar_angles)
        lidar_y               = lidar_ranges * np.sin(lidar_angles)

        lidar_points = np.vstack((lidar_x, lidar_y)).T

        # variables for tracking the person
        lidar_th              = 0.75
        threshold             = lidar_th
        classes               = []
        updated_lidar_data    = []

        for i, data in enumerate(lidar_data):
            person_x, person_y, class_   = data[:]
            distances                    = np.linalg.norm(lidar_points - np.array([person_x, person_y], dtype=float), axis=1)
            points_within_circle         = np.where(distances <= threshold)[0]

            if ((float(person_x) == 0.0) or  (float(person_y) == 0.0) ):
                continue

            if len(points_within_circle) == 0:
                median_lidar_x = 0
                median_lidar_y = 0
                updated_lidar_data.append([median_lidar_x, median_lidar_y, class_])
                self.get_logger().warn(f"Person {i} not found in LiDAR data")
                continue

            median_lidar_x   = np.median(lidar_points[points_within_circle, 0])
            median_lidar_y   = np.median(lidar_points[points_within_circle, 1])

            updated_lidar_data.append([median_lidar_x, median_lidar_y, class_])
        
        lidar_data   = updated_lidar_data

        visual_points_classes   = np.array(visual_data.classes)
        visual_points_x         = np.array(visual_data.x, dtype=float)
        visual_points_y         = np.array(visual_data.y, dtype=float)
        visual_points           = np.vstack((visual_points_x, visual_points_y, visual_points_classes)).T

        if len(lidar_data) == 0:
            lidar_data     = visual_points.tolist()
        else:
            threshold = 2.0
            new_lidar_data = lidar_data.copy()

            for i, visual_point in enumerate(visual_points):
                lidar_data_np    = np.array(lidar_data)[:, :2]
                lidar_data_np    = np.array(lidar_data_np, dtype=float)
                distances        = np.linalg.norm(lidar_data_np - np.array(visual_point[:2], dtype=float), axis=1)
                min_distance     = np.min(distances)

                # add a new entity if there is no object within the range
                if min_distance > threshold:
                    new_lidar_data.append(visual_point.tolist())

            

            if len(new_lidar_data) > 0:
                new_lidar_data_np = np.array(new_lidar_data)
                unique_lidar_data_np = np.unique(new_lidar_data_np, axis=0)
                lidar_data = unique_lidar_data_np.tolist()
            else:
                lidar_data = []

            lidar_data      = np.array(lidar_data)
            lidar_data_xy   = lidar_data[:, :2]
            lidar_data_xy   = np.array(lidar_data_xy, dtype=float)


            # --------------------------- Static Obstacles Detection --------------------------
            human_radius = 0.75  

            if lidar_data_xy.shape[0] == 0:  
                static_obstacle_points = lidar_points  # Keep all LiDAR points as static obstacles
            else:
                distances_ = np.linalg.norm(lidar_points[:, None, :] - lidar_data_xy[None, :, :], axis=2)

                min_distances = np.min(distances_, axis=1)
                static_obstacle_mask = min_distances > human_radius
                static_obstacle_points = lidar_points[static_obstacle_mask]



            # --------------------- Lidar Data into map frame from rplidar frame --------------
            transformation = self.transform.get_transform("map", "rplidar_link")
            obs_arr        = np.hstack((lidar_data_xy[:,0], lidar_data_xy[:,1], np.zeros_like(lidar_data_xy[:,0]), np.ones_like(lidar_data_xy[:,0]))).reshape(4,-1)
            static_obs_arr = np.hstack((static_obstacle_points[:,0],static_obstacle_points[:,1], np.zeros_like(static_obstacle_points[:,0]), np.ones_like(static_obstacle_points[:,0]))).reshape(4,-1)

            if transformation is not None:
                transformed_lidar_data_      = self.transform.transform_points(obs_arr, transformation)
                transformed_static_points_   = self.transform.transform_points(static_obs_arr, transformation)
                transformed_lidar_data       = transformed_lidar_data_.T
                transformed_static_points    = transformed_static_points_.T

            transformed_lidar_data  = np.array(transformed_lidar_data)
            transformed_static_points = np.array(transformed_static_points)
            
            entities          = Entities()
            entities.count    = len(lidar_data)

            lidar_data_       = np.array(lidar_data)
            arr_classes       = lidar_data_[:, 2]

            arr_classes       = np.array(arr_classes, dtype=str)
            entities.classes  = arr_classes.tolist()
            arr_x             = transformed_lidar_data[:, 0]
            arr_x             = np.array(arr_x, dtype=float)
            entities.x        = arr_x.tolist()
            arr_y             = transformed_lidar_data[:, 1]
            arr_y             = np.array(arr_y, dtype=float)
            entities.y        = arr_y.tolist()

            entities_2        = Entities()
            arr_x             = transformed_static_points[:, 0]
            arr_x             = np.array(arr_x, dtype=float)
            entities_2.x      = arr_x.tolist()
            arr_y             = transformed_static_points[:, 1]
            arr_y             = np.array(arr_y, dtype=float)
            entities_2.y      = arr_y.tolist()

            self.laser_pub_.publish(entities)
            self.stat_obs_pub_.publish(entities_2)
  

class VisualDataSubscriber(Node):
    def __init__(self):
        super().__init__("visual_data_subscriber")
        self.cb_group    = ReentrantCallbackGroup()
        self.visual_sub_ = self.create_subscription(Entities, "/object_tracker/visual_dynamic_obs_array", self.visual_callback, 10, callback_group=self.cb_group)

    def visual_callback(self, visual_msg):
        global visual_data, lidar_data
        visual_data = visual_msg

        
def main(args=None):
    rclpy.init(args=args)

    lidar_subscriber       = LidarSubscriber()
    visual_data_subscriber = VisualDataSubscriber()

    executor = MultiThreadedExecutor()
    executor.add_node(lidar_subscriber)
    executor.add_node(visual_data_subscriber)
    executor.spin()

if __name__ == "__main__":
    main()

