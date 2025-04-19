cmake_minimum_required(VERSION 3.8)
project(smrr_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Entities.msg"
  "msg/InferenceResult.msg"
  "msg/Yolov10Inference.msg"
  "msg/Buffer.msg"
  "msg/DataElementFloat.msg"
  "msg/DataElementInt.msg"
  "msg/DataElementString.msg"
  "msg/PrefVelocity.msg"
  "msg/Footprint.msg"
  "msg/VelocityClassData.msg"
  "action/NavigateToGoal.action"
  "action/ArmControlServer.action"
  DEPENDENCIES std_msgs geometry_msgs
 )

ament_package()
