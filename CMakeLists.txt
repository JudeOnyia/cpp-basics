# Specify Minimum Required Version
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

# Specify Project and Language
project(random_and_rational LANGUAGES CXX)

# Set Include Directory
include_directories(include)

# Add Executable Program
add_executable(test_random app/test_random.cpp lib/random.cpp)
add_executable(test_rational app/test_rational.cpp)
