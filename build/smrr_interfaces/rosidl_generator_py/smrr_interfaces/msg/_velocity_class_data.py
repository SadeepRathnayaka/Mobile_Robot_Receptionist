# generated from rosidl_generator_py/resource/_idl.py.em
# with input from smrr_interfaces:msg/VelocityClassData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'x_velocities'
# Member 'y_velocities'
# Member 'x_positions'
# Member 'y_positions'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VelocityClassData(type):
    """Metaclass of message 'VelocityClassData'."""

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
                'smrr_interfaces.msg.VelocityClassData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__velocity_class_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__velocity_class_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__velocity_class_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__velocity_class_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__velocity_class_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VelocityClassData(metaclass=Metaclass_VelocityClassData):
    """Message class 'VelocityClassData'."""

    __slots__ = [
        '_class_ids',
        '_x_velocities',
        '_y_velocities',
        '_x_positions',
        '_y_positions',
    ]

    _fields_and_field_types = {
        'class_ids': 'sequence<string>',
        'x_velocities': 'sequence<float>',
        'y_velocities': 'sequence<float>',
        'x_positions': 'sequence<float>',
        'y_positions': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.class_ids = kwargs.get('class_ids', [])
        self.x_velocities = array.array('f', kwargs.get('x_velocities', []))
        self.y_velocities = array.array('f', kwargs.get('y_velocities', []))
        self.x_positions = array.array('f', kwargs.get('x_positions', []))
        self.y_positions = array.array('f', kwargs.get('y_positions', []))

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
        if self.class_ids != other.class_ids:
            return False
        if self.x_velocities != other.x_velocities:
            return False
        if self.y_velocities != other.y_velocities:
            return False
        if self.x_positions != other.x_positions:
            return False
        if self.y_positions != other.y_positions:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def class_ids(self):
        """Message field 'class_ids'."""
        return self._class_ids

    @class_ids.setter
    def class_ids(self, value):
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
                "The 'class_ids' field must be a set or sequence and each value of type 'str'"
        self._class_ids = value

    @builtins.property
    def x_velocities(self):
        """Message field 'x_velocities'."""
        return self._x_velocities

    @x_velocities.setter
    def x_velocities(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'x_velocities' array.array() must have the type code of 'f'"
            self._x_velocities = value
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
                "The 'x_velocities' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._x_velocities = array.array('f', value)

    @builtins.property
    def y_velocities(self):
        """Message field 'y_velocities'."""
        return self._y_velocities

    @y_velocities.setter
    def y_velocities(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'y_velocities' array.array() must have the type code of 'f'"
            self._y_velocities = value
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
                "The 'y_velocities' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._y_velocities = array.array('f', value)

    @builtins.property
    def x_positions(self):
        """Message field 'x_positions'."""
        return self._x_positions

    @x_positions.setter
    def x_positions(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'x_positions' array.array() must have the type code of 'f'"
            self._x_positions = value
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
                "The 'x_positions' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._x_positions = array.array('f', value)

    @builtins.property
    def y_positions(self):
        """Message field 'y_positions'."""
        return self._y_positions

    @y_positions.setter
    def y_positions(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'y_positions' array.array() must have the type code of 'f'"
            self._y_positions = value
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
                "The 'y_positions' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._y_positions = array.array('f', value)
