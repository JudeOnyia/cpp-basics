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
CMAKE_SOURCE_DIR = /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_orig/source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_orig/derived

# Include any dependencies generated for this target.
include CMakeFiles/rational.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rational.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rational.dir/flags.make

CMakeFiles/rational.dir/app/test_rational.cpp.o: CMakeFiles/rational.dir/flags.make
CMakeFiles/rational.dir/app/test_rational.cpp.o: /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_orig/source/app/test_rational.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_orig/derived/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rational.dir/app/test_rational.cpp.o"
	/home/frodo/public/ugls_lab-4.0.70/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rational.dir/app/test_rational.cpp.o -c /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_orig/source/app/test_rational.cpp

CMakeFiles/rational.dir/app/test_rational.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rational.dir/app/test_rational.cpp.i"
	/home/frodo/public/ugls_lab-4.0.70/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_orig/source/app/test_rational.cpp > CMakeFiles/rational.dir/app/test_rational.cpp.i

CMakeFiles/rational.dir/app/test_rational.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rational.dir/app/test_rational.cpp.s"
	/home/frodo/public/ugls_lab-4.0.70/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_orig/source/app/test_rational.cpp -o CMakeFiles/rational.dir/app/test_rational.cpp.s

# Object files for target rational
rational_OBJECTS = \
"CMakeFiles/rational.dir/app/test_rational.cpp.o"

# External object files for target rational
rational_EXTERNAL_OBJECTS =

rational: CMakeFiles/rational.dir/app/test_rational.cpp.o
rational: CMakeFiles/rational.dir/build.make
rational: CMakeFiles/rational.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_orig/derived/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable rational"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rational.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rational.dir/build: rational

.PHONY : CMakeFiles/rational.dir/build

CMakeFiles/rational.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rational.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rational.dir/clean

CMakeFiles/rational.dir/depend:
	cd /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_orig/derived && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_orig/source /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_orig/source /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_orig/derived /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_orig/derived /home/judeonyia/Documents/ECE596C_Assignments/ECE596C_Assgn_1/cpp_basics-JudeOnyia/tmp/package-rational_orig/derived/CMakeFiles/rational.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rational.dir/depend
