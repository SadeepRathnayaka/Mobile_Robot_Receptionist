// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smrr_interfaces:msg/DataElementFloat.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_FLOAT__STRUCT_H_
#define SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_FLOAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'float_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DataElementFloat in the package smrr_interfaces.
typedef struct smrr_interfaces__msg__DataElementFloat
{
  rosidl_runtime_c__float__Sequence float_data;
} smrr_interfaces__msg__DataElementFloat;

// Struct for a sequence of smrr_interfaces__msg__DataElementFloat.
typedef struct smrr_interfaces__msg__DataElementFloat__Sequence
{
  smrr_interfaces__msg__DataElementFloat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smrr_interfaces__msg__DataElementFloat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_FLOAT__STRUCT_H_
