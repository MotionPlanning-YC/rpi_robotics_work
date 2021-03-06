"""autogenerated by genpy from schunk_api/PositionAPICoordSpaceRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class PositionAPICoordSpaceRequest(genpy.Message):
  _md5sum = "e03157376959499c94bb7df7a77bf0e0"
  _type = "schunk_api/PositionAPICoordSpaceRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float64 xCoord
float64 yCoord
float64 zCoord
float64 quatX
float64 quatY
float64 quatZ
float64 quatW

"""
  __slots__ = ['xCoord','yCoord','zCoord','quatX','quatY','quatZ','quatW']
  _slot_types = ['float64','float64','float64','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       xCoord,yCoord,zCoord,quatX,quatY,quatZ,quatW

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PositionAPICoordSpaceRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.xCoord is None:
        self.xCoord = 0.
      if self.yCoord is None:
        self.yCoord = 0.
      if self.zCoord is None:
        self.zCoord = 0.
      if self.quatX is None:
        self.quatX = 0.
      if self.quatY is None:
        self.quatY = 0.
      if self.quatZ is None:
        self.quatZ = 0.
      if self.quatW is None:
        self.quatW = 0.
    else:
      self.xCoord = 0.
      self.yCoord = 0.
      self.zCoord = 0.
      self.quatX = 0.
      self.quatY = 0.
      self.quatZ = 0.
      self.quatW = 0.

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
      buff.write(_struct_7d.pack(_x.xCoord, _x.yCoord, _x.zCoord, _x.quatX, _x.quatY, _x.quatZ, _x.quatW))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 56
      (_x.xCoord, _x.yCoord, _x.zCoord, _x.quatX, _x.quatY, _x.quatZ, _x.quatW,) = _struct_7d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_7d.pack(_x.xCoord, _x.yCoord, _x.zCoord, _x.quatX, _x.quatY, _x.quatZ, _x.quatW))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 56
      (_x.xCoord, _x.yCoord, _x.zCoord, _x.quatX, _x.quatY, _x.quatZ, _x.quatW,) = _struct_7d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_7d = struct.Struct("<7d")
"""autogenerated by genpy from schunk_api/PositionAPICoordSpaceResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class PositionAPICoordSpaceResponse(genpy.Message):
  _md5sum = "4107476a6271fc2684d94be17d33f854"
  _type = "schunk_api/PositionAPICoordSpaceResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int64 status


"""
  __slots__ = ['status']
  _slot_types = ['int64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       status

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PositionAPICoordSpaceResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.status is None:
        self.status = 0
    else:
      self.status = 0

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
      buff.write(_struct_q.pack(self.status))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 8
      (self.status,) = _struct_q.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_struct_q.pack(self.status))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 8
      (self.status,) = _struct_q.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_q = struct.Struct("<q")
class PositionAPICoordSpace(object):
  _type          = 'schunk_api/PositionAPICoordSpace'
  _md5sum = 'f3eb575d9518a9ccc09a6926e4a48227'
  _request_class  = PositionAPICoordSpaceRequest
  _response_class = PositionAPICoordSpaceResponse
