// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlebot3_act_interfaces:action/Task.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT3_ACT_INTERFACES__ACTION__DETAIL__TASK__BUILDER_HPP_
#define TURTLEBOT3_ACT_INTERFACES__ACTION__DETAIL__TASK__BUILDER_HPP_

#include "turtlebot3_act_interfaces/action/detail/task__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtlebot3_act_interfaces
{

namespace action
{

namespace builder
{

class Init_Task_Goal_direction
{
public:
  explicit Init_Task_Goal_direction(::turtlebot3_act_interfaces::action::Task_Goal & msg)
  : msg_(msg)
  {}
  ::turtlebot3_act_interfaces::action::Task_Goal direction(::turtlebot3_act_interfaces::action::Task_Goal::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_act_interfaces::action::Task_Goal msg_;
};

class Init_Task_Goal_duration
{
public:
  Init_Task_Goal_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_Goal_direction duration(::turtlebot3_act_interfaces::action::Task_Goal::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_Task_Goal_direction(msg_);
  }

private:
  ::turtlebot3_act_interfaces::action::Task_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_act_interfaces::action::Task_Goal>()
{
  return turtlebot3_act_interfaces::action::builder::Init_Task_Goal_duration();
}

}  // namespace turtlebot3_act_interfaces


namespace turtlebot3_act_interfaces
{

namespace action
{

namespace builder
{

class Init_Task_Result_success
{
public:
  Init_Task_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlebot3_act_interfaces::action::Task_Result success(::turtlebot3_act_interfaces::action::Task_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_act_interfaces::action::Task_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_act_interfaces::action::Task_Result>()
{
  return turtlebot3_act_interfaces::action::builder::Init_Task_Result_success();
}

}  // namespace turtlebot3_act_interfaces


namespace turtlebot3_act_interfaces
{

namespace action
{

namespace builder
{

class Init_Task_Feedback_left_time
{
public:
  Init_Task_Feedback_left_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlebot3_act_interfaces::action::Task_Feedback left_time(::turtlebot3_act_interfaces::action::Task_Feedback::_left_time_type arg)
  {
    msg_.left_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_act_interfaces::action::Task_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_act_interfaces::action::Task_Feedback>()
{
  return turtlebot3_act_interfaces::action::builder::Init_Task_Feedback_left_time();
}

}  // namespace turtlebot3_act_interfaces


namespace turtlebot3_act_interfaces
{

namespace action
{

namespace builder
{

class Init_Task_SendGoal_Request_goal
{
public:
  explicit Init_Task_SendGoal_Request_goal(::turtlebot3_act_interfaces::action::Task_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::turtlebot3_act_interfaces::action::Task_SendGoal_Request goal(::turtlebot3_act_interfaces::action::Task_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_act_interfaces::action::Task_SendGoal_Request msg_;
};

class Init_Task_SendGoal_Request_goal_id
{
public:
  Init_Task_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_SendGoal_Request_goal goal_id(::turtlebot3_act_interfaces::action::Task_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Task_SendGoal_Request_goal(msg_);
  }

private:
  ::turtlebot3_act_interfaces::action::Task_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_act_interfaces::action::Task_SendGoal_Request>()
{
  return turtlebot3_act_interfaces::action::builder::Init_Task_SendGoal_Request_goal_id();
}

}  // namespace turtlebot3_act_interfaces


namespace turtlebot3_act_interfaces
{

namespace action
{

namespace builder
{

class Init_Task_SendGoal_Response_stamp
{
public:
  explicit Init_Task_SendGoal_Response_stamp(::turtlebot3_act_interfaces::action::Task_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::turtlebot3_act_interfaces::action::Task_SendGoal_Response stamp(::turtlebot3_act_interfaces::action::Task_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_act_interfaces::action::Task_SendGoal_Response msg_;
};

class Init_Task_SendGoal_Response_accepted
{
public:
  Init_Task_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_SendGoal_Response_stamp accepted(::turtlebot3_act_interfaces::action::Task_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Task_SendGoal_Response_stamp(msg_);
  }

private:
  ::turtlebot3_act_interfaces::action::Task_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_act_interfaces::action::Task_SendGoal_Response>()
{
  return turtlebot3_act_interfaces::action::builder::Init_Task_SendGoal_Response_accepted();
}

}  // namespace turtlebot3_act_interfaces


namespace turtlebot3_act_interfaces
{

namespace action
{

namespace builder
{

class Init_Task_GetResult_Request_goal_id
{
public:
  Init_Task_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlebot3_act_interfaces::action::Task_GetResult_Request goal_id(::turtlebot3_act_interfaces::action::Task_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_act_interfaces::action::Task_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_act_interfaces::action::Task_GetResult_Request>()
{
  return turtlebot3_act_interfaces::action::builder::Init_Task_GetResult_Request_goal_id();
}

}  // namespace turtlebot3_act_interfaces


namespace turtlebot3_act_interfaces
{

namespace action
{

namespace builder
{

class Init_Task_GetResult_Response_result
{
public:
  explicit Init_Task_GetResult_Response_result(::turtlebot3_act_interfaces::action::Task_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::turtlebot3_act_interfaces::action::Task_GetResult_Response result(::turtlebot3_act_interfaces::action::Task_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_act_interfaces::action::Task_GetResult_Response msg_;
};

class Init_Task_GetResult_Response_status
{
public:
  Init_Task_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_GetResult_Response_result status(::turtlebot3_act_interfaces::action::Task_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Task_GetResult_Response_result(msg_);
  }

private:
  ::turtlebot3_act_interfaces::action::Task_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_act_interfaces::action::Task_GetResult_Response>()
{
  return turtlebot3_act_interfaces::action::builder::Init_Task_GetResult_Response_status();
}

}  // namespace turtlebot3_act_interfaces


namespace turtlebot3_act_interfaces
{

namespace action
{

namespace builder
{

class Init_Task_FeedbackMessage_feedback
{
public:
  explicit Init_Task_FeedbackMessage_feedback(::turtlebot3_act_interfaces::action::Task_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::turtlebot3_act_interfaces::action::Task_FeedbackMessage feedback(::turtlebot3_act_interfaces::action::Task_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot3_act_interfaces::action::Task_FeedbackMessage msg_;
};

class Init_Task_FeedbackMessage_goal_id
{
public:
  Init_Task_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_FeedbackMessage_feedback goal_id(::turtlebot3_act_interfaces::action::Task_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Task_FeedbackMessage_feedback(msg_);
  }

private:
  ::turtlebot3_act_interfaces::action::Task_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot3_act_interfaces::action::Task_FeedbackMessage>()
{
  return turtlebot3_act_interfaces::action::builder::Init_Task_FeedbackMessage_goal_id();
}

}  // namespace turtlebot3_act_interfaces

#endif  // TURTLEBOT3_ACT_INTERFACES__ACTION__DETAIL__TASK__BUILDER_HPP_
