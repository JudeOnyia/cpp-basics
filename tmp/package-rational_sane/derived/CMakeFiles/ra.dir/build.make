# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/frodo/public/ugls_lab-4.0.70/packages/cmake-3.17.1/bin/cmake

# The command to remove a file.
RM = /home/frodo/public/ugls_lab-4.0.70/packages/cmake-3.17.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_sane/source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_sane/derived

# Include any dependencies generated for this target.
include CMakeFiles/ra.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ra.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ra.dir/flags.make

CMakeFiles/ra.dir/lib/random.cpp.o: CMakeFiles/ra.dir/flags.make
CMakeFiles/ra.dir/lib/random.cpp.o: /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_sane/source/lib/random.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_sane/derived/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ra.dir/lib/random.cpp.o"
	/home/frodo/public/ugls_lab-4.0.70/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ra.dir/lib/random.cpp.o -c /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_sane/source/lib/random.cpp

CMakeFiles/ra.dir/lib/random.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ra.dir/lib/random.cpp.i"
	/home/frodo/public/ugls_lab-4.0.70/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_sane/source/lib/random.cpp > CMakeFiles/ra.dir/lib/random.cpp.i

CMakeFiles/ra.dir/lib/random.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ra.dir/lib/random.cpp.s"
	/home/frodo/public/ugls_lab-4.0.70/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_sane/source/lib/random.cpp -o CMakeFiles/ra.dir/lib/random.cpp.s

# Object files for target ra
ra_OBJECTS = \
"CMakeFiles/ra.dir/lib/random.cpp.o"

# External object files for target ra
ra_EXTERNAL_OBJECTS =

libra.a: CMakeFiles/ra.dir/lib/random.cpp.o
libra.a: CMakeFiles/ra.dir/build.make
libra.a: CMakeFiles/ra.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_sane/derived/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libra.a"
	$(CMAKE_COMMAND) -P CMakeFiles/ra.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ra.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ra.dir/build: libra.a

.PHONY : CMakeFiles/ra.dir/build

CMakeFiles/ra.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ra.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ra.dir/clean

CMakeFiles/ra.dir/depend:
	cd /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_sane/derived && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_sane/source /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_sane/source /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_sane/derived /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_sane/derived /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_sane/derived/CMakeFiles/ra.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ra.dir/depend

