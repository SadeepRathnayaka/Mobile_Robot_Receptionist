// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smrr_interfaces:action/ArmControlServer.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__ACTION__DETAIL__ARM_CONTROL_SERVER__BUILDER_HPP_
#define SMRR_INTERFACES__ACTION__DETAIL__ARM_CONTROL_SERVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smrr_interfaces/action/detail/arm_control_server__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smrr_interfaces
{

namespace action
{

namespace builder
{

class Init_ArmControlServer_Goal_target_joints_angles
{
public:
  Init_ArmControlServer_Goal_target_joints_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::smrr_interfaces::action::ArmControlServer_Goal target_joints_angles(::smrr_interfaces::action::ArmControlServer_Goal::_target_joints_angles_type arg)
  {
    msg_.target_joints_angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::action::ArmControlServer_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::action::ArmControlServer_Goal>()
{
  return smrr_interfaces::action::builder::Init_ArmControlServer_Goal_target_joints_angles();
}

}  // namespace smrr_interfaces


namespace smrr_interfaces
{

namespace action
{

namespace builder
{

class Init_ArmControlServer_Result_success
{
public:
  Init_ArmControlServer_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::smrr_interfaces::action::ArmControlServer_Result success(::smrr_interfaces::action::ArmControlServer_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::action::ArmControlServer_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::action::ArmControlServer_Result>()
{
  return smrr_interfaces::action::builder::Init_ArmControlServer_Result_success();
}

}  // namespace smrr_interfaces


namespace smrr_interfaces
{

namespace action
{

namespace builder
{

class Init_ArmControlServer_Feedback_current_joints_angles
{
public:
  Init_ArmControlServer_Feedback_current_joints_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::smrr_interfaces::action::ArmControlServer_Feedback current_joints_angles(::smrr_interfaces::action::ArmControlServer_Feedback::_current_joints_angles_type arg)
  {
    msg_.current_joints_angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::action::ArmControlServer_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::action::ArmControlServer_Feedback>()
{
  return smrr_interfaces::action::builder::Init_ArmControlServer_Feedback_current_joints_angles();
}

}  // namespace smrr_interfaces


namespace smrr_interfaces
{

namespace action
{

namespace builder
{

class Init_ArmControlServer_SendGoal_Request_goal
{
public:
  explicit Init_ArmControlServer_SendGoal_Request_goal(::smrr_interfaces::action::ArmControlServer_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::smrr_interfaces::action::ArmControlServer_SendGoal_Request goal(::smrr_interfaces::action::ArmControlServer_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::action::ArmControlServer_SendGoal_Request msg_;
};

class Init_ArmControlServer_SendGoal_Request_goal_id
{
public:
  Init_ArmControlServer_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmControlServer_SendGoal_Request_goal goal_id(::smrr_interfaces::action::ArmControlServer_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ArmControlServer_SendGoal_Request_goal(msg_);
  }

private:
  ::smrr_interfaces::action::ArmControlServer_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::action::ArmControlServer_SendGoal_Request>()
{
  return smrr_interfaces::action::builder::Init_ArmControlServer_SendGoal_Request_goal_id();
}

}  // namespace smrr_interfaces


namespace smrr_interfaces
{

namespace action
{

namespace builder
{

class Init_ArmControlServer_SendGoal_Response_stamp
{
public:
  explicit Init_ArmControlServer_SendGoal_Response_stamp(::smrr_interfaces::action::ArmControlServer_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::smrr_interfaces::action::ArmControlServer_SendGoal_Response stamp(::smrr_interfaces::action::ArmControlServer_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::action::ArmControlServer_SendGoal_Response msg_;
};

class Init_ArmControlServer_SendGoal_Response_accepted
{
public:
  Init_ArmControlServer_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmControlServer_SendGoal_Response_stamp accepted(::smrr_interfaces::action::ArmControlServer_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ArmControlServer_SendGoal_Response_stamp(msg_);
  }

private:
  ::smrr_interfaces::action::ArmControlServer_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::action::ArmControlServer_SendGoal_Response>()
{
  return smrr_interfaces::action::builder::Init_ArmControlServer_SendGoal_Response_accepted();
}

}  // namespace smrr_interfaces


namespace smrr_interfaces
{

namespace action
{

namespace builder
{

class Init_ArmControlServer_GetResult_Request_goal_id
{
public:
  Init_ArmControlServer_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::smrr_interfaces::action::ArmControlServer_GetResult_Request goal_id(::smrr_interfaces::action::ArmControlServer_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::action::ArmControlServer_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::action::ArmControlServer_GetResult_Request>()
{
  return smrr_interfaces::action::builder::Init_ArmControlServer_GetResult_Request_goal_id();
}

}  // namespace smrr_interfaces


namespace smrr_interfaces
{

namespace action
{

namespace builder
{

class Init_ArmControlServer_GetResult_Response_result
{
public:
  explicit Init_ArmControlServer_GetResult_Response_result(::smrr_interfaces::action::ArmControlServer_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::smrr_interfaces::action::ArmControlServer_GetResult_Response result(::smrr_interfaces::action::ArmControlServer_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::action::ArmControlServer_GetResult_Response msg_;
};

class Init_ArmControlServer_GetResult_Response_status
{
public:
  Init_ArmControlServer_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmControlServer_GetResult_Response_result status(::smrr_interfaces::action::ArmControlServer_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ArmControlServer_GetResult_Response_result(msg_);
  }

private:
  ::smrr_interfaces::action::ArmControlServer_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::action::ArmControlServer_GetResult_Response>()
{
  return smrr_interfaces::action::builder::Init_ArmControlServer_GetResult_Response_status();
}

}  // namespace smrr_interfaces


namespace smrr_interfaces
{

namespace action
{

namespace builder
{

class Init_ArmControlServer_FeedbackMessage_feedback
{
public:
  explicit Init_ArmControlServer_FeedbackMessage_feedback(::smrr_interfaces::action::ArmControlServer_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::smrr_interfaces::action::ArmControlServer_FeedbackMessage feedback(::smrr_interfaces::action::ArmControlServer_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::action::ArmControlServer_FeedbackMessage msg_;
};

class Init_ArmControlServer_FeedbackMessage_goal_id
{
public:
  Init_ArmControlServer_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmControlServer_FeedbackMessage_feedback goal_id(::smrr_interfaces::action::ArmControlServer_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ArmControlServer_FeedbackMessage_feedback(msg_);
  }

private:
  ::smrr_interfaces::action::ArmControlServer_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::action::ArmControlServer_FeedbackMessage>()
{
  return smrr_interfaces::action::builder::Init_ArmControlServer_FeedbackMessage_goal_id();
}

}  // namespace smrr_interfaces

#endif  // SMRR_INTERFACES__ACTION__DETAIL__ARM_CONTROL_SERVER__BUILDER_HPP_
