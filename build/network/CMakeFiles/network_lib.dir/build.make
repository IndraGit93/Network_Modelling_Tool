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
CMAKE_SOURCE_DIR = /home/james/MY_PROJECTS/Network_Modelling_Tool

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/james/MY_PROJECTS/Network_Modelling_Tool/build

# Include any dependencies generated for this target.
include network/CMakeFiles/network_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include network/CMakeFiles/network_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include network/CMakeFiles/network_lib.dir/progress.make

# Include the compile flags for this target's objects.
include network/CMakeFiles/network_lib.dir/flags.make

network/CMakeFiles/network_lib.dir/node.cpp.o: network/CMakeFiles/network_lib.dir/flags.make
network/CMakeFiles/network_lib.dir/node.cpp.o: ../network/node.cpp
network/CMakeFiles/network_lib.dir/node.cpp.o: network/CMakeFiles/network_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/james/MY_PROJECTS/Network_Modelling_Tool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object network/CMakeFiles/network_lib.dir/node.cpp.o"
	cd /home/james/MY_PROJECTS/Network_Modelling_Tool/build/network && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT network/CMakeFiles/network_lib.dir/node.cpp.o -MF CMakeFiles/network_lib.dir/node.cpp.o.d -o CMakeFiles/network_lib.dir/node.cpp.o -c /home/james/MY_PROJECTS/Network_Modelling_Tool/network/node.cpp

network/CMakeFiles/network_lib.dir/node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/network_lib.dir/node.cpp.i"
	cd /home/james/MY_PROJECTS/Network_Modelling_Tool/build/network && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/james/MY_PROJECTS/Network_Modelling_Tool/network/node.cpp > CMakeFiles/network_lib.dir/node.cpp.i

network/CMakeFiles/network_lib.dir/node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/network_lib.dir/node.cpp.s"
	cd /home/james/MY_PROJECTS/Network_Modelling_Tool/build/network && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/james/MY_PROJECTS/Network_Modelling_Tool/network/node.cpp -o CMakeFiles/network_lib.dir/node.cpp.s

network/CMakeFiles/network_lib.dir/topology.cpp.o: network/CMakeFiles/network_lib.dir/flags.make
network/CMakeFiles/network_lib.dir/topology.cpp.o: ../network/topology.cpp
network/CMakeFiles/network_lib.dir/topology.cpp.o: network/CMakeFiles/network_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/james/MY_PROJECTS/Network_Modelling_Tool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object network/CMakeFiles/network_lib.dir/topology.cpp.o"
	cd /home/james/MY_PROJECTS/Network_Modelling_Tool/build/network && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT network/CMakeFiles/network_lib.dir/topology.cpp.o -MF CMakeFiles/network_lib.dir/topology.cpp.o.d -o CMakeFiles/network_lib.dir/topology.cpp.o -c /home/james/MY_PROJECTS/Network_Modelling_Tool/network/topology.cpp

network/CMakeFiles/network_lib.dir/topology.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/network_lib.dir/topology.cpp.i"
	cd /home/james/MY_PROJECTS/Network_Modelling_Tool/build/network && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/james/MY_PROJECTS/Network_Modelling_Tool/network/topology.cpp > CMakeFiles/network_lib.dir/topology.cpp.i

network/CMakeFiles/network_lib.dir/topology.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/network_lib.dir/topology.cpp.s"
	cd /home/james/MY_PROJECTS/Network_Modelling_Tool/build/network && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/james/MY_PROJECTS/Network_Modelling_Tool/network/topology.cpp -o CMakeFiles/network_lib.dir/topology.cpp.s

# Object files for target network_lib
network_lib_OBJECTS = \
"CMakeFiles/network_lib.dir/node.cpp.o" \
"CMakeFiles/network_lib.dir/topology.cpp.o"

# External object files for target network_lib
network_lib_EXTERNAL_OBJECTS =

../lib/libnetwork_lib.a: network/CMakeFiles/network_lib.dir/node.cpp.o
../lib/libnetwork_lib.a: network/CMakeFiles/network_lib.dir/topology.cpp.o
../lib/libnetwork_lib.a: network/CMakeFiles/network_lib.dir/build.make
../lib/libnetwork_lib.a: network/CMakeFiles/network_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/james/MY_PROJECTS/Network_Modelling_Tool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library ../../lib/libnetwork_lib.a"
	cd /home/james/MY_PROJECTS/Network_Modelling_Tool/build/network && $(CMAKE_COMMAND) -P CMakeFiles/network_lib.dir/cmake_clean_target.cmake
	cd /home/james/MY_PROJECTS/Network_Modelling_Tool/build/network && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/network_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
network/CMakeFiles/network_lib.dir/build: ../lib/libnetwork_lib.a
.PHONY : network/CMakeFiles/network_lib.dir/build

network/CMakeFiles/network_lib.dir/clean:
	cd /home/james/MY_PROJECTS/Network_Modelling_Tool/build/network && $(CMAKE_COMMAND) -P CMakeFiles/network_lib.dir/cmake_clean.cmake
.PHONY : network/CMakeFiles/network_lib.dir/clean

network/CMakeFiles/network_lib.dir/depend:
	cd /home/james/MY_PROJECTS/Network_Modelling_Tool/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/james/MY_PROJECTS/Network_Modelling_Tool /home/james/MY_PROJECTS/Network_Modelling_Tool/network /home/james/MY_PROJECTS/Network_Modelling_Tool/build /home/james/MY_PROJECTS/Network_Modelling_Tool/build/network /home/james/MY_PROJECTS/Network_Modelling_Tool/build/network/CMakeFiles/network_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : network/CMakeFiles/network_lib.dir/depend
