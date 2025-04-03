import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/sadeep/mobile_receptionist_ws/src/install/object_tracker'
