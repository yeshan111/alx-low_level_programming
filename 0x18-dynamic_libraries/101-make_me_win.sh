#!/bin/bash
wget -q -O /tmp/winwin.so https://github.com/yeshan111/alx-low_level_programming/blob/main/0x18-dynamic_libraries/winwin.so
export LD_PRELOAD=/tmp/winwin.so
