#!/bin/bash
gcc *.c -c -Wall -Werror -fPIC
gcc *.o -shared -o liball.so
