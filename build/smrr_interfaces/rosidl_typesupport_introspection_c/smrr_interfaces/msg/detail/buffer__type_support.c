// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from smrr_interfaces:msg/Buffer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "smrr_interfaces/msg/detail/buffer__rosidl_typesupport_introspection_c.h"
#include "smrr_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "smrr_interfaces/msg/detail/buffer__functions.h"
#include "smrr_interfaces/msg/detail/buffer__struct.h"


// Include directives for member types
// Member `agent_ids`
// Member `x_mean`
// Member `y_mean`
// Member `x_std_dev`
// Member `y_std_dev`
// Member `x_variance`
// Member `y_variance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `x_velocities`
// Member `y_velocities`
// Member `x_positions`
// Member `y_positions`
#include "smrr_interfaces/msg/data_element_float.h"
// Member `x_velocities`
// Member `y_velocities`
// Member `x_positions`
// Member `y_positions`
#include "smrr_interfaces/msg/detail/data_element_float__rosidl_typesupport_introspection_c.h"
// Member `class_ids`
#include "smrr_interfaces/msg/data_element_string.h"
// Member `class_ids`
#include "smrr_interfaces/msg/detail/data_element_string__rosidl_typesupport_introspection_c.h"
// Member `majority_class_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  smrr_interfaces__msg__Buffer__init(message_memory);
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_fini_function(void * message_memory)
{
  smrr_interfaces__msg__Buffer__fini(message_memory);
}

size_t smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__agent_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__agent_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__agent_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__agent_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__agent_ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__agent_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__agent_ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__agent_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__x_velocities(
  const void * untyped_member)
{
  const smrr_interfaces__msg__DataElementFloat__Sequence * member =
    (const smrr_interfaces__msg__DataElementFloat__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__x_velocities(
  const void * untyped_member, size_t index)
{
  const smrr_interfaces__msg__DataElementFloat__Sequence * member =
    (const smrr_interfaces__msg__DataElementFloat__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__x_velocities(
  void * untyped_member, size_t index)
{
  smrr_interfaces__msg__DataElementFloat__Sequence * member =
    (smrr_interfaces__msg__DataElementFloat__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__x_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const smrr_interfaces__msg__DataElementFloat * item =
    ((const smrr_interfaces__msg__DataElementFloat *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__x_velocities(untyped_member, index));
  smrr_interfaces__msg__DataElementFloat * value =
    (smrr_interfaces__msg__DataElementFloat *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__x_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  smrr_interfaces__msg__DataElementFloat * item =
    ((smrr_interfaces__msg__DataElementFloat *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__x_velocities(untyped_member, index));
  const smrr_interfaces__msg__DataElementFloat * value =
    (const smrr_interfaces__msg__DataElementFloat *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__x_velocities(
  void * untyped_member, size_t size)
{
  smrr_interfaces__msg__DataElementFloat__Sequence * member =
    (smrr_interfaces__msg__DataElementFloat__Sequence *)(untyped_member);
  smrr_interfaces__msg__DataElementFloat__Sequence__fini(member);
  return smrr_interfaces__msg__DataElementFloat__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__y_velocities(
  const void * untyped_member)
{
  const smrr_interfaces__msg__DataElementFloat__Sequence * member =
    (const smrr_interfaces__msg__DataElementFloat__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__y_velocities(
  const void * untyped_member, size_t index)
{
  const smrr_interfaces__msg__DataElementFloat__Sequence * member =
    (const smrr_interfaces__msg__DataElementFloat__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__y_velocities(
  void * untyped_member, size_t index)
{
  smrr_interfaces__msg__DataElementFloat__Sequence * member =
    (smrr_interfaces__msg__DataElementFloat__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__y_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const smrr_interfaces__msg__DataElementFloat * item =
    ((const smrr_interfaces__msg__DataElementFloat *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__y_velocities(untyped_member, index));
  smrr_interfaces__msg__DataElementFloat * value =
    (smrr_interfaces__msg__DataElementFloat *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__y_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  smrr_interfaces__msg__DataElementFloat * item =
    ((smrr_interfaces__msg__DataElementFloat *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__y_velocities(untyped_member, index));
  const smrr_interfaces__msg__DataElementFloat * value =
    (const smrr_interfaces__msg__DataElementFloat *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__y_velocities(
  void * untyped_member, size_t size)
{
  smrr_interfaces__msg__DataElementFloat__Sequence * member =
    (smrr_interfaces__msg__DataElementFloat__Sequence *)(untyped_member);
  smrr_interfaces__msg__DataElementFloat__Sequence__fini(member);
  return smrr_interfaces__msg__DataElementFloat__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__class_ids(
  const void * untyped_member)
{
  const smrr_interfaces__msg__DataElementString__Sequence * member =
    (const smrr_interfaces__msg__DataElementString__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__class_ids(
  const void * untyped_member, size_t index)
{
  const smrr_interfaces__msg__DataElementString__Sequence * member =
    (const smrr_interfaces__msg__DataElementString__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__class_ids(
  void * untyped_member, size_t index)
{
  smrr_interfaces__msg__DataElementString__Sequence * member =
    (smrr_interfaces__msg__DataElementString__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__class_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const smrr_interfaces__msg__DataElementString * item =
    ((const smrr_interfaces__msg__DataElementString *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__class_ids(untyped_member, index));
  smrr_interfaces__msg__DataElementString * value =
    (smrr_interfaces__msg__DataElementString *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__class_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  smrr_interfaces__msg__DataElementString * item =
    ((smrr_interfaces__msg__DataElementString *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__class_ids(untyped_member, index));
  const smrr_interfaces__msg__DataElementString * value =
    (const smrr_interfaces__msg__DataElementString *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__class_ids(
  void * untyped_member, size_t size)
{
  smrr_interfaces__msg__DataElementString__Sequence * member =
    (smrr_interfaces__msg__DataElementString__Sequence *)(untyped_member);
  smrr_interfaces__msg__DataElementString__Sequence__fini(member);
  return smrr_interfaces__msg__DataElementString__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__x_positions(
  const void * untyped_member)
{
  const smrr_interfaces__msg__DataElementFloat__Sequence * member =
    (const smrr_interfaces__msg__DataElementFloat__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__x_positions(
  const void * untyped_member, size_t index)
{
  const smrr_interfaces__msg__DataElementFloat__Sequence * member =
    (const smrr_interfaces__msg__DataElementFloat__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__x_positions(
  void * untyped_member, size_t index)
{
  smrr_interfaces__msg__DataElementFloat__Sequence * member =
    (smrr_interfaces__msg__DataElementFloat__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__x_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const smrr_interfaces__msg__DataElementFloat * item =
    ((const smrr_interfaces__msg__DataElementFloat *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__x_positions(untyped_member, index));
  smrr_interfaces__msg__DataElementFloat * value =
    (smrr_interfaces__msg__DataElementFloat *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__x_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  smrr_interfaces__msg__DataElementFloat * item =
    ((smrr_interfaces__msg__DataElementFloat *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__x_positions(untyped_member, index));
  const smrr_interfaces__msg__DataElementFloat * value =
    (const smrr_interfaces__msg__DataElementFloat *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__x_positions(
  void * untyped_member, size_t size)
{
  smrr_interfaces__msg__DataElementFloat__Sequence * member =
    (smrr_interfaces__msg__DataElementFloat__Sequence *)(untyped_member);
  smrr_interfaces__msg__DataElementFloat__Sequence__fini(member);
  return smrr_interfaces__msg__DataElementFloat__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__y_positions(
  const void * untyped_member)
{
  const smrr_interfaces__msg__DataElementFloat__Sequence * member =
    (const smrr_interfaces__msg__DataElementFloat__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__y_positions(
  const void * untyped_member, size_t index)
{
  const smrr_interfaces__msg__DataElementFloat__Sequence * member =
    (const smrr_interfaces__msg__DataElementFloat__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__y_positions(
  void * untyped_member, size_t index)
{
  smrr_interfaces__msg__DataElementFloat__Sequence * member =
    (smrr_interfaces__msg__DataElementFloat__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__y_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const smrr_interfaces__msg__DataElementFloat * item =
    ((const smrr_interfaces__msg__DataElementFloat *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__y_positions(untyped_member, index));
  smrr_interfaces__msg__DataElementFloat * value =
    (smrr_interfaces__msg__DataElementFloat *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__y_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  smrr_interfaces__msg__DataElementFloat * item =
    ((smrr_interfaces__msg__DataElementFloat *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__y_positions(untyped_member, index));
  const smrr_interfaces__msg__DataElementFloat * value =
    (const smrr_interfaces__msg__DataElementFloat *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__y_positions(
  void * untyped_member, size_t size)
{
  smrr_interfaces__msg__DataElementFloat__Sequence * member =
    (smrr_interfaces__msg__DataElementFloat__Sequence *)(untyped_member);
  smrr_interfaces__msg__DataElementFloat__Sequence__fini(member);
  return smrr_interfaces__msg__DataElementFloat__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__x_mean(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__x_mean(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__x_mean(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__x_mean(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__x_mean(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__x_mean(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__x_mean(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__x_mean(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__y_mean(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__y_mean(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__y_mean(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__y_mean(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__y_mean(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__y_mean(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__y_mean(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__y_mean(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__x_std_dev(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__x_std_dev(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__x_std_dev(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__x_std_dev(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__x_std_dev(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__x_std_dev(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__x_std_dev(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__x_std_dev(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__y_std_dev(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__y_std_dev(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__y_std_dev(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__y_std_dev(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__y_std_dev(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__y_std_dev(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__y_std_dev(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__y_std_dev(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__x_variance(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__x_variance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__x_variance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__x_variance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__x_variance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__x_variance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__x_variance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__x_variance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__y_variance(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__y_variance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__y_variance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__y_variance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__y_variance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__y_variance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__y_variance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__y_variance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__majority_class_id(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__majority_class_id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__majority_class_id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__majority_class_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__majority_class_id(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__majority_class_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__majority_class_id(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__majority_class_id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_message_member_array[14] = {
  {
    "agent_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Buffer, agent_ids),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__agent_ids,  // size() function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__agent_ids,  // get_const(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__agent_ids,  // get(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__agent_ids,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__agent_ids,  // assign(index, value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__agent_ids  // resize(index) function pointer
  },
  {
    "agent_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Buffer, agent_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Buffer, x_velocities),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__x_velocities,  // size() function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__x_velocities,  // get_const(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__x_velocities,  // get(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__x_velocities,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__x_velocities,  // assign(index, value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__x_velocities  // resize(index) function pointer
  },
  {
    "y_velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Buffer, y_velocities),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__y_velocities,  // size() function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__y_velocities,  // get_const(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__y_velocities,  // get(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__y_velocities,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__y_velocities,  // assign(index, value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__y_velocities  // resize(index) function pointer
  },
  {
    "class_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Buffer, class_ids),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__class_ids,  // size() function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__class_ids,  // get_const(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__class_ids,  // get(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__class_ids,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__class_ids,  // assign(index, value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__class_ids  // resize(index) function pointer
  },
  {
    "x_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Buffer, x_positions),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__x_positions,  // size() function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__x_positions,  // get_const(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__x_positions,  // get(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__x_positions,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__x_positions,  // assign(index, value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__x_positions  // resize(index) function pointer
  },
  {
    "y_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Buffer, y_positions),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__y_positions,  // size() function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__y_positions,  // get_const(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__y_positions,  // get(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__y_positions,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__y_positions,  // assign(index, value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__y_positions  // resize(index) function pointer
  },
  {
    "x_mean",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Buffer, x_mean),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__x_mean,  // size() function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__x_mean,  // get_const(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__x_mean,  // get(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__x_mean,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__x_mean,  // assign(index, value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__x_mean  // resize(index) function pointer
  },
  {
    "y_mean",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Buffer, y_mean),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__y_mean,  // size() function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__y_mean,  // get_const(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__y_mean,  // get(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__y_mean,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__y_mean,  // assign(index, value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__y_mean  // resize(index) function pointer
  },
  {
    "x_std_dev",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Buffer, x_std_dev),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__x_std_dev,  // size() function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__x_std_dev,  // get_const(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__x_std_dev,  // get(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__x_std_dev,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__x_std_dev,  // assign(index, value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__x_std_dev  // resize(index) function pointer
  },
  {
    "y_std_dev",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Buffer, y_std_dev),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__y_std_dev,  // size() function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__y_std_dev,  // get_const(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__y_std_dev,  // get(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__y_std_dev,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__y_std_dev,  // assign(index, value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__y_std_dev  // resize(index) function pointer
  },
  {
    "x_variance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Buffer, x_variance),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__x_variance,  // size() function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__x_variance,  // get_const(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__x_variance,  // get(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__x_variance,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__x_variance,  // assign(index, value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__x_variance  // resize(index) function pointer
  },
  {
    "y_variance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Buffer, y_variance),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__y_variance,  // size() function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__y_variance,  // get_const(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__y_variance,  // get(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__y_variance,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__y_variance,  // assign(index, value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__y_variance  // resize(index) function pointer
  },
  {
    "majority_class_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__Buffer, majority_class_id),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__size_function__Buffer__majority_class_id,  // size() function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_const_function__Buffer__majority_class_id,  // get_const(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__get_function__Buffer__majority_class_id,  // get(index) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__fetch_function__Buffer__majority_class_id,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__assign_function__Buffer__majority_class_id,  // assign(index, value) function pointer
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__resize_function__Buffer__majority_class_id  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_message_members = {
  "smrr_interfaces__msg",  // message namespace
  "Buffer",  // message name
  14,  // number of fields
  sizeof(smrr_interfaces__msg__Buffer),
  smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_message_member_array,  // message members
  smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_init_function,  // function to initialize message memory (memory has to be allocated)
  smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_message_type_support_handle = {
  0,
  &smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_smrr_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smrr_interfaces, msg, Buffer)() {
  smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smrr_interfaces, msg, DataElementFloat)();
  smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smrr_interfaces, msg, DataElementFloat)();
  smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smrr_interfaces, msg, DataElementString)();
  smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smrr_interfaces, msg, DataElementFloat)();
  smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smrr_interfaces, msg, DataElementFloat)();
  if (!smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_message_type_support_handle.typesupport_identifier) {
    smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &smrr_interfaces__msg__Buffer__rosidl_typesupport_introspection_c__Buffer_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
