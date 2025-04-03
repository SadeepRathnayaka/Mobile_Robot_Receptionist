// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smrr_interfaces:msg/DataElementFloat.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_FLOAT__STRUCT_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_FLOAT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__smrr_interfaces__msg__DataElementFloat __attribute__((deprecated))
#else
# define DEPRECATED__smrr_interfaces__msg__DataElementFloat __declspec(deprecated)
#endif

namespace smrr_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataElementFloat_
{
  using Type = DataElementFloat_<ContainerAllocator>;

  explicit DataElementFloat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit DataElementFloat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _float_data_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _float_data_type float_data;

  // setters for named parameter idiom
  Type & set__float_data(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->float_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smrr_interfaces::msg::DataElementFloat_<ContainerAllocator> *;
  using ConstRawPtr =
    const smrr_interfaces::msg::DataElementFloat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smrr_interfaces__msg__DataElementFloat
    std::shared_ptr<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smrr_interfaces__msg__DataElementFloat
    std::shared_ptr<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataElementFloat_ & other) const
  {
    if (this->float_data != other.float_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataElementFloat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataElementFloat_

// alias to use template instance with default allocator
using DataElementFloat =
  smrr_interfaces::msg::DataElementFloat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace smrr_interfaces

#endif  // SMRR_INTERFACES__MSG__DETAIL__DATA_ELEMENT_FLOAT__STRUCT_HPP_
