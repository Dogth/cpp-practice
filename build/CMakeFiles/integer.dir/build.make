# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dogthie/CppPractice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dogthie/CppPractice/build

# Include any dependencies generated for this target.
include CMakeFiles/integer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/integer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/integer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/integer.dir/flags.make

CMakeFiles/integer.dir/tests/integer.cc.o: CMakeFiles/integer.dir/flags.make
CMakeFiles/integer.dir/tests/integer.cc.o: /home/dogthie/CppPractice/tests/integer.cc
CMakeFiles/integer.dir/tests/integer.cc.o: CMakeFiles/integer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dogthie/CppPractice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/integer.dir/tests/integer.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/integer.dir/tests/integer.cc.o -MF CMakeFiles/integer.dir/tests/integer.cc.o.d -o CMakeFiles/integer.dir/tests/integer.cc.o -c /home/dogthie/CppPractice/tests/integer.cc

CMakeFiles/integer.dir/tests/integer.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/integer.dir/tests/integer.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dogthie/CppPractice/tests/integer.cc > CMakeFiles/integer.dir/tests/integer.cc.i

CMakeFiles/integer.dir/tests/integer.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/integer.dir/tests/integer.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dogthie/CppPractice/tests/integer.cc -o CMakeFiles/integer.dir/tests/integer.cc.s

# Object files for target integer
integer_OBJECTS = \
"CMakeFiles/integer.dir/tests/integer.cc.o"

# External object files for target integer
integer_EXTERNAL_OBJECTS =

integer: CMakeFiles/integer.dir/tests/integer.cc.o
integer: CMakeFiles/integer.dir/build.make
integer: lib/libgtest_main.a
integer: lib/libgtest.a
integer: CMakeFiles/integer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/dogthie/CppPractice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable integer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/integer.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -D TEST_TARGET=integer -D TEST_EXECUTABLE=/home/dogthie/CppPractice/build/integer -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/dogthie/CppPractice/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=integer_TESTS -D CTEST_FILE=/home/dogthie/CppPractice/build/integer[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/integer.dir/build: integer
.PHONY : CMakeFiles/integer.dir/build

CMakeFiles/integer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/integer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/integer.dir/clean

CMakeFiles/integer.dir/depend:
	cd /home/dogthie/CppPractice/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dogthie/CppPractice /home/dogthie/CppPractice /home/dogthie/CppPractice/build /home/dogthie/CppPractice/build /home/dogthie/CppPractice/build/CMakeFiles/integer.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/integer.dir/depend
