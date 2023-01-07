#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89
ar -rc liball.a *.o
ranlib liball.a
