#!/bin/bash
wget -P .. https://github.com/Kidanetes/alx-low_level_programming/blob/main/0x18-dynamic_libraries/100-operations.so
export LD_PRELOAD="$PWD/../100-operations.so"
