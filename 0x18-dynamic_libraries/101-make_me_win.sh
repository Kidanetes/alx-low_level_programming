#!/bin/bash
wget -P .. https://github.com/Kidanetes/alx-low_level_programming/raw/main/0x18-dynamic_libraries/liball.so
export LD_PRELOAD="$PWD/../liball.so"
