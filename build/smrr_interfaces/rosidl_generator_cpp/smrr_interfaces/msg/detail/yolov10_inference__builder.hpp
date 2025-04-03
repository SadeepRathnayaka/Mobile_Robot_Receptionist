// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smrr_interfaces:msg/Yolov10Inference.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__YOLOV10_INFERENCE__BUILDER_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__YOLOV10_INFERENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smrr_interfaces/msg/detail/yolov10_inference__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smrr_interfaces
{

namespace msg
{

namespace builder
{

class Init_Yolov10Inference_yolov10_inference
{
public:
  explicit Init_Yolov10Inference_yolov10_inference(::smrr_interfaces::msg::Yolov10Inference & msg)
  : msg_(msg)
  {}
  ::smrr_interfaces::msg::Yolov10Inference yolov10_inference(::smrr_interfaces::msg::Yolov10Inference::_yolov10_inference_type arg)
  {
    msg_.yolov10_inference = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::msg::Yolov10Inference msg_;
};

class Init_Yolov10Inference_header
{
public:
  Init_Yolov10Inference_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Yolov10Inference_yolov10_inference header(::smrr_interfaces::msg::Yolov10Inference::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Yolov10Inference_yolov10_inference(msg_);
  }

private:
  ::smrr_interfaces::msg::Yolov10Inference msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::msg::Yolov10Inference>()
{
  return smrr_interfaces::msg::builder::Init_Yolov10Inference_header();
}

}  // namespace smrr_interfaces

#endif  // SMRR_INTERFACES__MSG__DETAIL__YOLOV10_INFERENCE__BUILDER_HPP_
