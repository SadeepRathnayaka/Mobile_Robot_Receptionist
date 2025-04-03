# generated from rosidl_generator_py/resource/_idl.py.em
# with input from smrr_interfaces:msg/Buffer.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'agent_ids'
# Member 'x_mean'
# Member 'y_mean'
# Member 'x_std_dev'
# Member 'y_std_dev'
# Member 'x_variance'
# Member 'y_variance'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Buffer(type):
    """Metaclass of message 'Buffer'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('smrr_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'smrr_interfaces.msg.Buffer')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__buffer
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__buffer
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__buffer
            cls._TYPE_SUPPORT = module.type_support_msg__msg__buffer
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__buffer

            from smrr_interfaces.msg import DataElementFloat
            if DataElementFloat.__class__._TYPE_SUPPORT is None:
                DataElementFloat.__class__.__import_type_support__()

            from smrr_interfaces.msg import DataElementString
            if DataElementString.__class__._TYPE_SUPPORT is None:
                DataElementString.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Buffer(metaclass=Metaclass_Buffer):
    """Message class 'Buffer'."""

    __slots__ = [
        '_agent_ids',
        '_agent_count',
        '_x_velocities',
        '_y_velocities',
        '_class_ids',
        '_x_positions',
        '_y_positions',
        '_x_mean',
        '_y_mean',
        '_x_std_dev',
        '_y_std_dev',
        '_x_variance',
        '_y_variance',
        '_majority_class_id',
    ]

    _fields_and_field_types = {
        'agent_ids': 'sequence<int32>',
        'agent_count': 'int16',
        'x_velocities': 'sequence<smrr_interfaces/DataElementFloat>',
        'y_velocities': 'sequence<smrr_interfaces/DataElementFloat>',
        'class_ids': 'sequence<smrr_interfaces/DataElementString>',
        'x_positions': 'sequence<smrr_interfaces/DataElementFloat>',
        'y_positions': 'sequence<smrr_interfaces/DataElementFloat>',
        'x_mean': 'sequence<float>',
        'y_mean': 'sequence<float>',
        'x_std_dev': 'sequence<float>',
        'y_std_dev': 'sequence<float>',
        'x_variance': 'sequence<float>',
        'y_variance': 'sequence<float>',
        'majority_class_id': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['smrr_interfaces', 'msg'], 'DataElementFloat')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['smrr_interfaces', 'msg'], 'DataElementFloat')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['smrr_interfaces', 'msg'], 'DataElementString')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['smrr_interfaces', 'msg'], 'DataElementFloat')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['smrr_interfaces', 'msg'], 'DataElementFloat')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.agent_ids = array.array('i', kwargs.get('agent_ids', []))
        self.agent_count = kwargs.get('agent_count', int())
        self.x_velocities = kwargs.get('x_velocities', [])
        self.y_velocities = kwargs.get('y_velocities', [])
        self.class_ids = kwargs.get('class_ids', [])
        self.x_positions = kwargs.get('x_positions', [])
        self.y_positions = kwargs.get('y_positions', [])
        self.x_mean = array.array('f', kwargs.get('x_mean', []))
        self.y_mean = array.array('f', kwargs.get('y_mean', []))
        self.x_std_dev = array.array('f', kwargs.get('x_std_dev', []))
        self.y_std_dev = array.array('f', kwargs.get('y_std_dev', []))
        self.x_variance = array.array('f', kwargs.get('x_variance', []))
        self.y_variance = array.array('f', kwargs.get('y_variance', []))
        self.majority_class_id = kwargs.get('majority_class_id', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.agent_ids != other.agent_ids:
            return False
        if self.agent_count != other.agent_count:
            return False
        if self.x_velocities != other.x_velocities:
            return False
        if self.y_velocities != other.y_velocities:
            return False
        if self.class_ids != other.class_ids:
            return False
        if self.x_positions != other.x_positions:
            return False
        if self.y_positions != other.y_positions:
            return False
        if self.x_mean != other.x_mean:
            return False
        if self.y_mean != other.y_mean:
            return False
        if self.x_std_dev != other.x_std_dev:
            return False
        if self.y_std_dev != other.y_std_dev:
            return False
        if self.x_variance != other.x_variance:
            return False
        if self.y_variance != other.y_variance:
            return False
        if self.majority_class_id != other.majority_class_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def agent_ids(self):
        """Message field 'agent_ids'."""
        return self._agent_ids

    @agent_ids.setter
    def agent_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'agent_ids' array.array() must have the type code of 'i'"
            self._agent_ids = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'agent_ids' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._agent_ids = array.array('i', value)

    @builtins.property
    def agent_count(self):
        """Message field 'agent_count'."""
        return self._agent_count

    @agent_count.setter
    def agent_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'agent_count' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'agent_count' field must be an integer in [-32768, 32767]"
        self._agent_count = value

    @builtins.property
    def x_velocities(self):
        """Message field 'x_velocities'."""
        return self._x_velocities

    @x_velocities.setter
    def x_velocities(self, value):
        if __debug__:
            from smrr_interfaces.msg import DataElementFloat
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, DataElementFloat) for v in value) and
                 True), \
                "The 'x_velocities' field must be a set or sequence and each value of type 'DataElementFloat'"
        self._x_velocities = value

    @builtins.property
    def y_velocities(self):
        """Message field 'y_velocities'."""
        return self._y_velocities

    @y_velocities.setter
    def y_velocities(self, value):
        if __debug__:
            from smrr_interfaces.msg import DataElementFloat
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, DataElementFloat) for v in value) and
                 True), \
                "The 'y_velocities' field must be a set or sequence and each value of type 'DataElementFloat'"
        self._y_velocities = value

    @builtins.property
    def class_ids(self):
        """Message field 'class_ids'."""
        return self._class_ids

    @class_ids.setter
    def class_ids(self, value):
        if __debug__:
            from smrr_interfaces.msg import DataElementString
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, DataElementString) for v in value) and
                 True), \
                "The 'class_ids' field must be a set or sequence and each value of type 'DataElementString'"
        self._class_ids = value

    @builtins.property
    def x_positions(self):
        """Message field 'x_positions'."""
        return self._x_positions

    @x_positions.setter
    def x_positions(self, value):
        if __debug__:
            from smrr_interfaces.msg import DataElementFloat
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, DataElementFloat) for v in value) and
                 True), \
                "The 'x_positions' field must be a set or sequence and each value of type 'DataElementFloat'"
        self._x_positions = value

    @builtins.property
    def y_positions(self):
        """Message field 'y_positions'."""
        return self._y_positions

    @y_positions.setter
    def y_positions(self, value):
        if __debug__:
            from smrr_interfaces.msg import DataElementFloat
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, DataElementFloat) for v in value) and
                 True), \
                "The 'y_positions' field must be a set or sequence and each value of type 'DataElementFloat'"
        self._y_positions = value

    @builtins.property
    def x_mean(self):
        """Message field 'x_mean'."""
        return self._x_mean

    @x_mean.setter
    def x_mean(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'x_mean' array.array() must have the type code of 'f'"
            self._x_mean = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'x_mean' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._x_mean = array.array('f', value)

    @builtins.property
    def y_mean(self):
        """Message field 'y_mean'."""
        return self._y_mean

    @y_mean.setter
    def y_mean(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'y_mean' array.array() must have the type code of 'f'"
            self._y_mean = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'y_mean' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._y_mean = array.array('f', value)

    @builtins.property
    def x_std_dev(self):
        """Message field 'x_std_dev'."""
        return self._x_std_dev

    @x_std_dev.setter
    def x_std_dev(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'x_std_dev' array.array() must have the type code of 'f'"
            self._x_std_dev = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'x_std_dev' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._x_std_dev = array.array('f', value)

    @builtins.property
    def y_std_dev(self):
        """Message field 'y_std_dev'."""
        return self._y_std_dev

    @y_std_dev.setter
    def y_std_dev(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'y_std_dev' array.array() must have the type code of 'f'"
            self._y_std_dev = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'y_std_dev' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._y_std_dev = array.array('f', value)

    @builtins.property
    def x_variance(self):
        """Message field 'x_variance'."""
        return self._x_variance

    @x_variance.setter
    def x_variance(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'x_variance' array.array() must have the type code of 'f'"
            self._x_variance = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'x_variance' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._x_variance = array.array('f', value)

    @builtins.property
    def y_variance(self):
        """Message field 'y_variance'."""
        return self._y_variance

    @y_variance.setter
    def y_variance(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'y_variance' array.array() must have the type code of 'f'"
            self._y_variance = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'y_variance' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._y_variance = array.array('f', value)

    @builtins.property
    def majority_class_id(self):
        """Message field 'majority_class_id'."""
        return self._majority_class_id

    @majority_class_id.setter
    def majority_class_id(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'majority_class_id' field must be a set or sequence and each value of type 'str'"
        self._majority_class_id = value
