"""autogenerated by genmsg_py from obstacles_pos_vel.msg. Do not edit."""
import roslib.message
import struct

import leg_detector3.msg
import std_msgs.msg

class obstacles_pos_vel(roslib.message.Message):
  _md5sum = "643e95694865b2bdc861ebe92204cffe"
  _type = "leg_detector3/obstacles_pos_vel"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """#An array of position and velocities of moving obstacles
Header header
int32 number_of_obstacles
leg_detector3/pos_vel[20] pos_vel

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
MSG: leg_detector3/pos_vel
# A representation of position and velocity of object
Header header
float32 pos_x
float32 pos_y
float32 pos_z
float32 vel_x
float32 vel_y
float32 vel_z
int32 class

"""
  __slots__ = ['header','number_of_obstacles','pos_vel']
  _slot_types = ['Header','int32','leg_detector3/pos_vel[20]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.
    
    The available fields are:
       header,number_of_obstacles,pos_vel
    
    @param args: complete set of field values, in .msg order
    @param kwds: use keyword arguments corresponding to message field names
    to set specific fields. 
    """
    if args or kwds:
      super(obstacles_pos_vel, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg._Header.Header()
      if self.number_of_obstacles is None:
        self.number_of_obstacles = 0
      if self.pos_vel is None:
        self.pos_vel = [leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel()]
    else:
      self.header = std_msgs.msg._Header.Header()
      self.number_of_obstacles = 0
      self.pos_vel = [leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel(),leg_detector3.msg.pos_vel()]

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
      for val1 in self.pos_vel:
        _v1 = val1.header
        buff.write(_struct_I.pack(_v1.seq))
        _v2 = _v1.stamp
        _x = _v2
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v1.frame_id
        length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_struct_6fi.pack(_x.pos_x, _x.pos_y, _x.pos_z, _x.vel_x, _x.vel_y, _x.vel_z, _x.class))
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
      self.pos_vel = []
      for i in range(0, 20):
        val1 = leg_detector3.msg.pos_vel()
        _v3 = val1.header
        start = end
        end += 4
        (_v3.seq,) = _struct_I.unpack(str[start:end])
        _v4 = _v3.stamp
        _x = _v4
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        _v3.frame_id = str[start:end]
        _x = val1
        start = end
        end += 28
        (_x.pos_x, _x.pos_y, _x.pos_z, _x.vel_x, _x.vel_y, _x.vel_z, _x.class,) = _struct_6fi.unpack(str[start:end])
        self.pos_vel.append(val1)
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
      for val1 in self.pos_vel:
        _v5 = val1.header
        buff.write(_struct_I.pack(_v5.seq))
        _v6 = _v5.stamp
        _x = _v6
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v5.frame_id
        length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_struct_6fi.pack(_x.pos_x, _x.pos_y, _x.pos_z, _x.vel_x, _x.vel_y, _x.vel_z, _x.class))
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
      self.pos_vel = []
      for i in range(0, 20):
        val1 = leg_detector3.msg.pos_vel()
        _v7 = val1.header
        start = end
        end += 4
        (_v7.seq,) = _struct_I.unpack(str[start:end])
        _v8 = _v7.stamp
        _x = _v8
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        _v7.frame_id = str[start:end]
        _x = val1
        start = end
        end += 28
        (_x.pos_x, _x.pos_y, _x.pos_z, _x.vel_x, _x.vel_y, _x.vel_z, _x.class,) = _struct_6fi.unpack(str[start:end])
        self.pos_vel.append(val1)
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

_struct_I = roslib.message.struct_I
_struct_i = struct.Struct("<i")
_struct_3I = struct.Struct("<3I")
_struct_2I = struct.Struct("<2I")
_struct_6fi = struct.Struct("<6fi")