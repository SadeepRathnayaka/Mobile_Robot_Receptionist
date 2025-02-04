import os
from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription


def generate_launch_description():
    button_localization_dir = get_package_share_directory("button_localization")
   
    camera = IncludeLaunchDescription(
        os.path.join(
            get_package_share_directory("realsense2_camera"),
            "launch",
            "rs_launch.py"
        ),
        launch_arguments={
            "depth_module.depth_profile" : "1280x720x30",
            "rgb_camera.color_profile" : "1280x720x30",
            "pointcloud.enable" : "true"
        }.items()
    )
    
    depth_cal_node = Node(
        package="button_localization",
        executable="depth_cal"
    )

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="screen",
        arguments=["-d", os.path.join(button_localization_dir, "config", "depth_cal.rviz")],
    )

    return LaunchDescription([
        camera,
        depth_cal_node,
        rviz_node
    ])