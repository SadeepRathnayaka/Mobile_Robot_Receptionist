// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smrr_interfaces:msg/Yolov10Inference.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__YOLOV10_INFERENCE__STRUCT_H_
#define SMRR_INTERFACES__MSG__DETAIL__YOLOV10_INFERENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'yolov10_inference'
#include "smrr_interfaces/msg/detail/inference_result__struct.h"

/// Struct defined in msg/Yolov10Inference in the package smrr_interfaces.
typedef struct smrr_interfaces__msg__Yolov10Inference
{
  std_msgs__msg__Header header;
  smrr_interfaces__msg__InferenceResult__Sequence yolov10_inference;
} smrr_interfaces__msg__Yolov10Inference;

// Struct for a sequence of smrr_interfaces__msg__Yolov10Inference.
typedef struct smrr_interfaces__msg__Yolov10Inference__Sequence
{
  smrr_interfaces__msg__Yolov10Inference * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smrr_interfaces__msg__Yolov10Inference__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMRR_INTERFACES__MSG__DETAIL__YOLOV10_INFERENCE__STRUCT_H_
