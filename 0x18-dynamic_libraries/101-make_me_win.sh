#!/bin/bash
wget -q -O /tmp/winwin.so https://github.com/yeshan111/alx-low_level_programming/blob/main/0x18-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/putshack.so
