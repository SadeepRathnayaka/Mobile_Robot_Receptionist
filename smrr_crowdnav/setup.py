from setuptools import find_packages, setup

package_name = 'smrr_crowdnav'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(include=['smrr_crowdnav', 'smrr_crowdnav.include']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='nisala',
    maintainer_email='nisala@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'human_kf = smrr_crowdnav.human_KF:main',
            'kf_no_kf = smrr_crowdnav.kalman_vs_not_kalman:main',
            'goal_client = smrr_crowdnav.goal_client:main',
            'control_node = smrr_crowdnav.control_node:main',              
            'control_node_pubsub = smrr_crowdnav.control_node_pubsub:main',  
            'control_node_test = smrr_crowdnav.control_node_test:main',  
            'control_node_waypoint = smrr_crowdnav.control_node_waypointfollower:main', 
            'control_node_basic_action_server= smrr_crowdnav.control_node_basic:main',   
            'control_node_laser = smrr_crowdnav.control_node_laser:main',  
            'test_publisher = smrr_crowdnav.test_publisher:main',
            'map_scan = smrr_crowdnav.local_line_generator:main',
            'combine_lines = smrr_crowdnav.combined_lines_publisher:main'
        ],
    },
)
