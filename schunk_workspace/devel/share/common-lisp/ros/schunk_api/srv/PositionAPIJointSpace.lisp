; Auto-generated. Do not edit!


(cl:in-package schunk_api-srv)


;//! \htmlinclude PositionAPIJointSpace-request.msg.html

(cl:defclass <PositionAPIJointSpace-request> (roslisp-msg-protocol:ros-message)
  ((joint1
    :reader joint1
    :initarg :joint1
    :type cl:float
    :initform 0.0)
   (joint2
    :reader joint2
    :initarg :joint2
    :type cl:float
    :initform 0.0)
   (joint3
    :reader joint3
    :initarg :joint3
    :type cl:float
    :initform 0.0)
   (joint4
    :reader joint4
    :initarg :joint4
    :type cl:float
    :initform 0.0)
   (joint5
    :reader joint5
    :initarg :joint5
    :type cl:float
    :initform 0.0)
   (joint6
    :reader joint6
    :initarg :joint6
    :type cl:float
    :initform 0.0))
)

(cl:defclass PositionAPIJointSpace-request (<PositionAPIJointSpace-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PositionAPIJointSpace-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PositionAPIJointSpace-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name schunk_api-srv:<PositionAPIJointSpace-request> is deprecated: use schunk_api-srv:PositionAPIJointSpace-request instead.")))

(cl:ensure-generic-function 'joint1-val :lambda-list '(m))
(cl:defmethod joint1-val ((m <PositionAPIJointSpace-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader schunk_api-srv:joint1-val is deprecated.  Use schunk_api-srv:joint1 instead.")
  (joint1 m))

(cl:ensure-generic-function 'joint2-val :lambda-list '(m))
(cl:defmethod joint2-val ((m <PositionAPIJointSpace-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader schunk_api-srv:joint2-val is deprecated.  Use schunk_api-srv:joint2 instead.")
  (joint2 m))

(cl:ensure-generic-function 'joint3-val :lambda-list '(m))
(cl:defmethod joint3-val ((m <PositionAPIJointSpace-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader schunk_api-srv:joint3-val is deprecated.  Use schunk_api-srv:joint3 instead.")
  (joint3 m))

(cl:ensure-generic-function 'joint4-val :lambda-list '(m))
(cl:defmethod joint4-val ((m <PositionAPIJointSpace-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader schunk_api-srv:joint4-val is deprecated.  Use schunk_api-srv:joint4 instead.")
  (joint4 m))

(cl:ensure-generic-function 'joint5-val :lambda-list '(m))
(cl:defmethod joint5-val ((m <PositionAPIJointSpace-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader schunk_api-srv:joint5-val is deprecated.  Use schunk_api-srv:joint5 instead.")
  (joint5 m))

(cl:ensure-generic-function 'joint6-val :lambda-list '(m))
(cl:defmethod joint6-val ((m <PositionAPIJointSpace-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader schunk_api-srv:joint6-val is deprecated.  Use schunk_api-srv:joint6 instead.")
  (joint6 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PositionAPIJointSpace-request>) ostream)
  "Serializes a message object of type '<PositionAPIJointSpace-request>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'joint1))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'joint2))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'joint3))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'joint4))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'joint5))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'joint6))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PositionAPIJointSpace-request>) istream)
  "Deserializes a message object of type '<PositionAPIJointSpace-request>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'joint1) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'joint2) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'joint3) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'joint4) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'joint5) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'joint6) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PositionAPIJointSpace-request>)))
  "Returns string type for a service object of type '<PositionAPIJointSpace-request>"
  "schunk_api/PositionAPIJointSpaceRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PositionAPIJointSpace-request)))
  "Returns string type for a service object of type 'PositionAPIJointSpace-request"
  "schunk_api/PositionAPIJointSpaceRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PositionAPIJointSpace-request>)))
  "Returns md5sum for a message object of type '<PositionAPIJointSpace-request>"
  "60c3fd644ab983a3da67b79566dacdad")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PositionAPIJointSpace-request)))
  "Returns md5sum for a message object of type 'PositionAPIJointSpace-request"
  "60c3fd644ab983a3da67b79566dacdad")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PositionAPIJointSpace-request>)))
  "Returns full string definition for message of type '<PositionAPIJointSpace-request>"
  (cl:format cl:nil "float64 joint1~%float64 joint2~%float64 joint3~%float64 joint4~%float64 joint5~%float64 joint6~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PositionAPIJointSpace-request)))
  "Returns full string definition for message of type 'PositionAPIJointSpace-request"
  (cl:format cl:nil "float64 joint1~%float64 joint2~%float64 joint3~%float64 joint4~%float64 joint5~%float64 joint6~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PositionAPIJointSpace-request>))
  (cl:+ 0
     8
     8
     8
     8
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PositionAPIJointSpace-request>))
  "Converts a ROS message object to a list"
  (cl:list 'PositionAPIJointSpace-request
    (cl:cons ':joint1 (joint1 msg))
    (cl:cons ':joint2 (joint2 msg))
    (cl:cons ':joint3 (joint3 msg))
    (cl:cons ':joint4 (joint4 msg))
    (cl:cons ':joint5 (joint5 msg))
    (cl:cons ':joint6 (joint6 msg))
))
;//! \htmlinclude PositionAPIJointSpace-response.msg.html

(cl:defclass <PositionAPIJointSpace-response> (roslisp-msg-protocol:ros-message)
  ((status
    :reader status
    :initarg :status
    :type cl:integer
    :initform 0))
)

(cl:defclass PositionAPIJointSpace-response (<PositionAPIJointSpace-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PositionAPIJointSpace-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PositionAPIJointSpace-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name schunk_api-srv:<PositionAPIJointSpace-response> is deprecated: use schunk_api-srv:PositionAPIJointSpace-response instead.")))

(cl:ensure-generic-function 'status-val :lambda-list '(m))
(cl:defmethod status-val ((m <PositionAPIJointSpace-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader schunk_api-srv:status-val is deprecated.  Use schunk_api-srv:status instead.")
  (status m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PositionAPIJointSpace-response>) ostream)
  "Serializes a message object of type '<PositionAPIJointSpace-response>"
  (cl:let* ((signed (cl:slot-value msg 'status)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PositionAPIJointSpace-response>) istream)
  "Deserializes a message object of type '<PositionAPIJointSpace-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'status) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PositionAPIJointSpace-response>)))
  "Returns string type for a service object of type '<PositionAPIJointSpace-response>"
  "schunk_api/PositionAPIJointSpaceResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PositionAPIJointSpace-response)))
  "Returns string type for a service object of type 'PositionAPIJointSpace-response"
  "schunk_api/PositionAPIJointSpaceResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PositionAPIJointSpace-response>)))
  "Returns md5sum for a message object of type '<PositionAPIJointSpace-response>"
  "60c3fd644ab983a3da67b79566dacdad")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PositionAPIJointSpace-response)))
  "Returns md5sum for a message object of type 'PositionAPIJointSpace-response"
  "60c3fd644ab983a3da67b79566dacdad")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PositionAPIJointSpace-response>)))
  "Returns full string definition for message of type '<PositionAPIJointSpace-response>"
  (cl:format cl:nil "int64 status~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PositionAPIJointSpace-response)))
  "Returns full string definition for message of type 'PositionAPIJointSpace-response"
  (cl:format cl:nil "int64 status~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PositionAPIJointSpace-response>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PositionAPIJointSpace-response>))
  "Converts a ROS message object to a list"
  (cl:list 'PositionAPIJointSpace-response
    (cl:cons ':status (status msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'PositionAPIJointSpace)))
  'PositionAPIJointSpace-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'PositionAPIJointSpace)))
  'PositionAPIJointSpace-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PositionAPIJointSpace)))
  "Returns string type for a service object of type '<PositionAPIJointSpace>"
  "schunk_api/PositionAPIJointSpace")