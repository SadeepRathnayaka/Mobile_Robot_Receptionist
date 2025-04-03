// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smrr_interfaces:msg/VelocityClassData.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__VELOCITY_CLASS_DATA__STRUCT_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__VELOCITY_CLASS_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__smrr_interfaces__msg__VelocityClassData __attribute__((deprecated))
#else
# define DEPRECATED__smrr_interfaces__msg__VelocityClassData __declspec(deprecated)
#endif

namespace smrr_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelocityClassData_
{
  using Type = VelocityClassData_<ContainerAllocator>;

  explicit VelocityClassData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit VelocityClassData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _class_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _class_ids_type class_ids;
  using _x_velocities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _x_velocities_type x_velocities;
  using _y_velocities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _y_velocities_type y_velocities;
  using _x_positions_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _x_positions_type x_positions;
  using _y_positions_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _y_positions_type y_positions;

  // setters for named parameter idiom
  Type & set__class_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->class_ids = _arg;
    return *this;
  }
  Type & set__x_velocities(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->x_velocities = _arg;
    return *this;
  }
  Type & set__y_velocities(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->y_velocities = _arg;
    return *this;
  }
  Type & set__x_positions(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->x_positions = _arg;
    return *this;
  }
  Type & set__y_positions(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->y_positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smrr_interfaces::msg::VelocityClassData_<ContainerAllocator> *;
  using ConstRawPtr =
    const smrr_interfaces::msg::VelocityClassData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smrr_interfaces::msg::VelocityClassData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smrr_interfaces::msg::VelocityClassData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smrr_interfaces::msg::VelocityClassData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smrr_interfaces::msg::VelocityClassData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smrr_interfaces::msg::VelocityClassData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smrr_interfaces::msg::VelocityClassData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smrr_interfaces::msg::VelocityClassData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smrr_interfaces::msg::VelocityClassData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smrr_interfaces__msg__VelocityClassData
    std::shared_ptr<smrr_interfaces::msg::VelocityClassData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smrr_interfaces__msg__VelocityClassData
    std::shared_ptr<smrr_interfaces::msg::VelocityClassData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelocityClassData_ & other) const
  {
    if (this->class_ids != other.class_ids) {
      return false;
    }
    if (this->x_velocities != other.x_velocities) {
      return false;
    }
    if (this->y_velocities != other.y_velocities) {
      return false;
    }
    if (this->x_positions != other.x_positions) {
      return false;
    }
    if (this->y_positions != other.y_positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelocityClassData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelocityClassData_

// alias to use template instance with default allocator
using VelocityClassData =
  smrr_interfaces::msg::VelocityClassData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace smrr_interfaces

#endif  // SMRR_INTERFACES__MSG__DETAIL__VELOCITY_CLASS_DATA__STRUCT_HPP_
