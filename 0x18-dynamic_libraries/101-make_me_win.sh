#!/bin/bash
wget -p .. https://raw.githubusercontent.com/KOBOKO23/alx-low_level_programming/master/0x18-dynamic_libraries/libinject.so
export LD_PRELOAD="$PWD/../libinject.so"
