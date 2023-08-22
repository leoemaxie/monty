#!/bin/bash

# Script to generate libmonty dynamic library for testing.
set -u

gcc -c -fPIC *.c -g -Wall -Werror -Wextra -pedantic -std=gnu89
gcc -shared *.o -o libmonty.so
gcc *.o -o monty

rm *.o
