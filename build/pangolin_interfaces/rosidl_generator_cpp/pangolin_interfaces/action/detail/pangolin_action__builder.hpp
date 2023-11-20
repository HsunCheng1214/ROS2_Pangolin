// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pangolin_interfaces:action/PangolinAction.idl
// generated code does not contain a copyright notice

#ifndef PANGOLIN_INTERFACES__ACTION__DETAIL__PANGOLIN_ACTION__BUILDER_HPP_
#define PANGOLIN_INTERFACES__ACTION__DETAIL__PANGOLIN_ACTION__BUILDER_HPP_

#include "pangolin_interfaces/action/detail/pangolin_action__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pangolin_interfaces
{

namespace action
{

namespace builder
{

class Init_PangolinAction_Goal_act_name
{
public:
  Init_PangolinAction_Goal_act_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pangolin_interfaces::action::PangolinAction_Goal act_name(::pangolin_interfaces::action::PangolinAction_Goal::_act_name_type arg)
  {
    msg_.act_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pangolin_interfaces::action::PangolinAction_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pangolin_interfaces::action::PangolinAction_Goal>()
{
  return pangolin_interfaces::action::builder::Init_PangolinAction_Goal_act_name();
}

}  // namespace pangolin_interfaces


namespace pangolin_interfaces
{

namespace action
{

namespace builder
{

class Init_PangolinAction_Result_success
{
public:
  Init_PangolinAction_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pangolin_interfaces::action::PangolinAction_Result success(::pangolin_interfaces::action::PangolinAction_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pangolin_interfaces::action::PangolinAction_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pangolin_interfaces::action::PangolinAction_Result>()
{
  return pangolin_interfaces::action::builder::Init_PangolinAction_Result_success();
}

}  // namespace pangolin_interfaces


namespace pangolin_interfaces
{

namespace action
{

namespace builder
{

class Init_PangolinAction_Feedback_which_action
{
public:
  Init_PangolinAction_Feedback_which_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pangolin_interfaces::action::PangolinAction_Feedback which_action(::pangolin_interfaces::action::PangolinAction_Feedback::_which_action_type arg)
  {
    msg_.which_action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pangolin_interfaces::action::PangolinAction_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pangolin_interfaces::action::PangolinAction_Feedback>()
{
  return pangolin_interfaces::action::builder::Init_PangolinAction_Feedback_which_action();
}

}  // namespace pangolin_interfaces


namespace pangolin_interfaces
{

namespace action
{

namespace builder
{

class Init_PangolinAction_SendGoal_Request_goal
{
public:
  explicit Init_PangolinAction_SendGoal_Request_goal(::pangolin_interfaces::action::PangolinAction_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pangolin_interfaces::action::PangolinAction_SendGoal_Request goal(::pangolin_interfaces::action::PangolinAction_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pangolin_interfaces::action::PangolinAction_SendGoal_Request msg_;
};

class Init_PangolinAction_SendGoal_Request_goal_id
{
public:
  Init_PangolinAction_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PangolinAction_SendGoal_Request_goal goal_id(::pangolin_interfaces::action::PangolinAction_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PangolinAction_SendGoal_Request_goal(msg_);
  }

private:
  ::pangolin_interfaces::action::PangolinAction_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pangolin_interfaces::action::PangolinAction_SendGoal_Request>()
{
  return pangolin_interfaces::action::builder::Init_PangolinAction_SendGoal_Request_goal_id();
}

}  // namespace pangolin_interfaces


namespace pangolin_interfaces
{

namespace action
{

namespace builder
{

class Init_PangolinAction_SendGoal_Response_stamp
{
public:
  explicit Init_PangolinAction_SendGoal_Response_stamp(::pangolin_interfaces::action::PangolinAction_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pangolin_interfaces::action::PangolinAction_SendGoal_Response stamp(::pangolin_interfaces::action::PangolinAction_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pangolin_interfaces::action::PangolinAction_SendGoal_Response msg_;
};

class Init_PangolinAction_SendGoal_Response_accepted
{
public:
  Init_PangolinAction_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PangolinAction_SendGoal_Response_stamp accepted(::pangolin_interfaces::action::PangolinAction_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PangolinAction_SendGoal_Response_stamp(msg_);
  }

private:
  ::pangolin_interfaces::action::PangolinAction_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pangolin_interfaces::action::PangolinAction_SendGoal_Response>()
{
  return pangolin_interfaces::action::builder::Init_PangolinAction_SendGoal_Response_accepted();
}

}  // namespace pangolin_interfaces


namespace pangolin_interfaces
{

namespace action
{

namespace builder
{

class Init_PangolinAction_GetResult_Request_goal_id
{
public:
  Init_PangolinAction_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pangolin_interfaces::action::PangolinAction_GetResult_Request goal_id(::pangolin_interfaces::action::PangolinAction_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pangolin_interfaces::action::PangolinAction_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pangolin_interfaces::action::PangolinAction_GetResult_Request>()
{
  return pangolin_interfaces::action::builder::Init_PangolinAction_GetResult_Request_goal_id();
}

}  // namespace pangolin_interfaces


namespace pangolin_interfaces
{

namespace action
{

namespace builder
{

class Init_PangolinAction_GetResult_Response_result
{
public:
  explicit Init_PangolinAction_GetResult_Response_result(::pangolin_interfaces::action::PangolinAction_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pangolin_interfaces::action::PangolinAction_GetResult_Response result(::pangolin_interfaces::action::PangolinAction_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pangolin_interfaces::action::PangolinAction_GetResult_Response msg_;
};

class Init_PangolinAction_GetResult_Response_status
{
public:
  Init_PangolinAction_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PangolinAction_GetResult_Response_result status(::pangolin_interfaces::action::PangolinAction_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PangolinAction_GetResult_Response_result(msg_);
  }

private:
  ::pangolin_interfaces::action::PangolinAction_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pangolin_interfaces::action::PangolinAction_GetResult_Response>()
{
  return pangolin_interfaces::action::builder::Init_PangolinAction_GetResult_Response_status();
}

}  // namespace pangolin_interfaces


namespace pangolin_interfaces
{

namespace action
{

namespace builder
{

class Init_PangolinAction_FeedbackMessage_feedback
{
public:
  explicit Init_PangolinAction_FeedbackMessage_feedback(::pangolin_interfaces::action::PangolinAction_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pangolin_interfaces::action::PangolinAction_FeedbackMessage feedback(::pangolin_interfaces::action::PangolinAction_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pangolin_interfaces::action::PangolinAction_FeedbackMessage msg_;
};

class Init_PangolinAction_FeedbackMessage_goal_id
{
public:
  Init_PangolinAction_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PangolinAction_FeedbackMessage_feedback goal_id(::pangolin_interfaces::action::PangolinAction_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PangolinAction_FeedbackMessage_feedback(msg_);
  }

private:
  ::pangolin_interfaces::action::PangolinAction_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pangolin_interfaces::action::PangolinAction_FeedbackMessage>()
{
  return pangolin_interfaces::action::builder::Init_PangolinAction_FeedbackMessage_goal_id();
}

}  // namespace pangolin_interfaces

#endif  // PANGOLIN_INTERFACES__ACTION__DETAIL__PANGOLIN_ACTION__BUILDER_HPP_
