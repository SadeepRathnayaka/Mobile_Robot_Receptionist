// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from smrr_interfaces:msg/VelocityClassData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "smrr_interfaces/msg/detail/velocity_class_data__rosidl_typesupport_introspection_c.h"
#include "smrr_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "smrr_interfaces/msg/detail/velocity_class_data__functions.h"
#include "smrr_interfaces/msg/detail/velocity_class_data__struct.h"


// Include directives for member types
// Member `class_ids`
#include "rosidl_runtime_c/string_functions.h"
// Member `x_velocities`
// Member `y_velocities`
// Member `x_positions`
// Member `y_positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__VelocityClassData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  smrr_interfaces__msg__VelocityClassData__init(message_memory);
}

void smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__VelocityClassData_fini_function(void * message_memory)
{
  smrr_interfaces__msg__VelocityClassData__fini(message_memory);
}

size_t smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__size_function__VelocityClassData__class_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_const_function__VelocityClassData__class_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_function__VelocityClassData__class_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__fetch_function__VelocityClassData__class_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_const_function__VelocityClassData__class_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__assign_function__VelocityClassData__class_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_function__VelocityClassData__class_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__resize_function__VelocityClassData__class_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__size_function__VelocityClassData__x_velocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_const_function__VelocityClassData__x_velocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_function__VelocityClassData__x_velocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__fetch_function__VelocityClassData__x_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_const_function__VelocityClassData__x_velocities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__assign_function__VelocityClassData__x_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_function__VelocityClassData__x_velocities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__resize_function__VelocityClassData__x_velocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__size_function__VelocityClassData__y_velocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_const_function__VelocityClassData__y_velocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_function__VelocityClassData__y_velocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__fetch_function__VelocityClassData__y_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_const_function__VelocityClassData__y_velocities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__assign_function__VelocityClassData__y_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_function__VelocityClassData__y_velocities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__resize_function__VelocityClassData__y_velocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__size_function__VelocityClassData__x_positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_const_function__VelocityClassData__x_positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_function__VelocityClassData__x_positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__fetch_function__VelocityClassData__x_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_const_function__VelocityClassData__x_positions(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__assign_function__VelocityClassData__x_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_function__VelocityClassData__x_positions(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__resize_function__VelocityClassData__x_positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__size_function__VelocityClassData__y_positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_const_function__VelocityClassData__y_positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_function__VelocityClassData__y_positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__fetch_function__VelocityClassData__y_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_const_function__VelocityClassData__y_positions(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__assign_function__VelocityClassData__y_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_function__VelocityClassData__y_positions(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__resize_function__VelocityClassData__y_positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__VelocityClassData_message_member_array[5] = {
  {
    "class_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__VelocityClassData, class_ids),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__size_function__VelocityClassData__class_ids,  // size() function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_const_function__VelocityClassData__class_ids,  // get_const(index) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_function__VelocityClassData__class_ids,  // get(index) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__fetch_function__VelocityClassData__class_ids,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__assign_function__VelocityClassData__class_ids,  // assign(index, value) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__resize_function__VelocityClassData__class_ids  // resize(index) function pointer
  },
  {
    "x_velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__VelocityClassData, x_velocities),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__size_function__VelocityClassData__x_velocities,  // size() function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_const_function__VelocityClassData__x_velocities,  // get_const(index) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_function__VelocityClassData__x_velocities,  // get(index) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__fetch_function__VelocityClassData__x_velocities,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__assign_function__VelocityClassData__x_velocities,  // assign(index, value) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__resize_function__VelocityClassData__x_velocities  // resize(index) function pointer
  },
  {
    "y_velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__VelocityClassData, y_velocities),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__size_function__VelocityClassData__y_velocities,  // size() function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_const_function__VelocityClassData__y_velocities,  // get_const(index) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_function__VelocityClassData__y_velocities,  // get(index) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__fetch_function__VelocityClassData__y_velocities,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__assign_function__VelocityClassData__y_velocities,  // assign(index, value) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__resize_function__VelocityClassData__y_velocities  // resize(index) function pointer
  },
  {
    "x_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__VelocityClassData, x_positions),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__size_function__VelocityClassData__x_positions,  // size() function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_const_function__VelocityClassData__x_positions,  // get_const(index) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_function__VelocityClassData__x_positions,  // get(index) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__fetch_function__VelocityClassData__x_positions,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__assign_function__VelocityClassData__x_positions,  // assign(index, value) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__resize_function__VelocityClassData__x_positions  // resize(index) function pointer
  },
  {
    "y_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__VelocityClassData, y_positions),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__size_function__VelocityClassData__y_positions,  // size() function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_const_function__VelocityClassData__y_positions,  // get_const(index) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__get_function__VelocityClassData__y_positions,  // get(index) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__fetch_function__VelocityClassData__y_positions,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__assign_function__VelocityClassData__y_positions,  // assign(index, value) function pointer
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__resize_function__VelocityClassData__y_positions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__VelocityClassData_message_members = {
  "smrr_interfaces__msg",  // message namespace
  "VelocityClassData",  // message name
  5,  // number of fields
  sizeof(smrr_interfaces__msg__VelocityClassData),
  smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__VelocityClassData_message_member_array,  // message members
  smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__VelocityClassData_init_function,  // function to initialize message memory (memory has to be allocated)
  smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__VelocityClassData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__VelocityClassData_message_type_support_handle = {
  0,
  &smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__VelocityClassData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_smrr_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smrr_interfaces, msg, VelocityClassData)() {
  if (!smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__VelocityClassData_message_type_support_handle.typesupport_identifier) {
    smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__VelocityClassData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &smrr_interfaces__msg__VelocityClassData__rosidl_typesupport_introspection_c__VelocityClassData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
