// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smrr_interfaces:msg/Buffer.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__MSG__DETAIL__BUFFER__STRUCT_HPP_
#define SMRR_INTERFACES__MSG__DETAIL__BUFFER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'x_velocities'
// Member 'y_velocities'
// Member 'x_positions'
// Member 'y_positions'
#include "smrr_interfaces/msg/detail/data_element_float__struct.hpp"
// Member 'class_ids'
#include "smrr_interfaces/msg/detail/data_element_string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__smrr_interfaces__msg__Buffer __attribute__((deprecated))
#else
# define DEPRECATED__smrr_interfaces__msg__Buffer __declspec(deprecated)
#endif

namespace smrr_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Buffer_
{
  using Type = Buffer_<ContainerAllocator>;

  explicit Buffer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->agent_count = 0;
    }
  }

  explicit Buffer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->agent_count = 0;
    }
  }

  // field types and members
  using _agent_ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _agent_ids_type agent_ids;
  using _agent_count_type =
    int16_t;
  _agent_count_type agent_count;
  using _x_velocities_type =
    std::vector<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>>>;
  _x_velocities_type x_velocities;
  using _y_velocities_type =
    std::vector<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>>>;
  _y_velocities_type y_velocities;
  using _class_ids_type =
    std::vector<smrr_interfaces::msg::DataElementString_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<smrr_interfaces::msg::DataElementString_<ContainerAllocator>>>;
  _class_ids_type class_ids;
  using _x_positions_type =
    std::vector<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>>>;
  _x_positions_type x_positions;
  using _y_positions_type =
    std::vector<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>>>;
  _y_positions_type y_positions;
  using _x_mean_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _x_mean_type x_mean;
  using _y_mean_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _y_mean_type y_mean;
  using _x_std_dev_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _x_std_dev_type x_std_dev;
  using _y_std_dev_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _y_std_dev_type y_std_dev;
  using _x_variance_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _x_variance_type x_variance;
  using _y_variance_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _y_variance_type y_variance;
  using _majority_class_id_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _majority_class_id_type majority_class_id;

  // setters for named parameter idiom
  Type & set__agent_ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->agent_ids = _arg;
    return *this;
  }
  Type & set__agent_count(
    const int16_t & _arg)
  {
    this->agent_count = _arg;
    return *this;
  }
  Type & set__x_velocities(
    const std::vector<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>>> & _arg)
  {
    this->x_velocities = _arg;
    return *this;
  }
  Type & set__y_velocities(
    const std::vector<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>>> & _arg)
  {
    this->y_velocities = _arg;
    return *this;
  }
  Type & set__class_ids(
    const std::vector<smrr_interfaces::msg::DataElementString_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<smrr_interfaces::msg::DataElementString_<ContainerAllocator>>> & _arg)
  {
    this->class_ids = _arg;
    return *this;
  }
  Type & set__x_positions(
    const std::vector<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>>> & _arg)
  {
    this->x_positions = _arg;
    return *this;
  }
  Type & set__y_positions(
    const std::vector<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<smrr_interfaces::msg::DataElementFloat_<ContainerAllocator>>> & _arg)
  {
    this->y_positions = _arg;
    return *this;
  }
  Type & set__x_mean(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->x_mean = _arg;
    return *this;
  }
  Type & set__y_mean(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->y_mean = _arg;
    return *this;
  }
  Type & set__x_std_dev(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->x_std_dev = _arg;
    return *this;
  }
  Type & set__y_std_dev(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->y_std_dev = _arg;
    return *this;
  }
  Type & set__x_variance(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->x_variance = _arg;
    return *this;
  }
  Type & set__y_variance(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->y_variance = _arg;
    return *this;
  }
  Type & set__majority_class_id(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->majority_class_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smrr_interfaces::msg::Buffer_<ContainerAllocator> *;
  using ConstRawPtr =
    const smrr_interfaces::msg::Buffer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smrr_interfaces::msg::Buffer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smrr_interfaces::msg::Buffer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smrr_interfaces::msg::Buffer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smrr_interfaces::msg::Buffer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smrr_interfaces::msg::Buffer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smrr_interfaces::msg::Buffer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smrr_interfaces::msg::Buffer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smrr_interfaces::msg::Buffer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smrr_interfaces__msg__Buffer
    std::shared_ptr<smrr_interfaces::msg::Buffer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smrr_interfaces__msg__Buffer
    std::shared_ptr<smrr_interfaces::msg::Buffer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Buffer_ & other) const
  {
    if (this->agent_ids != other.agent_ids) {
      return false;
    }
    if (this->agent_count != other.agent_count) {
      return false;
    }
    if (this->x_velocities != other.x_velocities) {
      return false;
    }
    if (this->y_velocities != other.y_velocities) {
      return false;
    }
    if (this->class_ids != other.class_ids) {
      return false;
    }
    if (this->x_positions != other.x_positions) {
      return false;
    }
    if (this->y_positions != other.y_positions) {
      return false;
    }
    if (this->x_mean != other.x_mean) {
      return false;
    }
    if (this->y_mean != other.y_mean) {
      return false;
    }
    if (this->x_std_dev != other.x_std_dev) {
      return false;
    }
    if (this->y_std_dev != other.y_std_dev) {
      return false;
    }
    if (this->x_variance != other.x_variance) {
      return false;
    }
    if (this->y_variance != other.y_variance) {
      return false;
    }
    if (this->majority_class_id != other.majority_class_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Buffer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Buffer_

// alias to use template instance with default allocator
using Buffer =
  smrr_interfaces::msg::Buffer_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace smrr_interfaces

#endif  // SMRR_INTERFACES__MSG__DETAIL__BUFFER__STRUCT_HPP_
