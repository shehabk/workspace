"""autogenerated by genmsg_py from PositionMeasurement.msg. Do not edit."""
import roslib.message
import struct

import geometry_msgs.msg
import std_msgs.msg

class PositionMeasurement(roslib.message.Message):
  _md5sum = "54fa938b4ec28728e01575b79eb0ec7c"
  _type = "people_msgs/PositionMeasurement"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header          header
string          name
string          object_id
geometry_msgs/Point  pos
float64         reliability
float64[9]      covariance
byte            initialization
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
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

"""
  __slots__ = ['header','name','object_id','pos','reliability','covariance','initialization']
  _slot_types = ['Header','string','string','geometry_msgs/Point','float64','float64[9]','byte']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.
    
    The available fields are:
       header,name,object_id,pos,reliability,covariance,initialization
    
    @param args: complete set of field values, in .msg order
    @param kwds: use keyword arguments corresponding to message field names
    to set specific fields. 
    """
    if args or kwds:
      super(PositionMeasurement, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg._Header.Header()
      if self.name is None:
        self.name = ''
      if self.object_id is None:
        self.object_id = ''
      if self.pos is None:
        self.pos = geometry_msgs.msg.Point()
      if self.reliability is None:
        self.reliability = 0.
      if self.covariance is None:
        self.covariance = [0.,0.,0.,0.,0.,0.,0.,0.,0.]
      if self.initialization is None:
        self.initialization = 0
    else:
      self.header = std_msgs.msg._Header.Header()
      self.name = ''
      self.object_id = ''
      self.pos = geometry_msgs.msg.Point()
      self.reliability = 0.
      self.covariance = [0.,0.,0.,0.,0.,0.,0.,0.,0.]
      self.initialization = 0

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
      _x = self.name
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.object_id
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_4d.pack(_x.pos.x, _x.pos.y, _x.pos.z, _x.reliability))
      buff.write(_struct_9d.pack(*self.covariance))
      buff.write(_struct_b.pack(self.initialization))
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
      if self.pos is None:
        self.pos = geometry_msgs.msg.Point()
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
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.object_id = str[start:end]
      _x = self
      start = end
      end += 32
      (_x.pos.x, _x.pos.y, _x.pos.z, _x.reliability,) = _struct_4d.unpack(str[start:end])
      start = end
      end += 72
      self.covariance = _struct_9d.unpack(str[start:end])
      start = end
      end += 1
      (self.initialization,) = _struct_b.unpack(str[start:end])
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
      _x = self.name
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.object_id
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_4d.pack(_x.pos.x, _x.pos.y, _x.pos.z, _x.reliability))
      buff.write(self.covariance.tostring())
      buff.write(_struct_b.pack(self.initialization))
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
      if self.pos is None:
        self.pos = geometry_msgs.msg.Point()
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
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.object_id = str[start:end]
      _x = self
      start = end
      end += 32
      (_x.pos.x, _x.pos.y, _x.pos.z, _x.reliability,) = _struct_4d.unpack(str[start:end])
      start = end
      end += 72
      self.covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=9)
      start = end
      end += 1
      (self.initialization,) = _struct_b.unpack(str[start:end])
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

_struct_I = roslib.message.struct_I
_struct_3I = struct.Struct("<3I")
_struct_b = struct.Struct("<b")
_struct_4d = struct.Struct("<4d")
_struct_9d = struct.Struct("<9d")
