#!/bin/bash

# Compile all C files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library using all of the object files
ar rcs liball.a *.o

# Clean up by removing the object files
rm -f *.o
