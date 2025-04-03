# generated from rosidl_generator_py/resource/_idl.py.em
# with input from smrr_interfaces:action/NavigateToGoal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavigateToGoal_Goal(type):
    """Metaclass of message 'NavigateToGoal_Goal'."""

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
                'smrr_interfaces.action.NavigateToGoal_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate_to_goal__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate_to_goal__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate_to_goal__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate_to_goal__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate_to_goal__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigateToGoal_Goal(metaclass=Metaclass_NavigateToGoal_Goal):
    """Message class 'NavigateToGoal_Goal'."""

    __slots__ = [
        '_goal_x',
        '_goal_y',
    ]

    _fields_and_field_types = {
        'goal_x': 'float',
        'goal_y': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.goal_x = kwargs.get('goal_x', float())
        self.goal_y = kwargs.get('goal_y', float())

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
        if self.goal_x != other.goal_x:
            return False
        if self.goal_y != other.goal_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_x(self):
        """Message field 'goal_x'."""
        return self._goal_x

    @goal_x.setter
    def goal_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'goal_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._goal_x = value

    @builtins.property
    def goal_y(self):
        """Message field 'goal_y'."""
        return self._goal_y

    @goal_y.setter
    def goal_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'goal_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._goal_y = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavigateToGoal_Result(type):
    """Metaclass of message 'NavigateToGoal_Result'."""

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
                'smrr_interfaces.action.NavigateToGoal_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate_to_goal__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate_to_goal__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate_to_goal__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate_to_goal__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate_to_goal__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigateToGoal_Result(metaclass=Metaclass_NavigateToGoal_Result):
    """Message class 'NavigateToGoal_Result'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_NavigateToGoal_Feedback(type):
    """Metaclass of message 'NavigateToGoal_Feedback'."""

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
                'smrr_interfaces.action.NavigateToGoal_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate_to_goal__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate_to_goal__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate_to_goal__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate_to_goal__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate_to_goal__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigateToGoal_Feedback(metaclass=Metaclass_NavigateToGoal_Feedback):
    """Message class 'NavigateToGoal_Feedback'."""

    __slots__ = [
        '_distance_to_goal',
    ]

    _fields_and_field_types = {
        'distance_to_goal': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.distance_to_goal = kwargs.get('distance_to_goal', float())

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
        if self.distance_to_goal != other.distance_to_goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def distance_to_goal(self):
        """Message field 'distance_to_goal'."""
        return self._distance_to_goal

    @distance_to_goal.setter
    def distance_to_goal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_goal' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_to_goal' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_to_goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavigateToGoal_SendGoal_Request(type):
    """Metaclass of message 'NavigateToGoal_SendGoal_Request'."""

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
                'smrr_interfaces.action.NavigateToGoal_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate_to_goal__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate_to_goal__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate_to_goal__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate_to_goal__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate_to_goal__send_goal__request

            from smrr_interfaces.action import NavigateToGoal
            if NavigateToGoal.Goal.__class__._TYPE_SUPPORT is None:
                NavigateToGoal.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigateToGoal_SendGoal_Request(metaclass=Metaclass_NavigateToGoal_SendGoal_Request):
    """Message class 'NavigateToGoal_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'smrr_interfaces/NavigateToGoal_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['smrr_interfaces', 'action'], 'NavigateToGoal_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from smrr_interfaces.action._navigate_to_goal import NavigateToGoal_Goal
        self.goal = kwargs.get('goal', NavigateToGoal_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from smrr_interfaces.action._navigate_to_goal import NavigateToGoal_Goal
            assert \
                isinstance(value, NavigateToGoal_Goal), \
                "The 'goal' field must be a sub message of type 'NavigateToGoal_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavigateToGoal_SendGoal_Response(type):
    """Metaclass of message 'NavigateToGoal_SendGoal_Response'."""

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
                'smrr_interfaces.action.NavigateToGoal_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate_to_goal__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate_to_goal__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate_to_goal__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate_to_goal__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate_to_goal__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigateToGoal_SendGoal_Response(metaclass=Metaclass_NavigateToGoal_SendGoal_Response):
    """Message class 'NavigateToGoal_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_NavigateToGoal_SendGoal(type):
    """Metaclass of service 'NavigateToGoal_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('smrr_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'smrr_interfaces.action.NavigateToGoal_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__navigate_to_goal__send_goal

            from smrr_interfaces.action import _navigate_to_goal
            if _navigate_to_goal.Metaclass_NavigateToGoal_SendGoal_Request._TYPE_SUPPORT is None:
                _navigate_to_goal.Metaclass_NavigateToGoal_SendGoal_Request.__import_type_support__()
            if _navigate_to_goal.Metaclass_NavigateToGoal_SendGoal_Response._TYPE_SUPPORT is None:
                _navigate_to_goal.Metaclass_NavigateToGoal_SendGoal_Response.__import_type_support__()


class NavigateToGoal_SendGoal(metaclass=Metaclass_NavigateToGoal_SendGoal):
    from smrr_interfaces.action._navigate_to_goal import NavigateToGoal_SendGoal_Request as Request
    from smrr_interfaces.action._navigate_to_goal import NavigateToGoal_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavigateToGoal_GetResult_Request(type):
    """Metaclass of message 'NavigateToGoal_GetResult_Request'."""

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
                'smrr_interfaces.action.NavigateToGoal_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate_to_goal__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate_to_goal__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate_to_goal__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate_to_goal__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate_to_goal__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigateToGoal_GetResult_Request(metaclass=Metaclass_NavigateToGoal_GetResult_Request):
    """Message class 'NavigateToGoal_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavigateToGoal_GetResult_Response(type):
    """Metaclass of message 'NavigateToGoal_GetResult_Response'."""

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
                'smrr_interfaces.action.NavigateToGoal_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate_to_goal__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate_to_goal__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate_to_goal__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate_to_goal__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate_to_goal__get_result__response

            from smrr_interfaces.action import NavigateToGoal
            if NavigateToGoal.Result.__class__._TYPE_SUPPORT is None:
                NavigateToGoal.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigateToGoal_GetResult_Response(metaclass=Metaclass_NavigateToGoal_GetResult_Response):
    """Message class 'NavigateToGoal_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'smrr_interfaces/NavigateToGoal_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['smrr_interfaces', 'action'], 'NavigateToGoal_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from smrr_interfaces.action._navigate_to_goal import NavigateToGoal_Result
        self.result = kwargs.get('result', NavigateToGoal_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from smrr_interfaces.action._navigate_to_goal import NavigateToGoal_Result
            assert \
                isinstance(value, NavigateToGoal_Result), \
                "The 'result' field must be a sub message of type 'NavigateToGoal_Result'"
        self._result = value


class Metaclass_NavigateToGoal_GetResult(type):
    """Metaclass of service 'NavigateToGoal_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('smrr_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'smrr_interfaces.action.NavigateToGoal_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__navigate_to_goal__get_result

            from smrr_interfaces.action import _navigate_to_goal
            if _navigate_to_goal.Metaclass_NavigateToGoal_GetResult_Request._TYPE_SUPPORT is None:
                _navigate_to_goal.Metaclass_NavigateToGoal_GetResult_Request.__import_type_support__()
            if _navigate_to_goal.Metaclass_NavigateToGoal_GetResult_Response._TYPE_SUPPORT is None:
                _navigate_to_goal.Metaclass_NavigateToGoal_GetResult_Response.__import_type_support__()


class NavigateToGoal_GetResult(metaclass=Metaclass_NavigateToGoal_GetResult):
    from smrr_interfaces.action._navigate_to_goal import NavigateToGoal_GetResult_Request as Request
    from smrr_interfaces.action._navigate_to_goal import NavigateToGoal_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavigateToGoal_FeedbackMessage(type):
    """Metaclass of message 'NavigateToGoal_FeedbackMessage'."""

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
                'smrr_interfaces.action.NavigateToGoal_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate_to_goal__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate_to_goal__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate_to_goal__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate_to_goal__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate_to_goal__feedback_message

            from smrr_interfaces.action import NavigateToGoal
            if NavigateToGoal.Feedback.__class__._TYPE_SUPPORT is None:
                NavigateToGoal.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigateToGoal_FeedbackMessage(metaclass=Metaclass_NavigateToGoal_FeedbackMessage):
    """Message class 'NavigateToGoal_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'smrr_interfaces/NavigateToGoal_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['smrr_interfaces', 'action'], 'NavigateToGoal_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from smrr_interfaces.action._navigate_to_goal import NavigateToGoal_Feedback
        self.feedback = kwargs.get('feedback', NavigateToGoal_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from smrr_interfaces.action._navigate_to_goal import NavigateToGoal_Feedback
            assert \
                isinstance(value, NavigateToGoal_Feedback), \
                "The 'feedback' field must be a sub message of type 'NavigateToGoal_Feedback'"
        self._feedback = value


class Metaclass_NavigateToGoal(type):
    """Metaclass of action 'NavigateToGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('smrr_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'smrr_interfaces.action.NavigateToGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__navigate_to_goal

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from smrr_interfaces.action import _navigate_to_goal
            if _navigate_to_goal.Metaclass_NavigateToGoal_SendGoal._TYPE_SUPPORT is None:
                _navigate_to_goal.Metaclass_NavigateToGoal_SendGoal.__import_type_support__()
            if _navigate_to_goal.Metaclass_NavigateToGoal_GetResult._TYPE_SUPPORT is None:
                _navigate_to_goal.Metaclass_NavigateToGoal_GetResult.__import_type_support__()
            if _navigate_to_goal.Metaclass_NavigateToGoal_FeedbackMessage._TYPE_SUPPORT is None:
                _navigate_to_goal.Metaclass_NavigateToGoal_FeedbackMessage.__import_type_support__()


class NavigateToGoal(metaclass=Metaclass_NavigateToGoal):

    # The goal message defined in the action definition.
    from smrr_interfaces.action._navigate_to_goal import NavigateToGoal_Goal as Goal
    # The result message defined in the action definition.
    from smrr_interfaces.action._navigate_to_goal import NavigateToGoal_Result as Result
    # The feedback message defined in the action definition.
    from smrr_interfaces.action._navigate_to_goal import NavigateToGoal_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from smrr_interfaces.action._navigate_to_goal import NavigateToGoal_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from smrr_interfaces.action._navigate_to_goal import NavigateToGoal_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from smrr_interfaces.action._navigate_to_goal import NavigateToGoal_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
