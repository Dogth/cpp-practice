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
include CMakeFiles/series.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/series.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/series.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/series.dir/flags.make

CMakeFiles/series.dir/tests/series.cc.o: CMakeFiles/series.dir/flags.make
CMakeFiles/series.dir/tests/series.cc.o: /home/dogthie/CppPractice/tests/series.cc
CMakeFiles/series.dir/tests/series.cc.o: CMakeFiles/series.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dogthie/CppPractice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/series.dir/tests/series.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/series.dir/tests/series.cc.o -MF CMakeFiles/series.dir/tests/series.cc.o.d -o CMakeFiles/series.dir/tests/series.cc.o -c /home/dogthie/CppPractice/tests/series.cc

CMakeFiles/series.dir/tests/series.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/series.dir/tests/series.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dogthie/CppPractice/tests/series.cc > CMakeFiles/series.dir/tests/series.cc.i

CMakeFiles/series.dir/tests/series.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/series.dir/tests/series.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dogthie/CppPractice/tests/series.cc -o CMakeFiles/series.dir/tests/series.cc.s

# Object files for target series
series_OBJECTS = \
"CMakeFiles/series.dir/tests/series.cc.o"

# External object files for target series
series_EXTERNAL_OBJECTS =

series: CMakeFiles/series.dir/tests/series.cc.o
series: CMakeFiles/series.dir/build.make
series: lib/libgtest_main.a
series: lib/libgtest.a
series: CMakeFiles/series.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/dogthie/CppPractice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable series"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/series.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -D TEST_TARGET=series -D TEST_EXECUTABLE=/home/dogthie/CppPractice/build/series -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/dogthie/CppPractice/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=series_TESTS -D CTEST_FILE=/home/dogthie/CppPractice/build/series[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/series.dir/build: series
.PHONY : CMakeFiles/series.dir/build

CMakeFiles/series.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/series.dir/cmake_clean.cmake
.PHONY : CMakeFiles/series.dir/clean

CMakeFiles/series.dir/depend:
	cd /home/dogthie/CppPractice/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dogthie/CppPractice /home/dogthie/CppPractice /home/dogthie/CppPractice/build /home/dogthie/CppPractice/build /home/dogthie/CppPractice/build/CMakeFiles/series.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/series.dir/depend
