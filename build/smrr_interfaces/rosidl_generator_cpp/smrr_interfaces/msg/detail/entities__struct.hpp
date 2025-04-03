// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smrr_interfaces:msg/Entities.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__ENTITIES__STRUCT_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__ENTITIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__smrr_interfaces__msg__Entities __attribute__((deprecated))
#else
# define DEPRECATED__smrr_interfaces__msg__Entities __declspec(deprecated)
#endif

namespace smrr_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Entities_
{
  using Type = Entities_<ContainerAllocator>;

  explicit Entities_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0;
    }
  }

  explicit Entities_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0;
    }
  }

  // field types and members
  using _count_type =
    int16_t;
  _count_type count;
  using _classes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _classes_type classes;
  using _x_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _x_type x;
  using _y_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _y_type y;

  // setters for named parameter idiom
  Type & set__count(
    const int16_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__classes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->classes = _arg;
    return *this;
  }
  Type & set__x(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smrr_interfaces::msg::Entities_<ContainerAllocator> *;
  using ConstRawPtr =
    const smrr_interfaces::msg::Entities_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smrr_interfaces::msg::Entities_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smrr_interfaces::msg::Entities_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smrr_interfaces::msg::Entities_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smrr_interfaces::msg::Entities_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smrr_interfaces::msg::Entities_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smrr_interfaces::msg::Entities_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smrr_interfaces::msg::Entities_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smrr_interfaces::msg::Entities_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smrr_interfaces__msg__Entities
    std::shared_ptr<smrr_interfaces::msg::Entities_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smrr_interfaces__msg__Entities
    std::shared_ptr<smrr_interfaces::msg::Entities_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Entities_ & other) const
  {
    if (this->count != other.count) {
      return false;
    }
    if (this->classes != other.classes) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Entities_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Entities_

// alias to use template instance with default allocator
using Entities =
  smrr_interfaces::msg::Entities_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace smrr_interfaces

#endif  // SMRR_INTERFACES__MSG__DETAIL__ENTITIES__STRUCT_HPP_
