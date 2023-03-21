#!/bin/bash
gcc *.c -Wall -Werror -c -fPIC
gcc *.o -shared -o -liball.so
