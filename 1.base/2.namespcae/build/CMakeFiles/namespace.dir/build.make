# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lin/linnode/cplus/cplus/namespcae_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lin/linnode/cplus/cplus/namespcae_test/build

# Include any dependencies generated for this target.
include CMakeFiles/namespace.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/namespace.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/namespace.dir/flags.make

CMakeFiles/namespace.dir/namespace.cpp.o: CMakeFiles/namespace.dir/flags.make
CMakeFiles/namespace.dir/namespace.cpp.o: ../namespace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lin/linnode/cplus/cplus/namespcae_test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/namespace.dir/namespace.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/namespace.dir/namespace.cpp.o -c /home/lin/linnode/cplus/cplus/namespcae_test/namespace.cpp

CMakeFiles/namespace.dir/namespace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/namespace.dir/namespace.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lin/linnode/cplus/cplus/namespcae_test/namespace.cpp > CMakeFiles/namespace.dir/namespace.cpp.i

CMakeFiles/namespace.dir/namespace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/namespace.dir/namespace.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lin/linnode/cplus/cplus/namespcae_test/namespace.cpp -o CMakeFiles/namespace.dir/namespace.cpp.s

CMakeFiles/namespace.dir/namespace.cpp.o.requires:

.PHONY : CMakeFiles/namespace.dir/namespace.cpp.o.requires

CMakeFiles/namespace.dir/namespace.cpp.o.provides: CMakeFiles/namespace.dir/namespace.cpp.o.requires
	$(MAKE) -f CMakeFiles/namespace.dir/build.make CMakeFiles/namespace.dir/namespace.cpp.o.provides.build
.PHONY : CMakeFiles/namespace.dir/namespace.cpp.o.provides

CMakeFiles/namespace.dir/namespace.cpp.o.provides.build: CMakeFiles/namespace.dir/namespace.cpp.o


# Object files for target namespace
namespace_OBJECTS = \
"CMakeFiles/namespace.dir/namespace.cpp.o"

# External object files for target namespace
namespace_EXTERNAL_OBJECTS =

namespace: CMakeFiles/namespace.dir/namespace.cpp.o
namespace: CMakeFiles/namespace.dir/build.make
namespace: CMakeFiles/namespace.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lin/linnode/cplus/cplus/namespcae_test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable namespace"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/namespace.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/namespace.dir/build: namespace

.PHONY : CMakeFiles/namespace.dir/build

CMakeFiles/namespace.dir/requires: CMakeFiles/namespace.dir/namespace.cpp.o.requires

.PHONY : CMakeFiles/namespace.dir/requires

CMakeFiles/namespace.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/namespace.dir/cmake_clean.cmake
.PHONY : CMakeFiles/namespace.dir/clean

CMakeFiles/namespace.dir/depend:
	cd /home/lin/linnode/cplus/cplus/namespcae_test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lin/linnode/cplus/cplus/namespcae_test /home/lin/linnode/cplus/cplus/namespcae_test /home/lin/linnode/cplus/cplus/namespcae_test/build /home/lin/linnode/cplus/cplus/namespcae_test/build /home/lin/linnode/cplus/cplus/namespcae_test/build/CMakeFiles/namespace.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/namespace.dir/depend

