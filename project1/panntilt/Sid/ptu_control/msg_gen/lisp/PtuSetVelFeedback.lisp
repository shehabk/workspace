; Auto-generated. Do not edit!


(cl:in-package ptu_control-msg)


;//! \htmlinclude PtuSetVelFeedback.msg.html

(cl:defclass <PtuSetVelFeedback> (roslisp-msg-protocol:ros-message)
  ((state
    :reader state
    :initarg :state
    :type sensor_msgs-msg:JointState
    :initform (cl:make-instance 'sensor_msgs-msg:JointState)))
)

(cl:defclass PtuSetVelFeedback (<PtuSetVelFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PtuSetVelFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PtuSetVelFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ptu_control-msg:<PtuSetVelFeedback> is deprecated: use ptu_control-msg:PtuSetVelFeedback instead.")))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <PtuSetVelFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ptu_control-msg:state-val is deprecated.  Use ptu_control-msg:state instead.")
  (state m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PtuSetVelFeedback>) ostream)
  "Serializes a message object of type '<PtuSetVelFeedback>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'state) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PtuSetVelFeedback>) istream)
  "Deserializes a message object of type '<PtuSetVelFeedback>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'state) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PtuSetVelFeedback>)))
  "Returns string type for a message object of type '<PtuSetVelFeedback>"
  "ptu_control/PtuSetVelFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PtuSetVelFeedback)))
  "Returns string type for a message object of type 'PtuSetVelFeedback"
  "ptu_control/PtuSetVelFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PtuSetVelFeedback>)))
  "Returns md5sum for a message object of type '<PtuSetVelFeedback>"
  "b869e8f6f1d03107da0fd57ef24c9c1d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PtuSetVelFeedback)))
  "Returns md5sum for a message object of type 'PtuSetVelFeedback"
  "b869e8f6f1d03107da0fd57ef24c9c1d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PtuSetVelFeedback>)))
  "Returns full string definition for message of type '<PtuSetVelFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# feedback~%sensor_msgs/JointState state~%~%~%================================================================================~%MSG: sensor_msgs/JointState~%# This is a message that holds data to describe the state of a set of torque controlled joints. ~%#~%# The state of each joint (revolute or prismatic) is defined by:~%#  * the position of the joint (rad or m),~%#  * the velocity of the joint (rad/s or m/s) and ~%#  * the effort that is applied in the joint (Nm or N).~%#~%# Each joint is uniquely identified by its name~%# The header specifies the time at which the joint states were recorded. All the joint states~%# in one message have to be recorded at the same time.~%#~%# This message consists of a multiple arrays, one for each part of the joint state. ~%# The goal is to make each of the fields optional. When e.g. your joints have no~%# effort associated with them, you can leave the effort array empty. ~%#~%# All arrays in this message should have the same size, or be empty.~%# This is the only way to uniquely associate the joint name with the correct~%# states.~%~%~%Header header~%~%string[] name~%float64[] position~%float64[] velocity~%float64[] effort~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PtuSetVelFeedback)))
  "Returns full string definition for message of type 'PtuSetVelFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# feedback~%sensor_msgs/JointState state~%~%~%================================================================================~%MSG: sensor_msgs/JointState~%# This is a message that holds data to describe the state of a set of torque controlled joints. ~%#~%# The state of each joint (revolute or prismatic) is defined by:~%#  * the position of the joint (rad or m),~%#  * the velocity of the joint (rad/s or m/s) and ~%#  * the effort that is applied in the joint (Nm or N).~%#~%# Each joint is uniquely identified by its name~%# The header specifies the time at which the joint states were recorded. All the joint states~%# in one message have to be recorded at the same time.~%#~%# This message consists of a multiple arrays, one for each part of the joint state. ~%# The goal is to make each of the fields optional. When e.g. your joints have no~%# effort associated with them, you can leave the effort array empty. ~%#~%# All arrays in this message should have the same size, or be empty.~%# This is the only way to uniquely associate the joint name with the correct~%# states.~%~%~%Header header~%~%string[] name~%float64[] position~%float64[] velocity~%float64[] effort~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PtuSetVelFeedback>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'state))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PtuSetVelFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'PtuSetVelFeedback
    (cl:cons ':state (state msg))
))
