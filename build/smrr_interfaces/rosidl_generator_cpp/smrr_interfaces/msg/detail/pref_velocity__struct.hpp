// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smrr_interfaces:msg/PrefVelocity.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__PREF_VELOCITY__STRUCT_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__PREF_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__smrr_interfaces__msg__PrefVelocity __attribute__((deprecated))
#else
# define DEPRECATED__smrr_interfaces__msg__PrefVelocity __declspec(deprecated)
#endif

namespace smrr_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PrefVelocity_
{
  using Type = PrefVelocity_<ContainerAllocator>;

  explicit PrefVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PrefVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _agent_ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _agent_ids_type agent_ids;
  using _class_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _class_ids_type class_ids;
  using _preferred_velocities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _preferred_velocities_type preferred_velocities;

  // setters for named parameter idiom
  Type & set__agent_ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->agent_ids = _arg;
    return *this;
  }
  Type & set__class_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->class_ids = _arg;
    return *this;
  }
  Type & set__preferred_velocities(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->preferred_velocities = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smrr_interfaces::msg::PrefVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const smrr_interfaces::msg::PrefVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smrr_interfaces::msg::PrefVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smrr_interfaces::msg::PrefVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smrr_interfaces::msg::PrefVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smrr_interfaces::msg::PrefVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smrr_interfaces::msg::PrefVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smrr_interfaces::msg::PrefVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smrr_interfaces::msg::PrefVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smrr_interfaces::msg::PrefVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smrr_interfaces__msg__PrefVelocity
    std::shared_ptr<smrr_interfaces::msg::PrefVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smrr_interfaces__msg__PrefVelocity
    std::shared_ptr<smrr_interfaces::msg::PrefVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrefVelocity_ & other) const
  {
    if (this->agent_ids != other.agent_ids) {
      return false;
    }
    if (this->class_ids != other.class_ids) {
      return false;
    }
    if (this->preferred_velocities != other.preferred_velocities) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrefVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrefVelocity_

// alias to use template instance with default allocator
using PrefVelocity =
  smrr_interfaces::msg::PrefVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace smrr_interfaces

#endif  // SMRR_INTERFACES__MSG__DETAIL__PREF_VELOCITY__STRUCT_HPP_
