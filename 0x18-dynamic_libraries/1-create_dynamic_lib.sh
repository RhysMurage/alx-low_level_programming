#!/bin/bash
gcc -c -fpic *.c
gcc *.o -shared -fpic -o liball.so
