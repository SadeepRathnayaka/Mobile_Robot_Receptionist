// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from smrr_interfaces:msg/Yolov10Inference.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "smrr_interfaces/msg/detail/yolov10_inference__struct.hpp"
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

void Yolov10Inference_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) smrr_interfaces::msg::Yolov10Inference(_init);
}

void Yolov10Inference_fini_function(void * message_memory)
{
  auto typed_message = static_cast<smrr_interfaces::msg::Yolov10Inference *>(message_memory);
  typed_message->~Yolov10Inference();
}

size_t size_function__Yolov10Inference__yolov10_inference(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<smrr_interfaces::msg::InferenceResult> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Yolov10Inference__yolov10_inference(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<smrr_interfaces::msg::InferenceResult> *>(untyped_member);
  return &member[index];
}

void * get_function__Yolov10Inference__yolov10_inference(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<smrr_interfaces::msg::InferenceResult> *>(untyped_member);
  return &member[index];
}

void fetch_function__Yolov10Inference__yolov10_inference(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const smrr_interfaces::msg::InferenceResult *>(
    get_const_function__Yolov10Inference__yolov10_inference(untyped_member, index));
  auto & value = *reinterpret_cast<smrr_interfaces::msg::InferenceResult *>(untyped_value);
  value = item;
}

void assign_function__Yolov10Inference__yolov10_inference(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<smrr_interfaces::msg::InferenceResult *>(
    get_function__Yolov10Inference__yolov10_inference(untyped_member, index));
  const auto & value = *reinterpret_cast<const smrr_interfaces::msg::InferenceResult *>(untyped_value);
  item = value;
}

void resize_function__Yolov10Inference__yolov10_inference(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<smrr_interfaces::msg::InferenceResult> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Yolov10Inference_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::Yolov10Inference, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yolov10_inference",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<smrr_interfaces::msg::InferenceResult>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smrr_interfaces::msg::Yolov10Inference, yolov10_inference),  // bytes offset in struct
    nullptr,  // default value
    size_function__Yolov10Inference__yolov10_inference,  // size() function pointer
    get_const_function__Yolov10Inference__yolov10_inference,  // get_const(index) function pointer
    get_function__Yolov10Inference__yolov10_inference,  // get(index) function pointer
    fetch_function__Yolov10Inference__yolov10_inference,  // fetch(index, &value) function pointer
    assign_function__Yolov10Inference__yolov10_inference,  // assign(index, value) function pointer
    resize_function__Yolov10Inference__yolov10_inference  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Yolov10Inference_message_members = {
  "smrr_interfaces::msg",  // message namespace
  "Yolov10Inference",  // message name
  2,  // number of fields
  sizeof(smrr_interfaces::msg::Yolov10Inference),
  Yolov10Inference_message_member_array,  // message members
  Yolov10Inference_init_function,  // function to initialize message memory (memory has to be allocated)
  Yolov10Inference_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Yolov10Inference_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Yolov10Inference_message_members,
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
get_message_type_support_handle<smrr_interfaces::msg::Yolov10Inference>()
{
  return &::smrr_interfaces::msg::rosidl_typesupport_introspection_cpp::Yolov10Inference_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, smrr_interfaces, msg, Yolov10Inference)() {
  return &::smrr_interfaces::msg::rosidl_typesupport_introspection_cpp::Yolov10Inference_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
