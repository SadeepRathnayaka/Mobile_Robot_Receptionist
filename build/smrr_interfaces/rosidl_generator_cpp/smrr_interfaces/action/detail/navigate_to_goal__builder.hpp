// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smrr_interfaces:action/NavigateToGoal.idl
// generated code does not contain a copyright notice

#ifndef SMRR_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_GOAL__BUILDER_HPP_
#define SMRR_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smrr_interfaces/action/detail/navigate_to_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smrr_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_Goal_goal_y
{
public:
  explicit Init_NavigateToGoal_Goal_goal_y(::smrr_interfaces::action::NavigateToGoal_Goal & msg)
  : msg_(msg)
  {}
  ::smrr_interfaces::action::NavigateToGoal_Goal goal_y(::smrr_interfaces::action::NavigateToGoal_Goal::_goal_y_type arg)
  {
    msg_.goal_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::action::NavigateToGoal_Goal msg_;
};

class Init_NavigateToGoal_Goal_goal_x
{
public:
  Init_NavigateToGoal_Goal_goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_Goal_goal_y goal_x(::smrr_interfaces::action::NavigateToGoal_Goal::_goal_x_type arg)
  {
    msg_.goal_x = std::move(arg);
    return Init_NavigateToGoal_Goal_goal_y(msg_);
  }

private:
  ::smrr_interfaces::action::NavigateToGoal_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::action::NavigateToGoal_Goal>()
{
  return smrr_interfaces::action::builder::Init_NavigateToGoal_Goal_goal_x();
}

}  // namespace smrr_interfaces


namespace smrr_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_Result_success
{
public:
  Init_NavigateToGoal_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::smrr_interfaces::action::NavigateToGoal_Result success(::smrr_interfaces::action::NavigateToGoal_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::action::NavigateToGoal_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::action::NavigateToGoal_Result>()
{
  return smrr_interfaces::action::builder::Init_NavigateToGoal_Result_success();
}

}  // namespace smrr_interfaces


namespace smrr_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_Feedback_distance_to_goal
{
public:
  Init_NavigateToGoal_Feedback_distance_to_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::smrr_interfaces::action::NavigateToGoal_Feedback distance_to_goal(::smrr_interfaces::action::NavigateToGoal_Feedback::_distance_to_goal_type arg)
  {
    msg_.distance_to_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::action::NavigateToGoal_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::action::NavigateToGoal_Feedback>()
{
  return smrr_interfaces::action::builder::Init_NavigateToGoal_Feedback_distance_to_goal();
}

}  // namespace smrr_interfaces


namespace smrr_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_SendGoal_Request_goal
{
public:
  explicit Init_NavigateToGoal_SendGoal_Request_goal(::smrr_interfaces::action::NavigateToGoal_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::smrr_interfaces::action::NavigateToGoal_SendGoal_Request goal(::smrr_interfaces::action::NavigateToGoal_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::action::NavigateToGoal_SendGoal_Request msg_;
};

class Init_NavigateToGoal_SendGoal_Request_goal_id
{
public:
  Init_NavigateToGoal_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_SendGoal_Request_goal goal_id(::smrr_interfaces::action::NavigateToGoal_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateToGoal_SendGoal_Request_goal(msg_);
  }

private:
  ::smrr_interfaces::action::NavigateToGoal_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::action::NavigateToGoal_SendGoal_Request>()
{
  return smrr_interfaces::action::builder::Init_NavigateToGoal_SendGoal_Request_goal_id();
}

}  // namespace smrr_interfaces


namespace smrr_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_SendGoal_Response_stamp
{
public:
  explicit Init_NavigateToGoal_SendGoal_Response_stamp(::smrr_interfaces::action::NavigateToGoal_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::smrr_interfaces::action::NavigateToGoal_SendGoal_Response stamp(::smrr_interfaces::action::NavigateToGoal_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::action::NavigateToGoal_SendGoal_Response msg_;
};

class Init_NavigateToGoal_SendGoal_Response_accepted
{
public:
  Init_NavigateToGoal_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_SendGoal_Response_stamp accepted(::smrr_interfaces::action::NavigateToGoal_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_NavigateToGoal_SendGoal_Response_stamp(msg_);
  }

private:
  ::smrr_interfaces::action::NavigateToGoal_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::action::NavigateToGoal_SendGoal_Response>()
{
  return smrr_interfaces::action::builder::Init_NavigateToGoal_SendGoal_Response_accepted();
}

}  // namespace smrr_interfaces


namespace smrr_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_GetResult_Request_goal_id
{
public:
  Init_NavigateToGoal_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::smrr_interfaces::action::NavigateToGoal_GetResult_Request goal_id(::smrr_interfaces::action::NavigateToGoal_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::action::NavigateToGoal_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::action::NavigateToGoal_GetResult_Request>()
{
  return smrr_interfaces::action::builder::Init_NavigateToGoal_GetResult_Request_goal_id();
}

}  // namespace smrr_interfaces


namespace smrr_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_GetResult_Response_result
{
public:
  explicit Init_NavigateToGoal_GetResult_Response_result(::smrr_interfaces::action::NavigateToGoal_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::smrr_interfaces::action::NavigateToGoal_GetResult_Response result(::smrr_interfaces::action::NavigateToGoal_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::action::NavigateToGoal_GetResult_Response msg_;
};

class Init_NavigateToGoal_GetResult_Response_status
{
public:
  Init_NavigateToGoal_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_GetResult_Response_result status(::smrr_interfaces::action::NavigateToGoal_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigateToGoal_GetResult_Response_result(msg_);
  }

private:
  ::smrr_interfaces::action::NavigateToGoal_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::action::NavigateToGoal_GetResult_Response>()
{
  return smrr_interfaces::action::builder::Init_NavigateToGoal_GetResult_Response_status();
}

}  // namespace smrr_interfaces


namespace smrr_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToGoal_FeedbackMessage_feedback
{
public:
  explicit Init_NavigateToGoal_FeedbackMessage_feedback(::smrr_interfaces::action::NavigateToGoal_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::smrr_interfaces::action::NavigateToGoal_FeedbackMessage feedback(::smrr_interfaces::action::NavigateToGoal_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smrr_interfaces::action::NavigateToGoal_FeedbackMessage msg_;
};

class Init_NavigateToGoal_FeedbackMessage_goal_id
{
public:
  Init_NavigateToGoal_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToGoal_FeedbackMessage_feedback goal_id(::smrr_interfaces::action::NavigateToGoal_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateToGoal_FeedbackMessage_feedback(msg_);
  }

private:
  ::smrr_interfaces::action::NavigateToGoal_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::smrr_interfaces::action::NavigateToGoal_FeedbackMessage>()
{
  return smrr_interfaces::action::builder::Init_NavigateToGoal_FeedbackMessage_goal_id();
}

}  // namespace smrr_interfaces

#endif  // SMRR_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_GOAL__BUILDER_HPP_
