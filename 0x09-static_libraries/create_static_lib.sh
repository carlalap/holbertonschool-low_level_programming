#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar cr liball.a  *.o

