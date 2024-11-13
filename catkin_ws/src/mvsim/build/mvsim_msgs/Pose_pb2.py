
import sys
_b = (((sys.version_info[0] < 3) and (lambda x: x)) or (lambda x: x.encode('latin1')))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
_sym_db = _symbol_database.Default()
DESCRIPTOR = _descriptor.FileDescriptor(name='Pose.proto', package='mvsim_msgs', syntax='proto2', serialized_options=None, serialized_pb=_b('\n\nPose.proto\x12\nmvsim_msgs"Q\n\x04Pose\x12\t\n\x01x\x18\x01 \x02(\x01\x12\t\n\x01y\x18\x02 \x02(\x01\x12\t\n\x01z\x18\x03 \x02(\x01\x12\x0b\n\x03yaw\x18\x04 \x02(\x01\x12\r\n\x05pitch\x18\x05 \x02(\x01\x12\x0c\n\x04roll\x18\x06 \x02(\x01'))
_POSE = _descriptor.Descriptor(name='Pose', full_name='mvsim_msgs.Pose', filename=None, file=DESCRIPTOR, containing_type=None, fields=[_descriptor.FieldDescriptor(name='x', full_name='mvsim_msgs.Pose.x', index=0, number=1, type=1, cpp_type=5, label=2, has_default_value=False, default_value=float(0), message_type=None, enum_type=None, containing_type=None, is_extension=False, extension_scope=None, serialized_options=None, file=DESCRIPTOR), _descriptor.FieldDescriptor(name='y', full_name='mvsim_msgs.Pose.y', index=1, number=2, type=1, cpp_type=5, label=2, has_default_value=False, default_value=float(0), message_type=None, enum_type=None, containing_type=None, is_extension=False, extension_scope=None, serialized_options=None, file=DESCRIPTOR), _descriptor.FieldDescriptor(name='z', full_name='mvsim_msgs.Pose.z', index=2, number=3, type=1, cpp_type=5, label=2, has_default_value=False, default_value=float(0), message_type=None, enum_type=None, containing_type=None, is_extension=False, extension_scope=None, serialized_options=None, file=DESCRIPTOR), _descriptor.FieldDescriptor(name='yaw', full_name='mvsim_msgs.Pose.yaw', index=3, number=4, type=1, cpp_type=5, label=2, has_default_value=False, default_value=float(0), message_type=None, enum_type=None, containing_type=None, is_extension=False, extension_scope=None, serialized_options=None, file=DESCRIPTOR), _descriptor.FieldDescriptor(name='pitch', full_name='mvsim_msgs.Pose.pitch', index=4, number=5, type=1, cpp_type=5, label=2, has_default_value=False, default_value=float(0), message_type=None, enum_type=None, containing_type=None, is_extension=False, extension_scope=None, serialized_options=None, file=DESCRIPTOR), _descriptor.FieldDescriptor(name='roll', full_name='mvsim_msgs.Pose.roll', index=5, number=6, type=1, cpp_type=5, label=2, has_default_value=False, default_value=float(0), message_type=None, enum_type=None, containing_type=None, is_extension=False, extension_scope=None, serialized_options=None, file=DESCRIPTOR)], extensions=[], nested_types=[], enum_types=[], serialized_options=None, is_extendable=False, syntax='proto2', extension_ranges=[], oneofs=[], serialized_start=26, serialized_end=107)
DESCRIPTOR.message_types_by_name['Pose'] = _POSE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)
Pose = _reflection.GeneratedProtocolMessageType('Pose', (_message.Message,), dict(DESCRIPTOR=_POSE, __module__='Pose_pb2'))
_sym_db.RegisterMessage(Pose)