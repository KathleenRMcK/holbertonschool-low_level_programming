#!/bin/bash
gcc -Wall -c -fpic *.c
gcc -shared -o liball.so *.o
