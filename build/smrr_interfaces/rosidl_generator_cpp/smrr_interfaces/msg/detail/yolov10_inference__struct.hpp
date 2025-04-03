// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smrr_interfaces:msg/Yolov10Inference.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__YOLOV10_INFERENCE__STRUCT_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__YOLOV10_INFERENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'yolov10_inference'
#include "smrr_interfaces/msg/detail/inference_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__smrr_interfaces__msg__Yolov10Inference __attribute__((deprecated))
#else
# define DEPRECATED__smrr_interfaces__msg__Yolov10Inference __declspec(deprecated)
#endif

namespace smrr_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Yolov10Inference_
{
  using Type = Yolov10Inference_<ContainerAllocator>;

  explicit Yolov10Inference_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Yolov10Inference_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _yolov10_inference_type =
    std::vector<smrr_interfaces::msg::InferenceResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<smrr_interfaces::msg::InferenceResult_<ContainerAllocator>>>;
  _yolov10_inference_type yolov10_inference;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__yolov10_inference(
    const std::vector<smrr_interfaces::msg::InferenceResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<smrr_interfaces::msg::InferenceResult_<ContainerAllocator>>> & _arg)
  {
    this->yolov10_inference = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smrr_interfaces::msg::Yolov10Inference_<ContainerAllocator> *;
  using ConstRawPtr =
    const smrr_interfaces::msg::Yolov10Inference_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smrr_interfaces::msg::Yolov10Inference_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smrr_interfaces::msg::Yolov10Inference_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smrr_interfaces::msg::Yolov10Inference_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smrr_interfaces::msg::Yolov10Inference_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smrr_interfaces::msg::Yolov10Inference_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smrr_interfaces::msg::Yolov10Inference_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smrr_interfaces::msg::Yolov10Inference_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smrr_interfaces::msg::Yolov10Inference_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smrr_interfaces__msg__Yolov10Inference
    std::shared_ptr<smrr_interfaces::msg::Yolov10Inference_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smrr_interfaces__msg__Yolov10Inference
    std::shared_ptr<smrr_interfaces::msg::Yolov10Inference_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Yolov10Inference_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->yolov10_inference != other.yolov10_inference) {
      return false;
    }
    return true;
  }
  bool operator!=(const Yolov10Inference_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Yolov10Inference_

// alias to use template instance with default allocator
using Yolov10Inference =
  smrr_interfaces::msg::Yolov10Inference_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace smrr_interfaces

#endif  // SMRR_INTERFACES__MSG__DETAIL__YOLOV10_INFERENCE__STRUCT_HPP_
