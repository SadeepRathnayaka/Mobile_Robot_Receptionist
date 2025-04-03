// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smrr_interfaces:msg/Entities.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__ENTITIES__STRUCT_H_
#define SMRR_INTERFACES__MSG__DETAIL__ENTITIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'classes'
#include "rosidl_runtime_c/string.h"
// Member 'x'
// Member 'y'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Entities in the package smrr_interfaces.
typedef struct smrr_interfaces__msg__Entities
{
  int16_t count;
  rosidl_runtime_c__String__Sequence classes;
  rosidl_runtime_c__float__Sequence x;
  rosidl_runtime_c__float__Sequence y;
} smrr_interfaces__msg__Entities;

// Struct for a sequence of smrr_interfaces__msg__Entities.
typedef struct smrr_interfaces__msg__Entities__Sequence
{
  smrr_interfaces__msg__Entities * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smrr_interfaces__msg__Entities__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMRR_INTERFACES__MSG__DETAIL__ENTITIES__STRUCT_H_
