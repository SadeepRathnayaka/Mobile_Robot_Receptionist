// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smrr_interfaces:msg/VelocityClassData.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__VELOCITY_CLASS_DATA__STRUCT_H_
#define SMRR_INTERFACES__MSG__DETAIL__VELOCITY_CLASS_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_ids'
#include "rosidl_runtime_c/string.h"
// Member 'x_velocities'
// Member 'y_velocities'
// Member 'x_positions'
// Member 'y_positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/VelocityClassData in the package smrr_interfaces.
typedef struct smrr_interfaces__msg__VelocityClassData
{
  rosidl_runtime_c__String__Sequence class_ids;
  rosidl_runtime_c__float__Sequence x_velocities;
  rosidl_runtime_c__float__Sequence y_velocities;
  rosidl_runtime_c__float__Sequence x_positions;
  rosidl_runtime_c__float__Sequence y_positions;
} smrr_interfaces__msg__VelocityClassData;

// Struct for a sequence of smrr_interfaces__msg__VelocityClassData.
typedef struct smrr_interfaces__msg__VelocityClassData__Sequence
{
  smrr_interfaces__msg__VelocityClassData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smrr_interfaces__msg__VelocityClassData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMRR_INTERFACES__MSG__DETAIL__VELOCITY_CLASS_DATA__STRUCT_H_
