#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "turtle_my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_my_interfaces__srv__TurtleSrv_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtle_my_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_my_interfaces__srv__TurtleSrv_Request__init(msg: *mut TurtleSrv_Request) -> bool;
    fn turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TurtleSrv_Request>, size: usize) -> bool;
    fn turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TurtleSrv_Request>);
    fn turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TurtleSrv_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TurtleSrv_Request>) -> bool;
}

// Corresponds to turtle_my_interfaces__srv__TurtleSrv_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_my_interfaces__srv__TurtleSrv_Request__init(&mut msg as *mut _) {
        panic!("Call to turtle_my_interfaces__srv__TurtleSrv_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TurtleSrv_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TurtleSrv_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TurtleSrv_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_my_interfaces/srv/TurtleSrv_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_my_interfaces__srv__TurtleSrv_Request() }
  }
}


#[link(name = "turtle_my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_my_interfaces__srv__TurtleSrv_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtle_my_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_my_interfaces__srv__TurtleSrv_Response__init(msg: *mut TurtleSrv_Response) -> bool;
    fn turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TurtleSrv_Response>, size: usize) -> bool;
    fn turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TurtleSrv_Response>);
    fn turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TurtleSrv_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TurtleSrv_Response>) -> bool;
}

// Corresponds to turtle_my_interfaces__srv__TurtleSrv_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TurtleSrv_Response {
    /// 是否成功
    pub success: bool,

    /// 状态信息
    pub message: rosidl_runtime_rs::String,

}



impl Default for TurtleSrv_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_my_interfaces__srv__TurtleSrv_Response__init(&mut msg as *mut _) {
        panic!("Call to turtle_my_interfaces__srv__TurtleSrv_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TurtleSrv_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TurtleSrv_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TurtleSrv_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_my_interfaces/srv/TurtleSrv_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_my_interfaces__srv__TurtleSrv_Response() }
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


