#!/bin/bash
wget -P .. https://github.com/Kidanetes/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD="$PWD/../libdynamic.so"
