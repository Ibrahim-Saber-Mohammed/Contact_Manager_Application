# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/ibrahim/Desktop/Cpp/Contact_Manager_Application

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ibrahim/Desktop/Cpp/Contact_Manager_Application/build

# Include any dependencies generated for this target.
include test/CMakeFiles/Contact_Manager_Application_Test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/Contact_Manager_Application_Test.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/Contact_Manager_Application_Test.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/Contact_Manager_Application_Test.dir/flags.make

test/CMakeFiles/Contact_Manager_Application_Test.dir/Contact_Manager_Application_Test.cpp.o: test/CMakeFiles/Contact_Manager_Application_Test.dir/flags.make
test/CMakeFiles/Contact_Manager_Application_Test.dir/Contact_Manager_Application_Test.cpp.o: ../test/Contact_Manager_Application_Test.cpp
test/CMakeFiles/Contact_Manager_Application_Test.dir/Contact_Manager_Application_Test.cpp.o: test/CMakeFiles/Contact_Manager_Application_Test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ibrahim/Desktop/Cpp/Contact_Manager_Application/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/Contact_Manager_Application_Test.dir/Contact_Manager_Application_Test.cpp.o"
	cd /home/ibrahim/Desktop/Cpp/Contact_Manager_Application/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/Contact_Manager_Application_Test.dir/Contact_Manager_Application_Test.cpp.o -MF CMakeFiles/Contact_Manager_Application_Test.dir/Contact_Manager_Application_Test.cpp.o.d -o CMakeFiles/Contact_Manager_Application_Test.dir/Contact_Manager_Application_Test.cpp.o -c /home/ibrahim/Desktop/Cpp/Contact_Manager_Application/test/Contact_Manager_Application_Test.cpp

test/CMakeFiles/Contact_Manager_Application_Test.dir/Contact_Manager_Application_Test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Contact_Manager_Application_Test.dir/Contact_Manager_Application_Test.cpp.i"
	cd /home/ibrahim/Desktop/Cpp/Contact_Manager_Application/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ibrahim/Desktop/Cpp/Contact_Manager_Application/test/Contact_Manager_Application_Test.cpp > CMakeFiles/Contact_Manager_Application_Test.dir/Contact_Manager_Application_Test.cpp.i

test/CMakeFiles/Contact_Manager_Application_Test.dir/Contact_Manager_Application_Test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Contact_Manager_Application_Test.dir/Contact_Manager_Application_Test.cpp.s"
	cd /home/ibrahim/Desktop/Cpp/Contact_Manager_Application/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ibrahim/Desktop/Cpp/Contact_Manager_Application/test/Contact_Manager_Application_Test.cpp -o CMakeFiles/Contact_Manager_Application_Test.dir/Contact_Manager_Application_Test.cpp.s

# Object files for target Contact_Manager_Application_Test
Contact_Manager_Application_Test_OBJECTS = \
"CMakeFiles/Contact_Manager_Application_Test.dir/Contact_Manager_Application_Test.cpp.o"

# External object files for target Contact_Manager_Application_Test
Contact_Manager_Application_Test_EXTERNAL_OBJECTS =

test/Contact_Manager_Application_Test: test/CMakeFiles/Contact_Manager_Application_Test.dir/Contact_Manager_Application_Test.cpp.o
test/Contact_Manager_Application_Test: test/CMakeFiles/Contact_Manager_Application_Test.dir/build.make
test/Contact_Manager_Application_Test: /usr/local/lib/libgtest.a
test/Contact_Manager_Application_Test: /usr/local/lib/libgtest_main.a
test/Contact_Manager_Application_Test: /usr/local/lib/libgtest.a
test/Contact_Manager_Application_Test: test/CMakeFiles/Contact_Manager_Application_Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ibrahim/Desktop/Cpp/Contact_Manager_Application/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Contact_Manager_Application_Test"
	cd /home/ibrahim/Desktop/Cpp/Contact_Manager_Application/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Contact_Manager_Application_Test.dir/link.txt --verbose=$(VERBOSE)
	cd /home/ibrahim/Desktop/Cpp/Contact_Manager_Application/build/test && /usr/bin/cmake -D TEST_TARGET=Contact_Manager_Application_Test -D TEST_EXECUTABLE=/home/ibrahim/Desktop/Cpp/Contact_Manager_Application/build/test/Contact_Manager_Application_Test -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/ibrahim/Desktop/Cpp/Contact_Manager_Application/build/test -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=Contact_Manager_Application_Test_TESTS -D CTEST_FILE=/home/ibrahim/Desktop/Cpp/Contact_Manager_Application/build/test/Contact_Manager_Application_Test[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake-3.22/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
test/CMakeFiles/Contact_Manager_Application_Test.dir/build: test/Contact_Manager_Application_Test
.PHONY : test/CMakeFiles/Contact_Manager_Application_Test.dir/build

test/CMakeFiles/Contact_Manager_Application_Test.dir/clean:
	cd /home/ibrahim/Desktop/Cpp/Contact_Manager_Application/build/test && $(CMAKE_COMMAND) -P CMakeFiles/Contact_Manager_Application_Test.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/Contact_Manager_Application_Test.dir/clean

test/CMakeFiles/Contact_Manager_Application_Test.dir/depend:
	cd /home/ibrahim/Desktop/Cpp/Contact_Manager_Application/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ibrahim/Desktop/Cpp/Contact_Manager_Application /home/ibrahim/Desktop/Cpp/Contact_Manager_Application/test /home/ibrahim/Desktop/Cpp/Contact_Manager_Application/build /home/ibrahim/Desktop/Cpp/Contact_Manager_Application/build/test /home/ibrahim/Desktop/Cpp/Contact_Manager_Application/build/test/CMakeFiles/Contact_Manager_Application_Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/Contact_Manager_Application_Test.dir/depend

