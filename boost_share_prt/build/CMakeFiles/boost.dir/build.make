# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lin/linnode/cplus/boost_share_prt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lin/linnode/cplus/boost_share_prt/build

# Include any dependencies generated for this target.
include CMakeFiles/boost.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/boost.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/boost.dir/flags.make

CMakeFiles/boost.dir/boost.cpp.o: CMakeFiles/boost.dir/flags.make
CMakeFiles/boost.dir/boost.cpp.o: ../boost.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lin/linnode/cplus/boost_share_prt/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/boost.dir/boost.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/boost.dir/boost.cpp.o -c /home/lin/linnode/cplus/boost_share_prt/boost.cpp

CMakeFiles/boost.dir/boost.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boost.dir/boost.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lin/linnode/cplus/boost_share_prt/boost.cpp > CMakeFiles/boost.dir/boost.cpp.i

CMakeFiles/boost.dir/boost.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boost.dir/boost.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lin/linnode/cplus/boost_share_prt/boost.cpp -o CMakeFiles/boost.dir/boost.cpp.s

CMakeFiles/boost.dir/boost.cpp.o.requires:
.PHONY : CMakeFiles/boost.dir/boost.cpp.o.requires

CMakeFiles/boost.dir/boost.cpp.o.provides: CMakeFiles/boost.dir/boost.cpp.o.requires
	$(MAKE) -f CMakeFiles/boost.dir/build.make CMakeFiles/boost.dir/boost.cpp.o.provides.build
.PHONY : CMakeFiles/boost.dir/boost.cpp.o.provides

CMakeFiles/boost.dir/boost.cpp.o.provides.build: CMakeFiles/boost.dir/boost.cpp.o

# Object files for target boost
boost_OBJECTS = \
"CMakeFiles/boost.dir/boost.cpp.o"

# External object files for target boost
boost_EXTERNAL_OBJECTS =

boost: CMakeFiles/boost.dir/boost.cpp.o
boost: CMakeFiles/boost.dir/build.make
boost: CMakeFiles/boost.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable boost"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/boost.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/boost.dir/build: boost
.PHONY : CMakeFiles/boost.dir/build

CMakeFiles/boost.dir/requires: CMakeFiles/boost.dir/boost.cpp.o.requires
.PHONY : CMakeFiles/boost.dir/requires

CMakeFiles/boost.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/boost.dir/cmake_clean.cmake
.PHONY : CMakeFiles/boost.dir/clean

CMakeFiles/boost.dir/depend:
	cd /home/lin/linnode/cplus/boost_share_prt/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lin/linnode/cplus/boost_share_prt /home/lin/linnode/cplus/boost_share_prt /home/lin/linnode/cplus/boost_share_prt/build /home/lin/linnode/cplus/boost_share_prt/build /home/lin/linnode/cplus/boost_share_prt/build/CMakeFiles/boost.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/boost.dir/depend

