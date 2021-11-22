// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlebot3_act_interfaces:action/Task.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT3_ACT_INTERFACES__ACTION__DETAIL__TASK__TRAITS_HPP_
#define TURTLEBOT3_ACT_INTERFACES__ACTION__DETAIL__TASK__TRAITS_HPP_

#include "turtlebot3_act_interfaces/action/detail/task__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlebot3_act_interfaces::action::Task_Goal>()
{
  return "turtlebot3_act_interfaces::action::Task_Goal";
}

template<>
inline const char * name<turtlebot3_act_interfaces::action::Task_Goal>()
{
  return "turtlebot3_act_interfaces/action/Task_Goal";
}

template<>
struct has_fixed_size<turtlebot3_act_interfaces::action::Task_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlebot3_act_interfaces::action::Task_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlebot3_act_interfaces::action::Task_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlebot3_act_interfaces::action::Task_Result>()
{
  return "turtlebot3_act_interfaces::action::Task_Result";
}

template<>
inline const char * name<turtlebot3_act_interfaces::action::Task_Result>()
{
  return "turtlebot3_act_interfaces/action/Task_Result";
}

template<>
struct has_fixed_size<turtlebot3_act_interfaces::action::Task_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlebot3_act_interfaces::action::Task_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlebot3_act_interfaces::action::Task_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlebot3_act_interfaces::action::Task_Feedback>()
{
  return "turtlebot3_act_interfaces::action::Task_Feedback";
}

template<>
inline const char * name<turtlebot3_act_interfaces::action::Task_Feedback>()
{
  return "turtlebot3_act_interfaces/action/Task_Feedback";
}

template<>
struct has_fixed_size<turtlebot3_act_interfaces::action::Task_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlebot3_act_interfaces::action::Task_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlebot3_act_interfaces::action::Task_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "turtlebot3_act_interfaces/action/detail/task__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlebot3_act_interfaces::action::Task_SendGoal_Request>()
{
  return "turtlebot3_act_interfaces::action::Task_SendGoal_Request";
}

template<>
inline const char * name<turtlebot3_act_interfaces::action::Task_SendGoal_Request>()
{
  return "turtlebot3_act_interfaces/action/Task_SendGoal_Request";
}

template<>
struct has_fixed_size<turtlebot3_act_interfaces::action::Task_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<turtlebot3_act_interfaces::action::Task_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtlebot3_act_interfaces::action::Task_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<turtlebot3_act_interfaces::action::Task_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtlebot3_act_interfaces::action::Task_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlebot3_act_interfaces::action::Task_SendGoal_Response>()
{
  return "turtlebot3_act_interfaces::action::Task_SendGoal_Response";
}

template<>
inline const char * name<turtlebot3_act_interfaces::action::Task_SendGoal_Response>()
{
  return "turtlebot3_act_interfaces/action/Task_SendGoal_Response";
}

template<>
struct has_fixed_size<turtlebot3_act_interfaces::action::Task_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<turtlebot3_act_interfaces::action::Task_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<turtlebot3_act_interfaces::action::Task_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlebot3_act_interfaces::action::Task_SendGoal>()
{
  return "turtlebot3_act_interfaces::action::Task_SendGoal";
}

template<>
inline const char * name<turtlebot3_act_interfaces::action::Task_SendGoal>()
{
  return "turtlebot3_act_interfaces/action/Task_SendGoal";
}

template<>
struct has_fixed_size<turtlebot3_act_interfaces::action::Task_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlebot3_act_interfaces::action::Task_SendGoal_Request>::value &&
    has_fixed_size<turtlebot3_act_interfaces::action::Task_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlebot3_act_interfaces::action::Task_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlebot3_act_interfaces::action::Task_SendGoal_Request>::value &&
    has_bounded_size<turtlebot3_act_interfaces::action::Task_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<turtlebot3_act_interfaces::action::Task_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<turtlebot3_act_interfaces::action::Task_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlebot3_act_interfaces::action::Task_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlebot3_act_interfaces::action::Task_GetResult_Request>()
{
  return "turtlebot3_act_interfaces::action::Task_GetResult_Request";
}

template<>
inline const char * name<turtlebot3_act_interfaces::action::Task_GetResult_Request>()
{
  return "turtlebot3_act_interfaces/action/Task_GetResult_Request";
}

template<>
struct has_fixed_size<turtlebot3_act_interfaces::action::Task_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtlebot3_act_interfaces::action::Task_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtlebot3_act_interfaces::action::Task_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "turtlebot3_act_interfaces/action/detail/task__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlebot3_act_interfaces::action::Task_GetResult_Response>()
{
  return "turtlebot3_act_interfaces::action::Task_GetResult_Response";
}

template<>
inline const char * name<turtlebot3_act_interfaces::action::Task_GetResult_Response>()
{
  return "turtlebot3_act_interfaces/action/Task_GetResult_Response";
}

template<>
struct has_fixed_size<turtlebot3_act_interfaces::action::Task_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<turtlebot3_act_interfaces::action::Task_Result>::value> {};

template<>
struct has_bounded_size<turtlebot3_act_interfaces::action::Task_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<turtlebot3_act_interfaces::action::Task_Result>::value> {};

template<>
struct is_message<turtlebot3_act_interfaces::action::Task_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlebot3_act_interfaces::action::Task_GetResult>()
{
  return "turtlebot3_act_interfaces::action::Task_GetResult";
}

template<>
inline const char * name<turtlebot3_act_interfaces::action::Task_GetResult>()
{
  return "turtlebot3_act_interfaces/action/Task_GetResult";
}

template<>
struct has_fixed_size<turtlebot3_act_interfaces::action::Task_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlebot3_act_interfaces::action::Task_GetResult_Request>::value &&
    has_fixed_size<turtlebot3_act_interfaces::action::Task_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlebot3_act_interfaces::action::Task_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlebot3_act_interfaces::action::Task_GetResult_Request>::value &&
    has_bounded_size<turtlebot3_act_interfaces::action::Task_GetResult_Response>::value
  >
{
};

template<>
struct is_service<turtlebot3_act_interfaces::action::Task_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<turtlebot3_act_interfaces::action::Task_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlebot3_act_interfaces::action::Task_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "turtlebot3_act_interfaces/action/detail/task__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlebot3_act_interfaces::action::Task_FeedbackMessage>()
{
  return "turtlebot3_act_interfaces::action::Task_FeedbackMessage";
}

template<>
inline const char * name<turtlebot3_act_interfaces::action::Task_FeedbackMessage>()
{
  return "turtlebot3_act_interfaces/action/Task_FeedbackMessage";
}

template<>
struct has_fixed_size<turtlebot3_act_interfaces::action::Task_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<turtlebot3_act_interfaces::action::Task_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtlebot3_act_interfaces::action::Task_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<turtlebot3_act_interfaces::action::Task_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtlebot3_act_interfaces::action::Task_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<turtlebot3_act_interfaces::action::Task>
  : std::true_type
{
};

template<>
struct is_action_goal<turtlebot3_act_interfaces::action::Task_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<turtlebot3_act_interfaces::action::Task_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<turtlebot3_act_interfaces::action::Task_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TURTLEBOT3_ACT_INTERFACES__ACTION__DETAIL__TASK__TRAITS_HPP_
