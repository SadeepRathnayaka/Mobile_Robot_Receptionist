// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smrr_interfaces:msg/Buffer.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__BUFFER__STRUCT_H_
#define SMRR_INTERFACES__MSG__DETAIL__BUFFER__STRUCT_H_

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
// Member 'x_mean'
// Member 'y_mean'
// Member 'x_std_dev'
// Member 'y_std_dev'
// Member 'x_variance'
// Member 'y_variance'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'x_velocities'
// Member 'y_velocities'
// Member 'x_positions'
// Member 'y_positions'
#include "smrr_interfaces/msg/detail/data_element_float__struct.h"
// Member 'class_ids'
#include "smrr_interfaces/msg/detail/data_element_string__struct.h"
// Member 'majority_class_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Buffer in the package smrr_interfaces.
typedef struct smrr_interfaces__msg__Buffer
{
  rosidl_runtime_c__int32__Sequence agent_ids;
  int16_t agent_count;
  /// # Buffer data for each agent (last 10 values for each field)
  /// float32[] x_velocities    # Flattened array with up to 10 values per agent
  /// float32[] y_velocities    # Flattened array with up to 10 values per agent
  /// string[] class_ids         # Flattened array with up to 10 values per agent
  /// float32[] x_positions     # Flattened array with up to 10 values per agent
  /// float32[] y_positions     # Flattened array with up to 10 values per agent
  /// nested data structure for each agent
  smrr_interfaces__msg__DataElementFloat__Sequence x_velocities;
  smrr_interfaces__msg__DataElementFloat__Sequence y_velocities;
  smrr_interfaces__msg__DataElementString__Sequence class_ids;
  smrr_interfaces__msg__DataElementFloat__Sequence x_positions;
  smrr_interfaces__msg__DataElementFloat__Sequence y_positions;
  /// Statistical data for each agent
  /// Mean x-velocity for each agent
  rosidl_runtime_c__float__Sequence x_mean;
  /// Mean y-velocity for each agent
  rosidl_runtime_c__float__Sequence y_mean;
  /// Standard deviation of x-velocity for each agent
  rosidl_runtime_c__float__Sequence x_std_dev;
  /// Standard deviation of y-velocity for each agent
  rosidl_runtime_c__float__Sequence y_std_dev;
  /// Variance of x-velocity for each agent
  rosidl_runtime_c__float__Sequence x_variance;
  /// Variance of y-velocity for each agent
  rosidl_runtime_c__float__Sequence y_variance;
  /// Most common class ID for each agent
  rosidl_runtime_c__String__Sequence majority_class_id;
} smrr_interfaces__msg__Buffer;

// Struct for a sequence of smrr_interfaces__msg__Buffer.
typedef struct smrr_interfaces__msg__Buffer__Sequence
{
  smrr_interfaces__msg__Buffer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smrr_interfaces__msg__Buffer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMRR_INTERFACES__MSG__DETAIL__BUFFER__STRUCT_H_
