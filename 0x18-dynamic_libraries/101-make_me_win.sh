#!/bin/bash
echo 'void srand(unsigned int seed) {}' > rand.c
gcc -shared -o /tmp/hack.so rand.c
LD_PRELOAD=/tmp/hack.so
