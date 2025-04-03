// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from smrr_interfaces:msg/DataElementString.idl
// generated code does not contain a copyright notice
#include "smrr_interfaces/msg/detail/data_element_string__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "smrr_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "smrr_interfaces/msg/detail/data_element_string__struct.h"
#include "smrr_interfaces/msg/detail/data_element_string__functions.h"
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

#include "rosidl_runtime_c/string.h"  // string_data
#include "rosidl_runtime_c/string_functions.h"  // string_data

// forward declare type support functions


using _DataElementString__ros_msg_type = smrr_interfaces__msg__DataElementString;

static bool _DataElementString__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DataElementString__ros_msg_type * ros_message = static_cast<const _DataElementString__ros_msg_type *>(untyped_ros_message);
  // Field name: string_data
  {
    size_t size = ros_message->string_data.size;
    auto array_ptr = ros_message->string_data.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _DataElementString__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DataElementString__ros_msg_type * ros_message = static_cast<_DataElementString__ros_msg_type *>(untyped_ros_message);
  // Field name: string_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->string_data.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->string_data);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->string_data, size)) {
      fprintf(stderr, "failed to create array for field 'string_data'");
      return false;
    }
    auto array_ptr = ros_message->string_data.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'string_data'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smrr_interfaces
size_t get_serialized_size_smrr_interfaces__msg__DataElementString(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DataElementString__ros_msg_type * ros_message = static_cast<const _DataElementString__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name string_data
  {
    size_t array_size = ros_message->string_data.size;
    auto array_ptr = ros_message->string_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DataElementString__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_smrr_interfaces__msg__DataElementString(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smrr_interfaces
size_t max_serialized_size_smrr_interfaces__msg__DataElementString(
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

  // member: string_data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = smrr_interfaces__msg__DataElementString;
    is_plain =
      (
      offsetof(DataType, string_data) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DataElementString__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_smrr_interfaces__msg__DataElementString(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DataElementString = {
  "smrr_interfaces::msg",
  "DataElementString",
  _DataElementString__cdr_serialize,
  _DataElementString__cdr_deserialize,
  _DataElementString__get_serialized_size,
  _DataElementString__max_serialized_size
};

static rosidl_message_type_support_t _DataElementString__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DataElementString,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, smrr_interfaces, msg, DataElementString)() {
  return &_DataElementString__type_support;
}

#if defined(__cplusplus)
}
#endif
