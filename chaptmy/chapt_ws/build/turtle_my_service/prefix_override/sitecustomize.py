import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/zzs/chaptmy/chapt_ws/install/turtle_my_service'
