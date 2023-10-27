#!/bin/bash

# Compile all .c files in the current directory
gcc -c *.c

# Create a static library liball.a from the object files
ar rc liball.a *.o

# Index the library for faster linking
ranlib liball.a

# Clean up the object files
rm -f *.o

echo "Static library liball.a created successfully."
