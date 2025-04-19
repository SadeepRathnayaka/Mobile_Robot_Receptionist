from setuptools import find_packages, setup

package_name = 'smrr_arm_executions'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='jetson',
    maintainer_email='jetsonxavieruom@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        	'joystick_control = smrr_arm_executions.joystick_control:main',
        	'serial_write = smrr_arm_executions.serial_write:main',
        	'arm_alignment = smrr_arm_executions.arm_alignment:main',
        	'hand_detector = smrr_arm_executions.hand_detector:main',
        	'arm_movements = smrr_arm_executions.arm_movements:main',
        	'button_localization = smrr_arm_executions.button_localization:main',
        ],
    },
)
