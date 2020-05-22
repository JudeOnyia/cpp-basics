# Specify Minimum Required Version
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

# Specify Project and Language
project(random_and_rational LANGUAGES CXX)

# Set Include Directory
include_directories(include)

# Add Executable Program
add_executable(random app/test_random_2.cpp lib/random.cpp)
add_executable(rational app/test_rational_2.cpp)
