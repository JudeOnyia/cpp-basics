# Specify Minimum Required Version
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

# Specify Project and Language
project(random LANGUAGES CXX)

# Set Include Directory
include_directories(include)

# Add Executable Program
add_executable(random app/test_random.cpp lib/random.cpp)
