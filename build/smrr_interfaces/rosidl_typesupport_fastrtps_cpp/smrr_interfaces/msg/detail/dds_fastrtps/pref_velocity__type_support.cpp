// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from smrr_interfaces:msg/PrefVelocity.idl
// generated code does not contain a copyright notice
#include "smrr_interfaces/msg/detail/pref_velocity__rosidl_typesupport_fastrtps_cpp.hpp"
#include "smrr_interfaces/msg/detail/pref_velocity__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace smrr_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_smrr_interfaces
cdr_serialize(
  const smrr_interfaces::msg::PrefVelocity & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: agent_ids
  {
    cdr << ros_message.agent_ids;
  }
  // Member: class_ids
  {
    cdr << ros_message.class_ids;
  }
  // Member: preferred_velocities
  {
    cdr << ros_message.preferred_velocities;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_smrr_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  smrr_interfaces::msg::PrefVelocity & ros_message)
{
  // Member: agent_ids
  {
    cdr >> ros_message.agent_ids;
  }

  // Member: class_ids
  {
    cdr >> ros_message.class_ids;
  }

  // Member: preferred_velocities
  {
    cdr >> ros_message.preferred_velocities;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_smrr_interfaces
get_serialized_size(
  const smrr_interfaces::msg::PrefVelocity & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: agent_ids
  {
    size_t array_size = ros_message.agent_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.agent_ids[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: class_ids
  {
    size_t array_size = ros_message.class_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.class_ids[index].size() + 1);
    }
  }
  // Member: preferred_velocities
  {
    size_t array_size = ros_message.preferred_velocities.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.preferred_velocities[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_smrr_interfaces
max_serialized_size_PrefVelocity(
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


  // Member: agent_ids
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

  // Member: class_ids
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

  // Member: preferred_velocities
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
    using DataType = smrr_interfaces::msg::PrefVelocity;
    is_plain =
      (
      offsetof(DataType, preferred_velocities) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PrefVelocity__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const smrr_interfaces::msg::PrefVelocity *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PrefVelocity__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<smrr_interfaces::msg::PrefVelocity *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PrefVelocity__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const smrr_interfaces::msg::PrefVelocity *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PrefVelocity__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PrefVelocity(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PrefVelocity__callbacks = {
  "smrr_interfaces::msg",
  "PrefVelocity",
  _PrefVelocity__cdr_serialize,
  _PrefVelocity__cdr_deserialize,
  _PrefVelocity__get_serialized_size,
  _PrefVelocity__max_serialized_size
};

static rosidl_message_type_support_t _PrefVelocity__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PrefVelocity__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace smrr_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_smrr_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<smrr_interfaces::msg::PrefVelocity>()
{
  return &smrr_interfaces::msg::typesupport_fastrtps_cpp::_PrefVelocity__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, smrr_interfaces, msg, PrefVelocity)() {
  return &smrr_interfaces::msg::typesupport_fastrtps_cpp::_PrefVelocity__handle;
}

#ifdef __cplusplus
}
#endif
