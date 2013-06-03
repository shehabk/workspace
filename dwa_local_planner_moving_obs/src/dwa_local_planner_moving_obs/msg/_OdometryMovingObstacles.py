"""autogenerated by genmsg_py from OdometryMovingObstacles.msg. Do not edit."""
import roslib.message
import struct

import geometry_msgs.msg
import nav_msgs.msg
import std_msgs.msg

class OdometryMovingObstacles(roslib.message.Message):
  _md5sum = "b75dd1fa87c85e47ac20e03fdf58c4da"
  _type = "dwa_local_planner_moving_obs/OdometryMovingObstacles"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """#An vector of odometry of moving obstacles
Header header
int32 number_of_obstacles
nav_msgs/Odometry[] odom

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.secs: seconds (stamp_secs) since epoch
# * stamp.nsecs: nanoseconds since stamp_secs
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: nav_msgs/Odometry
# This represents an estimate of a position and velocity in free space.  
# The pose in this message should be specified in the coordinate frame given by header.frame_id.
# The twist in this message should be specified in the coordinate frame given by the child_frame_id
Header header
string child_frame_id
geometry_msgs/PoseWithCovariance pose
geometry_msgs/TwistWithCovariance twist

================================================================================
MSG: geometry_msgs/PoseWithCovariance
# This represents a pose in free space with uncertainty.

Pose pose

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of postion and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/TwistWithCovariance
# This expresses velocity in free space with uncertianty.

Twist twist

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into it's linear and angular parts. 
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 

float64 x
float64 y
float64 z
"""
  __slots__ = ['header','number_of_obstacles','odom']
  _slot_types = ['Header','int32','nav_msgs/Odometry[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.
    
    The available fields are:
       header,number_of_obstacles,odom
    
    @param args: complete set of field values, in .msg order
    @param kwds: use keyword arguments corresponding to message field names
    to set specific fields. 
    """
    if args or kwds:
      super(OdometryMovingObstacles, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg._Header.Header()
      if self.number_of_obstacles is None:
        self.number_of_obstacles = 0
      if self.odom is None:
        self.odom = []
    else:
      self.header = std_msgs.msg._Header.Header()
      self.number_of_obstacles = 0
      self.odom = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    @param buff: buffer
    @type  buff: StringIO
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_struct_i.pack(self.number_of_obstacles))
      length = len(self.odom)
      buff.write(_struct_I.pack(length))
      for val1 in self.odom:
        _v1 = val1.header
        buff.write(_struct_I.pack(_v1.seq))
        _v2 = _v1.stamp
        _x = _v2
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v1.frame_id
        length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.child_frame_id
        length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v3 = val1.pose
        _v4 = _v3.pose
        _v5 = _v4.position
        _x = _v5
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v6 = _v4.orientation
        _x = _v6
        buff.write(_struct_4d.pack(_x.x, _x.y, _x.z, _x.w))
        buff.write(_struct_36d.pack(*_v3.covariance))
        _v7 = val1.twist
        _v8 = _v7.twist
        _v9 = _v8.linear
        _x = _v9
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v10 = _v8.angular
        _x = _v10
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        buff.write(_struct_36d.pack(*_v7.covariance))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    @param str: byte array of serialized message
    @type  str: str
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg._Header.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.header.frame_id = str[start:end]
      start = end
      end += 4
      (self.number_of_obstacles,) = _struct_i.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.odom = []
      for i in range(0, length):
        val1 = nav_msgs.msg.Odometry()
        _v11 = val1.header
        start = end
        end += 4
        (_v11.seq,) = _struct_I.unpack(str[start:end])
        _v12 = _v11.stamp
        _x = _v12
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        _v11.frame_id = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        val1.child_frame_id = str[start:end]
        _v13 = val1.pose
        _v14 = _v13.pose
        _v15 = _v14.position
        _x = _v15
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v16 = _v14.orientation
        _x = _v16
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _struct_4d.unpack(str[start:end])
        start = end
        end += 288
        _v13.covariance = _struct_36d.unpack(str[start:end])
        _v17 = val1.twist
        _v18 = _v17.twist
        _v19 = _v18.linear
        _x = _v19
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v20 = _v18.angular
        _x = _v20
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        start = end
        end += 288
        _v17.covariance = _struct_36d.unpack(str[start:end])
        self.odom.append(val1)
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    @param buff: buffer
    @type  buff: StringIO
    @param numpy: numpy python module
    @type  numpy module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_struct_i.pack(self.number_of_obstacles))
      length = len(self.odom)
      buff.write(_struct_I.pack(length))
      for val1 in self.odom:
        _v21 = val1.header
        buff.write(_struct_I.pack(_v21.seq))
        _v22 = _v21.stamp
        _x = _v22
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v21.frame_id
        length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.child_frame_id
        length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v23 = val1.pose
        _v24 = _v23.pose
        _v25 = _v24.position
        _x = _v25
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v26 = _v24.orientation
        _x = _v26
        buff.write(_struct_4d.pack(_x.x, _x.y, _x.z, _x.w))
        buff.write(_v23.covariance.tostring())
        _v27 = val1.twist
        _v28 = _v27.twist
        _v29 = _v28.linear
        _x = _v29
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v30 = _v28.angular
        _x = _v30
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        buff.write(_v27.covariance.tostring())
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    @param str: byte array of serialized message
    @type  str: str
    @param numpy: numpy python module
    @type  numpy: module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg._Header.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.header.frame_id = str[start:end]
      start = end
      end += 4
      (self.number_of_obstacles,) = _struct_i.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.odom = []
      for i in range(0, length):
        val1 = nav_msgs.msg.Odometry()
        _v31 = val1.header
        start = end
        end += 4
        (_v31.seq,) = _struct_I.unpack(str[start:end])
        _v32 = _v31.stamp
        _x = _v32
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        _v31.frame_id = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        val1.child_frame_id = str[start:end]
        _v33 = val1.pose
        _v34 = _v33.pose
        _v35 = _v34.position
        _x = _v35
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v36 = _v34.orientation
        _x = _v36
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _struct_4d.unpack(str[start:end])
        start = end
        end += 288
        _v33.covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=36)
        _v37 = val1.twist
        _v38 = _v37.twist
        _v39 = _v38.linear
        _x = _v39
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v40 = _v38.angular
        _x = _v40
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        start = end
        end += 288
        _v37.covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=36)
        self.odom.append(val1)
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

_struct_I = roslib.message.struct_I
_struct_i = struct.Struct("<i")
_struct_36d = struct.Struct("<36d")
_struct_3I = struct.Struct("<3I")
_struct_4d = struct.Struct("<4d")
_struct_2I = struct.Struct("<2I")
_struct_3d = struct.Struct("<3d")
