import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/zzs/chapt2/chapt2_ws/install/demo_python_pkg'
