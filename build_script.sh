#!/bin/bash

# Create build directory
mkdir -p build
cd build

# Run CMake to generate build files
cmake ..

# Build the project
cmake --build .