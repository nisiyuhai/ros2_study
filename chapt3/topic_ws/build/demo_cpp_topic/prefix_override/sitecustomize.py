import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/zzs/chapt3/topic_ws/install/demo_cpp_topic'
