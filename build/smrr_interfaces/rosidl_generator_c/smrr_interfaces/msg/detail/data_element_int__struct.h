// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smrr_interfaces:msg/DataElementInt.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_INT__STRUCT_H_
#define SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_INT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'int_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DataElementInt in the package smrr_interfaces.
typedef struct smrr_interfaces__msg__DataElementInt
{
  rosidl_runtime_c__int32__Sequence int_data;
} smrr_interfaces__msg__DataElementInt;

// Struct for a sequence of smrr_interfaces__msg__DataElementInt.
typedef struct smrr_interfaces__msg__DataElementInt__Sequence
{
  smrr_interfaces__msg__DataElementInt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smrr_interfaces__msg__DataElementInt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_INT__STRUCT_H_
