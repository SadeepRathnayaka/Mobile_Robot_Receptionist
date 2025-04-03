// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from smrr_interfaces:msg/VelocityClassData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "smrr_interfaces/msg/detail/velocity_class_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace smrr_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VelocityClassData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) smrr_interfaces::msg::VelocityClassData(_init);
}

void VelocityClassData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<smrr_interfaces::msg::VelocityClassData *>(message_memory);
  typed_message->~VelocityClassData();
}

size_t size_function__VelocityClassData__class_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VelocityClassData__class_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__VelocityClassData__class_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__VelocityClassData__class_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__VelocityClassData__class_ids(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__VelocityClassData__class_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__VelocityClassData__class_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__VelocityClassData__class_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VelocityClassData__x_velocities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VelocityClassData__x_velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__VelocityClassData__x_velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__VelocityClassData__x_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VelocityClassData__x_velocities(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VelocityClassData__x_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VelocityClassData__x_velocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__VelocityClassData__x_velocities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VelocityClassData__y_velocities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VelocityClassData__y_velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__VelocityClassData__y_velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__VelocityClassData__y_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VelocityClassData__y_velocities(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VelocityClassData__y_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VelocityClassData__y_velocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__VelocityClassData__y_velocities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VelocityClassData__x_positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VelocityClassData__x_positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__VelocityClassData__x_positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__VelocityClassData__x_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VelocityClassData__x_positions(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VelocityClassData__x_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VelocityClassData__x_positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__VelocityClassData__x_positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VelocityClassData__y_positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VelocityClassData__y_positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__VelocityClassData__y_positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__VelocityClassData__y_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VelocityClassData__y_positions(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VelocityClassData__y_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VelocityClassData__y_positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__VelocityClassData__y_positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VelocityClassData_message_member_array[5] = {
  {
    "class_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::VelocityClassData, class_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__VelocityClassData__class_ids,  // size() function pointer
    get_const_function__VelocityClassData__class_ids,  // get_const(index) function pointer
    get_function__VelocityClassData__class_ids,  // get(index) function pointer
    fetch_function__VelocityClassData__class_ids,  // fetch(index, &value) function pointer
    assign_function__VelocityClassData__class_ids,  // assign(index, value) function pointer
    resize_function__VelocityClassData__class_ids  // resize(index) function pointer
  },
  {
    "x_velocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::VelocityClassData, x_velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__VelocityClassData__x_velocities,  // size() function pointer
    get_const_function__VelocityClassData__x_velocities,  // get_const(index) function pointer
    get_function__VelocityClassData__x_velocities,  // get(index) function pointer
    fetch_function__VelocityClassData__x_velocities,  // fetch(index, &value) function pointer
    assign_function__VelocityClassData__x_velocities,  // assign(index, value) function pointer
    resize_function__VelocityClassData__x_velocities  // resize(index) function pointer
  },
  {
    "y_velocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::VelocityClassData, y_velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__VelocityClassData__y_velocities,  // size() function pointer
    get_const_function__VelocityClassData__y_velocities,  // get_const(index) function pointer
    get_function__VelocityClassData__y_velocities,  // get(index) function pointer
    fetch_function__VelocityClassData__y_velocities,  // fetch(index, &value) function pointer
    assign_function__VelocityClassData__y_velocities,  // assign(index, value) function pointer
    resize_function__VelocityClassData__y_velocities  // resize(index) function pointer
  },
  {
    "x_positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::VelocityClassData, x_positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__VelocityClassData__x_positions,  // size() function pointer
    get_const_function__VelocityClassData__x_positions,  // get_const(index) function pointer
    get_function__VelocityClassData__x_positions,  // get(index) function pointer
    fetch_function__VelocityClassData__x_positions,  // fetch(index, &value) function pointer
    assign_function__VelocityClassData__x_positions,  // assign(index, value) function pointer
    resize_function__VelocityClassData__x_positions  // resize(index) function pointer
  },
  {
    "y_positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::VelocityClassData, y_positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__VelocityClassData__y_positions,  // size() function pointer
    get_const_function__VelocityClassData__y_positions,  // get_const(index) function pointer
    get_function__VelocityClassData__y_positions,  // get(index) function pointer
    fetch_function__VelocityClassData__y_positions,  // fetch(index, &value) function pointer
    assign_function__VelocityClassData__y_positions,  // assign(index, value) function pointer
    resize_function__VelocityClassData__y_positions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VelocityClassData_message_members = {
  "smrr_interfaces::msg",  // message namespace
  "VelocityClassData",  // message name
  5,  // number of fields
  sizeof(smrr_interfaces::msg::VelocityClassData),
  VelocityClassData_message_member_array,  // message members
  VelocityClassData_init_function,  // function to initialize message memory (memory has to be allocated)
  VelocityClassData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VelocityClassData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VelocityClassData_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace smrr_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<smrr_interfaces::msg::VelocityClassData>()
{
  return &::smrr_interfaces::msg::rosidl_typesupport_introspection_cpp::VelocityClassData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, smrr_interfaces, msg, VelocityClassData)() {
  return &::smrr_interfaces::msg::rosidl_typesupport_introspection_cpp::VelocityClassData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
