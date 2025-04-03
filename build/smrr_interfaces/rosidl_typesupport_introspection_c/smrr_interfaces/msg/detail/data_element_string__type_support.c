// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from smrr_interfaces:msg/DataElementString.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "smrr_interfaces/msg/detail/data_element_string__rosidl_typesupport_introspection_c.h"
#include "smrr_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "smrr_interfaces/msg/detail/data_element_string__functions.h"
#include "smrr_interfaces/msg/detail/data_element_string__struct.h"


// Include directives for member types
// Member `string_data`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__DataElementString_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  smrr_interfaces__msg__DataElementString__init(message_memory);
}

void smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__DataElementString_fini_function(void * message_memory)
{
  smrr_interfaces__msg__DataElementString__fini(message_memory);
}

size_t smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__size_function__DataElementString__string_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__get_const_function__DataElementString__string_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__get_function__DataElementString__string_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__fetch_function__DataElementString__string_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__get_const_function__DataElementString__string_data(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__assign_function__DataElementString__string_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__get_function__DataElementString__string_data(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__resize_function__DataElementString__string_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__DataElementString_message_member_array[1] = {
  {
    "string_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces__msg__DataElementString, string_data),  // bytes offset in struct
    NULL,  // default value
    smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__size_function__DataElementString__string_data,  // size() function pointer
    smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__get_const_function__DataElementString__string_data,  // get_const(index) function pointer
    smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__get_function__DataElementString__string_data,  // get(index) function pointer
    smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__fetch_function__DataElementString__string_data,  // fetch(index, &value) function pointer
    smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__assign_function__DataElementString__string_data,  // assign(index, value) function pointer
    smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__resize_function__DataElementString__string_data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__DataElementString_message_members = {
  "smrr_interfaces__msg",  // message namespace
  "DataElementString",  // message name
  1,  // number of fields
  sizeof(smrr_interfaces__msg__DataElementString),
  smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__DataElementString_message_member_array,  // message members
  smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__DataElementString_init_function,  // function to initialize message memory (memory has to be allocated)
  smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__DataElementString_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__DataElementString_message_type_support_handle = {
  0,
  &smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__DataElementString_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_smrr_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smrr_interfaces, msg, DataElementString)() {
  if (!smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__DataElementString_message_type_support_handle.typesupport_identifier) {
    smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__DataElementString_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &smrr_interfaces__msg__DataElementString__rosidl_typesupport_introspection_c__DataElementString_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
