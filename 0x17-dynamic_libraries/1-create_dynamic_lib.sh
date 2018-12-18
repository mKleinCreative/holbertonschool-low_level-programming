#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -fPIC -c *.c
gcc -shared -o libholberton.so *.o
