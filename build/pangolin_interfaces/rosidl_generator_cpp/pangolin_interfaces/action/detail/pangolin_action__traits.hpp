// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pangolin_interfaces:action/PangolinAction.idl
// generated code does not contain a copyright notice

#ifndef PANGOLIN_INTERFACES__ACTION__DETAIL__PANGOLIN_ACTION__TRAITS_HPP_
#define PANGOLIN_INTERFACES__ACTION__DETAIL__PANGOLIN_ACTION__TRAITS_HPP_

#include "pangolin_interfaces/action/detail/pangolin_action__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pangolin_interfaces::action::PangolinAction_Goal>()
{
  return "pangolin_interfaces::action::PangolinAction_Goal";
}

template<>
inline const char * name<pangolin_interfaces::action::PangolinAction_Goal>()
{
  return "pangolin_interfaces/action/PangolinAction_Goal";
}

template<>
struct has_fixed_size<pangolin_interfaces::action::PangolinAction_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pangolin_interfaces::action::PangolinAction_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pangolin_interfaces::action::PangolinAction_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pangolin_interfaces::action::PangolinAction_Result>()
{
  return "pangolin_interfaces::action::PangolinAction_Result";
}

template<>
inline const char * name<pangolin_interfaces::action::PangolinAction_Result>()
{
  return "pangolin_interfaces/action/PangolinAction_Result";
}

template<>
struct has_fixed_size<pangolin_interfaces::action::PangolinAction_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pangolin_interfaces::action::PangolinAction_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pangolin_interfaces::action::PangolinAction_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pangolin_interfaces::action::PangolinAction_Feedback>()
{
  return "pangolin_interfaces::action::PangolinAction_Feedback";
}

template<>
inline const char * name<pangolin_interfaces::action::PangolinAction_Feedback>()
{
  return "pangolin_interfaces/action/PangolinAction_Feedback";
}

template<>
struct has_fixed_size<pangolin_interfaces::action::PangolinAction_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pangolin_interfaces::action::PangolinAction_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pangolin_interfaces::action::PangolinAction_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "pangolin_interfaces/action/detail/pangolin_action__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pangolin_interfaces::action::PangolinAction_SendGoal_Request>()
{
  return "pangolin_interfaces::action::PangolinAction_SendGoal_Request";
}

template<>
inline const char * name<pangolin_interfaces::action::PangolinAction_SendGoal_Request>()
{
  return "pangolin_interfaces/action/PangolinAction_SendGoal_Request";
}

template<>
struct has_fixed_size<pangolin_interfaces::action::PangolinAction_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<pangolin_interfaces::action::PangolinAction_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pangolin_interfaces::action::PangolinAction_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<pangolin_interfaces::action::PangolinAction_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pangolin_interfaces::action::PangolinAction_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pangolin_interfaces::action::PangolinAction_SendGoal_Response>()
{
  return "pangolin_interfaces::action::PangolinAction_SendGoal_Response";
}

template<>
inline const char * name<pangolin_interfaces::action::PangolinAction_SendGoal_Response>()
{
  return "pangolin_interfaces/action/PangolinAction_SendGoal_Response";
}

template<>
struct has_fixed_size<pangolin_interfaces::action::PangolinAction_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<pangolin_interfaces::action::PangolinAction_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<pangolin_interfaces::action::PangolinAction_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pangolin_interfaces::action::PangolinAction_SendGoal>()
{
  return "pangolin_interfaces::action::PangolinAction_SendGoal";
}

template<>
inline const char * name<pangolin_interfaces::action::PangolinAction_SendGoal>()
{
  return "pangolin_interfaces/action/PangolinAction_SendGoal";
}

template<>
struct has_fixed_size<pangolin_interfaces::action::PangolinAction_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<pangolin_interfaces::action::PangolinAction_SendGoal_Request>::value &&
    has_fixed_size<pangolin_interfaces::action::PangolinAction_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<pangolin_interfaces::action::PangolinAction_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<pangolin_interfaces::action::PangolinAction_SendGoal_Request>::value &&
    has_bounded_size<pangolin_interfaces::action::PangolinAction_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<pangolin_interfaces::action::PangolinAction_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<pangolin_interfaces::action::PangolinAction_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pangolin_interfaces::action::PangolinAction_SendGoal_Response>
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
inline const char * data_type<pangolin_interfaces::action::PangolinAction_GetResult_Request>()
{
  return "pangolin_interfaces::action::PangolinAction_GetResult_Request";
}

template<>
inline const char * name<pangolin_interfaces::action::PangolinAction_GetResult_Request>()
{
  return "pangolin_interfaces/action/PangolinAction_GetResult_Request";
}

template<>
struct has_fixed_size<pangolin_interfaces::action::PangolinAction_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pangolin_interfaces::action::PangolinAction_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pangolin_interfaces::action::PangolinAction_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "pangolin_interfaces/action/detail/pangolin_action__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pangolin_interfaces::action::PangolinAction_GetResult_Response>()
{
  return "pangolin_interfaces::action::PangolinAction_GetResult_Response";
}

template<>
inline const char * name<pangolin_interfaces::action::PangolinAction_GetResult_Response>()
{
  return "pangolin_interfaces/action/PangolinAction_GetResult_Response";
}

template<>
struct has_fixed_size<pangolin_interfaces::action::PangolinAction_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<pangolin_interfaces::action::PangolinAction_Result>::value> {};

template<>
struct has_bounded_size<pangolin_interfaces::action::PangolinAction_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<pangolin_interfaces::action::PangolinAction_Result>::value> {};

template<>
struct is_message<pangolin_interfaces::action::PangolinAction_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pangolin_interfaces::action::PangolinAction_GetResult>()
{
  return "pangolin_interfaces::action::PangolinAction_GetResult";
}

template<>
inline const char * name<pangolin_interfaces::action::PangolinAction_GetResult>()
{
  return "pangolin_interfaces/action/PangolinAction_GetResult";
}

template<>
struct has_fixed_size<pangolin_interfaces::action::PangolinAction_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<pangolin_interfaces::action::PangolinAction_GetResult_Request>::value &&
    has_fixed_size<pangolin_interfaces::action::PangolinAction_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<pangolin_interfaces::action::PangolinAction_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<pangolin_interfaces::action::PangolinAction_GetResult_Request>::value &&
    has_bounded_size<pangolin_interfaces::action::PangolinAction_GetResult_Response>::value
  >
{
};

template<>
struct is_service<pangolin_interfaces::action::PangolinAction_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<pangolin_interfaces::action::PangolinAction_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pangolin_interfaces::action::PangolinAction_GetResult_Response>
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
// #include "pangolin_interfaces/action/detail/pangolin_action__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pangolin_interfaces::action::PangolinAction_FeedbackMessage>()
{
  return "pangolin_interfaces::action::PangolinAction_FeedbackMessage";
}

template<>
inline const char * name<pangolin_interfaces::action::PangolinAction_FeedbackMessage>()
{
  return "pangolin_interfaces/action/PangolinAction_FeedbackMessage";
}

template<>
struct has_fixed_size<pangolin_interfaces::action::PangolinAction_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<pangolin_interfaces::action::PangolinAction_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pangolin_interfaces::action::PangolinAction_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<pangolin_interfaces::action::PangolinAction_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pangolin_interfaces::action::PangolinAction_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<pangolin_interfaces::action::PangolinAction>
  : std::true_type
{
};

template<>
struct is_action_goal<pangolin_interfaces::action::PangolinAction_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<pangolin_interfaces::action::PangolinAction_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<pangolin_interfaces::action::PangolinAction_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PANGOLIN_INTERFACES__ACTION__DETAIL__PANGOLIN_ACTION__TRAITS_HPP_
