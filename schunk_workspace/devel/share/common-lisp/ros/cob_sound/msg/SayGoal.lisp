; Auto-generated. Do not edit!


(cl:in-package cob_sound-msg)


;//! \htmlinclude SayGoal.msg.html

(cl:defclass <SayGoal> (roslisp-msg-protocol:ros-message)
  ((text
    :reader text
    :initarg :text
    :type std_msgs-msg:String
    :initform (cl:make-instance 'std_msgs-msg:String)))
)

(cl:defclass SayGoal (<SayGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SayGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SayGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cob_sound-msg:<SayGoal> is deprecated: use cob_sound-msg:SayGoal instead.")))

(cl:ensure-generic-function 'text-val :lambda-list '(m))
(cl:defmethod text-val ((m <SayGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cob_sound-msg:text-val is deprecated.  Use cob_sound-msg:text instead.")
  (text m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SayGoal>) ostream)
  "Serializes a message object of type '<SayGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'text) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SayGoal>) istream)
  "Deserializes a message object of type '<SayGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'text) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SayGoal>)))
  "Returns string type for a message object of type '<SayGoal>"
  "cob_sound/SayGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SayGoal)))
  "Returns string type for a message object of type 'SayGoal"
  "cob_sound/SayGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SayGoal>)))
  "Returns md5sum for a message object of type '<SayGoal>"
  "7fb91077b93c329c9eeaea1c488c03e0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SayGoal)))
  "Returns md5sum for a message object of type 'SayGoal"
  "7fb91077b93c329c9eeaea1c488c03e0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SayGoal>)))
  "Returns full string definition for message of type '<SayGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# goal~%std_msgs/String text~%~%================================================================================~%MSG: std_msgs/String~%string data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SayGoal)))
  "Returns full string definition for message of type 'SayGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# goal~%std_msgs/String text~%~%================================================================================~%MSG: std_msgs/String~%string data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SayGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'text))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SayGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'SayGoal
    (cl:cons ':text (text msg))
))
