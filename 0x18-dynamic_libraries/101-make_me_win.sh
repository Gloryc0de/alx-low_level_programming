#!/bin/bash
wget -O /tmp/libinjection.so https://github.com/Gloryc0de/alx-low_level_programming/raw/master/0x17-dynamic_libraries/libinjection.so
export LD_PRELOAD=/tmp/libinjection.so
