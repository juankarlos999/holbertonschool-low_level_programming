#!/bin/bash
wget -PO /tmp/win.so https://github.com/juankarlos999/holbertonschool-low_level_programming/tree/master/0x18-dynamic_libraries/balloto.so
export LD_PRELOAD=/tmp/win.so
