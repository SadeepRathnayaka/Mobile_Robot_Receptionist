// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smrr_interfaces:msg/PrefVelocity.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__PREF_VELOCITY__STRUCT_H_
#define SMRR_INTERFACES__MSG__DETAIL__PREF_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'agent_ids'
// Member 'preferred_velocities'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'class_ids'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PrefVelocity in the package smrr_interfaces.
typedef struct smrr_interfaces__msg__PrefVelocity
{
  rosidl_runtime_c__int32__Sequence agent_ids;
  rosidl_runtime_c__String__Sequence class_ids;
  rosidl_runtime_c__float__Sequence preferred_velocities;
} smrr_interfaces__msg__PrefVelocity;

// Struct for a sequence of smrr_interfaces__msg__PrefVelocity.
typedef struct smrr_interfaces__msg__PrefVelocity__Sequence
{
  smrr_interfaces__msg__PrefVelocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smrr_interfaces__msg__PrefVelocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMRR_INTERFACES__MSG__DETAIL__PREF_VELOCITY__STRUCT_H_
