; Auto-generated. Do not edit!


(cl:in-package cob_light-msg)


;//! \htmlinclude SetLightModeActionGoal.msg.html

(cl:defclass <SetLightModeActionGoal> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (goal_id
    :reader goal_id
    :initarg :goal_id
    :type actionlib_msgs-msg:GoalID
    :initform (cl:make-instance 'actionlib_msgs-msg:GoalID))
   (goal
    :reader goal
    :initarg :goal
    :type cob_light-msg:SetLightModeGoal
    :initform (cl:make-instance 'cob_light-msg:SetLightModeGoal)))
)

(cl:defclass SetLightModeActionGoal (<SetLightModeActionGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetLightModeActionGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetLightModeActionGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cob_light-msg:<SetLightModeActionGoal> is deprecated: use cob_light-msg:SetLightModeActionGoal instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <SetLightModeActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cob_light-msg:header-val is deprecated.  Use cob_light-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'goal_id-val :lambda-list '(m))
(cl:defmethod goal_id-val ((m <SetLightModeActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cob_light-msg:goal_id-val is deprecated.  Use cob_light-msg:goal_id instead.")
  (goal_id m))

(cl:ensure-generic-function 'goal-val :lambda-list '(m))
(cl:defmethod goal-val ((m <SetLightModeActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cob_light-msg:goal-val is deprecated.  Use cob_light-msg:goal instead.")
  (goal m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetLightModeActionGoal>) ostream)
  "Serializes a message object of type '<SetLightModeActionGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'goal_id) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'goal) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetLightModeActionGoal>) istream)
  "Deserializes a message object of type '<SetLightModeActionGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'goal_id) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'goal) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetLightModeActionGoal>)))
  "Returns string type for a message object of type '<SetLightModeActionGoal>"
  "cob_light/SetLightModeActionGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetLightModeActionGoal)))
  "Returns string type for a message object of type 'SetLightModeActionGoal"
  "cob_light/SetLightModeActionGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetLightModeActionGoal>)))
  "Returns md5sum for a message object of type '<SetLightModeActionGoal>"
  "5a0fbb41ccbcad3e400fdff9a37682eb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetLightModeActionGoal)))
  "Returns md5sum for a message object of type 'SetLightModeActionGoal"
  "5a0fbb41ccbcad3e400fdff9a37682eb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetLightModeActionGoal>)))
  "Returns full string definition for message of type '<SetLightModeActionGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%SetLightModeGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: cob_light/SetLightModeGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# The goal~%cob_light/LightMode mode~%~%================================================================================~%MSG: cob_light/LightMode~%uint8 mode~%uint8 NONE = 0 			# will turn everything off~%uint8 STATIC = 1 		# will change the LEDs to \"color\"~%uint8 FLASH = 2 		# will change the LEDs frequently with \"frequency\" from \"color\" to black~%uint8 BREATH = 3 		# will change the LEDs smoothly with \"frequency\" from \"color\" to black~%uint8 BREATH_COLOR = 4 	# will change the LEDs smoothly with \"frequency\" from \"color\" to black~%						# and flips color in time~%uint8 FADE_COLOR = 5 	# will fade the colors in rainbow~%~%std_msgs/ColorRGBA color #the color which will be used~%float32 frequency 		# in Hz~%float32 timeout 		# in s, requested mode will be executed for max timout s.~%						# default is 0 and meens no timeout.~%int32 pulses 			# spezifies the amount of pulses which will be executed.~%			 			# eg: mode = flash, pulses = 2. Meens the light will flash two times~%int8 priority 			# priority [-20,20] default = 0. Modes with same or higher priorities will ~%						# be executed.~%================================================================================~%MSG: std_msgs/ColorRGBA~%float32 r~%float32 g~%float32 b~%float32 a~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetLightModeActionGoal)))
  "Returns full string definition for message of type 'SetLightModeActionGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%SetLightModeGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: cob_light/SetLightModeGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# The goal~%cob_light/LightMode mode~%~%================================================================================~%MSG: cob_light/LightMode~%uint8 mode~%uint8 NONE = 0 			# will turn everything off~%uint8 STATIC = 1 		# will change the LEDs to \"color\"~%uint8 FLASH = 2 		# will change the LEDs frequently with \"frequency\" from \"color\" to black~%uint8 BREATH = 3 		# will change the LEDs smoothly with \"frequency\" from \"color\" to black~%uint8 BREATH_COLOR = 4 	# will change the LEDs smoothly with \"frequency\" from \"color\" to black~%						# and flips color in time~%uint8 FADE_COLOR = 5 	# will fade the colors in rainbow~%~%std_msgs/ColorRGBA color #the color which will be used~%float32 frequency 		# in Hz~%float32 timeout 		# in s, requested mode will be executed for max timout s.~%						# default is 0 and meens no timeout.~%int32 pulses 			# spezifies the amount of pulses which will be executed.~%			 			# eg: mode = flash, pulses = 2. Meens the light will flash two times~%int8 priority 			# priority [-20,20] default = 0. Modes with same or higher priorities will ~%						# be executed.~%================================================================================~%MSG: std_msgs/ColorRGBA~%float32 r~%float32 g~%float32 b~%float32 a~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetLightModeActionGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'goal_id))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'goal))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetLightModeActionGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'SetLightModeActionGoal
    (cl:cons ':header (header msg))
    (cl:cons ':goal_id (goal_id msg))
    (cl:cons ':goal (goal msg))
))
