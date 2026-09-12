#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to turtle_my_interfaces__srv__TurtleSrv_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TurtleSrv_Request {
    /// 目标X坐标
    pub x: f32,

    /// 目标Y坐标
    pub y: f32,

    /// 目标朝向角度（弧度）
    pub theta: f32,

}



impl Default for TurtleSrv_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TurtleSrv_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TurtleSrv_Request {
  type RmwMsg = super::srv::rmw::TurtleSrv_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        theta: msg.theta,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      theta: msg.theta,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      theta: msg.theta,
    }
  }
}


// Corresponds to turtle_my_interfaces__srv__TurtleSrv_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TurtleSrv_Response {
    /// 是否成功
    pub success: bool,

    /// 状态信息
    pub message: std::string::String,

}



impl Default for TurtleSrv_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TurtleSrv_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TurtleSrv_Response {
  type RmwMsg = super::srv::rmw::TurtleSrv_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}






#[link(name = "turtle_my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtle_my_interfaces__srv__TurtleSrv() -> *const std::ffi::c_void;
}

// Corresponds to turtle_my_interfaces__srv__TurtleSrv
#[allow(missing_docs, non_camel_case_types)]
pub struct TurtleSrv;

impl rosidl_runtime_rs::Service for TurtleSrv {
    type Request = TurtleSrv_Request;
    type Response = TurtleSrv_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtle_my_interfaces__srv__TurtleSrv() }
    }
}


