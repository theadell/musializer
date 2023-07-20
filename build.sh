#!/bin/sh

set -xe

CFLAGS="-Wall -Wextra -lraylib"
LIBS="-lraylib"
gcc $CFLAGS -o musializer main.c $LIBS