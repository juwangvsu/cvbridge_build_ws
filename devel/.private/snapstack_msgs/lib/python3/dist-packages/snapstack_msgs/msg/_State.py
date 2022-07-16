# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from snapstack_msgs/State.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import geometry_msgs.msg
import std_msgs.msg

class State(genpy.Message):
  _md5sum = "d541639d4febb63bce9ed67bfaf4f2ba"
  _type = "snapstack_msgs/State"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """Header header
time state_stamp
geometry_msgs/Vector3 pos
geometry_msgs/Vector3 vel
geometry_msgs/Quaternion quat
geometry_msgs/Vector3 w
geometry_msgs/Vector3 abias
geometry_msgs/Vector3 gbias

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

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
"""
  __slots__ = ['header','state_stamp','pos','vel','quat','w','abias','gbias']
  _slot_types = ['std_msgs/Header','time','geometry_msgs/Vector3','geometry_msgs/Vector3','geometry_msgs/Quaternion','geometry_msgs/Vector3','geometry_msgs/Vector3','geometry_msgs/Vector3']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,state_stamp,pos,vel,quat,w,abias,gbias

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(State, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.state_stamp is None:
        self.state_stamp = genpy.Time()
      if self.pos is None:
        self.pos = geometry_msgs.msg.Vector3()
      if self.vel is None:
        self.vel = geometry_msgs.msg.Vector3()
      if self.quat is None:
        self.quat = geometry_msgs.msg.Quaternion()
      if self.w is None:
        self.w = geometry_msgs.msg.Vector3()
      if self.abias is None:
        self.abias = geometry_msgs.msg.Vector3()
      if self.gbias is None:
        self.gbias = geometry_msgs.msg.Vector3()
    else:
      self.header = std_msgs.msg.Header()
      self.state_stamp = genpy.Time()
      self.pos = geometry_msgs.msg.Vector3()
      self.vel = geometry_msgs.msg.Vector3()
      self.quat = geometry_msgs.msg.Quaternion()
      self.w = geometry_msgs.msg.Vector3()
      self.abias = geometry_msgs.msg.Vector3()
      self.gbias = geometry_msgs.msg.Vector3()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I19d().pack(_x.state_stamp.secs, _x.state_stamp.nsecs, _x.pos.x, _x.pos.y, _x.pos.z, _x.vel.x, _x.vel.y, _x.vel.z, _x.quat.x, _x.quat.y, _x.quat.z, _x.quat.w, _x.w.x, _x.w.y, _x.w.z, _x.abias.x, _x.abias.y, _x.abias.z, _x.gbias.x, _x.gbias.y, _x.gbias.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.state_stamp is None:
        self.state_stamp = genpy.Time()
      if self.pos is None:
        self.pos = geometry_msgs.msg.Vector3()
      if self.vel is None:
        self.vel = geometry_msgs.msg.Vector3()
      if self.quat is None:
        self.quat = geometry_msgs.msg.Quaternion()
      if self.w is None:
        self.w = geometry_msgs.msg.Vector3()
      if self.abias is None:
        self.abias = geometry_msgs.msg.Vector3()
      if self.gbias is None:
        self.gbias = geometry_msgs.msg.Vector3()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 160
      (_x.state_stamp.secs, _x.state_stamp.nsecs, _x.pos.x, _x.pos.y, _x.pos.z, _x.vel.x, _x.vel.y, _x.vel.z, _x.quat.x, _x.quat.y, _x.quat.z, _x.quat.w, _x.w.x, _x.w.y, _x.w.z, _x.abias.x, _x.abias.y, _x.abias.z, _x.gbias.x, _x.gbias.y, _x.gbias.z,) = _get_struct_2I19d().unpack(str[start:end])
      self.state_stamp.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I19d().pack(_x.state_stamp.secs, _x.state_stamp.nsecs, _x.pos.x, _x.pos.y, _x.pos.z, _x.vel.x, _x.vel.y, _x.vel.z, _x.quat.x, _x.quat.y, _x.quat.z, _x.quat.w, _x.w.x, _x.w.y, _x.w.z, _x.abias.x, _x.abias.y, _x.abias.z, _x.gbias.x, _x.gbias.y, _x.gbias.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.state_stamp is None:
        self.state_stamp = genpy.Time()
      if self.pos is None:
        self.pos = geometry_msgs.msg.Vector3()
      if self.vel is None:
        self.vel = geometry_msgs.msg.Vector3()
      if self.quat is None:
        self.quat = geometry_msgs.msg.Quaternion()
      if self.w is None:
        self.w = geometry_msgs.msg.Vector3()
      if self.abias is None:
        self.abias = geometry_msgs.msg.Vector3()
      if self.gbias is None:
        self.gbias = geometry_msgs.msg.Vector3()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 160
      (_x.state_stamp.secs, _x.state_stamp.nsecs, _x.pos.x, _x.pos.y, _x.pos.z, _x.vel.x, _x.vel.y, _x.vel.z, _x.quat.x, _x.quat.y, _x.quat.z, _x.quat.w, _x.w.x, _x.w.y, _x.w.z, _x.abias.x, _x.abias.y, _x.abias.z, _x.gbias.x, _x.gbias.y, _x.gbias.z,) = _get_struct_2I19d().unpack(str[start:end])
      self.state_stamp.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2I19d = None
def _get_struct_2I19d():
    global _struct_2I19d
    if _struct_2I19d is None:
        _struct_2I19d = struct.Struct("<2I19d")
    return _struct_2I19d
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
