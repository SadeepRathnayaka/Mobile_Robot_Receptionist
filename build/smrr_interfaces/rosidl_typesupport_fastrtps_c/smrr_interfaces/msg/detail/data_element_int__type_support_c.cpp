// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from smrr_interfaces:msg/DataElementInt.idl
// generated code does not contain a copyright notice
#include "smrr_interfaces/msg/detail/data_element_int__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "smrr_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "smrr_interfaces/msg/detail/data_element_int__struct.h"
#include "smrr_interfaces/msg/detail/data_element_int__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // int_data
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // int_data

// forward declare type support functions


using _DataElementInt__ros_msg_type = smrr_interfaces__msg__DataElementInt;

static bool _DataElementInt__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DataElementInt__ros_msg_type * ros_message = static_cast<const _DataElementInt__ros_msg_type *>(untyped_ros_message);
  // Field name: int_data
  {
    size_t size = ros_message->int_data.size;
    auto array_ptr = ros_message->int_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _DataElementInt__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DataElementInt__ros_msg_type * ros_message = static_cast<_DataElementInt__ros_msg_type *>(untyped_ros_message);
  // Field name: int_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int_data.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->int_data);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->int_data, size)) {
      fprintf(stderr, "failed to create array for field 'int_data'");
      return false;
    }
    auto array_ptr = ros_message->int_data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smrr_interfaces
size_t get_serialized_size_smrr_interfaces__msg__DataElementInt(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DataElementInt__ros_msg_type * ros_message = static_cast<const _DataElementInt__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name int_data
  {
    size_t array_size = ros_message->int_data.size;
    auto array_ptr = ros_message->int_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DataElementInt__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_smrr_interfaces__msg__DataElementInt(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smrr_interfaces
size_t max_serialized_size_smrr_interfaces__msg__DataElementInt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: int_data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = smrr_interfaces__msg__DataElementInt;
    is_plain =
      (
      offsetof(DataType, int_data) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DataElementInt__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_smrr_interfaces__msg__DataElementInt(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DataElementInt = {
  "smrr_interfaces::msg",
  "DataElementInt",
  _DataElementInt__cdr_serialize,
  _DataElementInt__cdr_deserialize,
  _DataElementInt__get_serialized_size,
  _DataElementInt__max_serialized_size
};

static rosidl_message_type_support_t _DataElementInt__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DataElementInt,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, DataElementInt)() {
  return &_DataElementInt__type_support;
}

#if defined(__cplusplus)
}
#endif
