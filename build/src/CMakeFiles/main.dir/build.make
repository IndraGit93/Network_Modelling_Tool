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
include src/CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/main.dir/flags.make

src/CMakeFiles/main.dir/main.cpp.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/main.cpp.o: ../src/main.cpp
src/CMakeFiles/main.dir/main.cpp.o: src/CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/james/MY_PROJECTS/Network_Modelling_Tool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/main.dir/main.cpp.o"
	cd /home/james/MY_PROJECTS/Network_Modelling_Tool/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/main.dir/main.cpp.o -MF CMakeFiles/main.dir/main.cpp.o.d -o CMakeFiles/main.dir/main.cpp.o -c /home/james/MY_PROJECTS/Network_Modelling_Tool/src/main.cpp

src/CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	cd /home/james/MY_PROJECTS/Network_Modelling_Tool/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/james/MY_PROJECTS/Network_Modelling_Tool/src/main.cpp > CMakeFiles/main.dir/main.cpp.i

src/CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	cd /home/james/MY_PROJECTS/Network_Modelling_Tool/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/james/MY_PROJECTS/Network_Modelling_Tool/src/main.cpp -o CMakeFiles/main.dir/main.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

../bin/main: src/CMakeFiles/main.dir/main.cpp.o
../bin/main: src/CMakeFiles/main.dir/build.make
../bin/main: ../lib/libhw_grpc_proto.a
../bin/main: /home/james/.local/lib/libabsl_flags.a
../bin/main: /home/james/.local/lib/libabsl_flags_parse.a
../bin/main: ../lib/libconfig_lib.a
../bin/main: ../lib/libnetwork_lib.a
../bin/main: /home/james/.local/lib/libgrpc++_reflection.a
../bin/main: /home/james/.local/lib/libgrpc++.a
../bin/main: /home/james/.local/lib/libprotobuf.a
../bin/main: /home/james/.local/lib/libgrpc.a
../bin/main: /home/james/.local/lib/libre2.a
../bin/main: /home/james/.local/lib/libupb_json_lib.a
../bin/main: /home/james/.local/lib/libupb_textformat_lib.a
../bin/main: /home/james/.local/lib/libupb_collections_lib.a
../bin/main: /home/james/.local/lib/libupb.a
../bin/main: /home/james/.local/lib/libutf8_range_lib.a
../bin/main: /home/james/.local/lib/libz.a
../bin/main: /home/james/.local/lib/libcares.a
../bin/main: /home/james/.local/lib/libgpr.a
../bin/main: /home/james/.local/lib/libabsl_random_distributions.a
../bin/main: /home/james/.local/lib/libabsl_random_seed_sequences.a
../bin/main: /home/james/.local/lib/libabsl_random_internal_pool_urbg.a
../bin/main: /home/james/.local/lib/libabsl_random_internal_randen.a
../bin/main: /home/james/.local/lib/libabsl_random_internal_randen_hwaes.a
../bin/main: /home/james/.local/lib/libabsl_random_internal_randen_hwaes_impl.a
../bin/main: /home/james/.local/lib/libabsl_random_internal_randen_slow.a
../bin/main: /home/james/.local/lib/libabsl_random_internal_platform.a
../bin/main: /home/james/.local/lib/libabsl_random_internal_seed_material.a
../bin/main: /home/james/.local/lib/libabsl_random_seed_gen_exception.a
../bin/main: /home/james/.local/lib/libssl.a
../bin/main: /home/james/.local/lib/libcrypto.a
../bin/main: /home/james/.local/lib/libaddress_sorting.a
../bin/main: /home/james/.local/lib/libabsl_log_internal_check_op.a
../bin/main: /home/james/.local/lib/libabsl_leak_check.a
../bin/main: /home/james/.local/lib/libabsl_die_if_null.a
../bin/main: /home/james/.local/lib/libabsl_log_internal_conditions.a
../bin/main: /home/james/.local/lib/libabsl_log_internal_message.a
../bin/main: /home/james/.local/lib/libabsl_log_internal_nullguard.a
../bin/main: /home/james/.local/lib/libabsl_examine_stack.a
../bin/main: /home/james/.local/lib/libabsl_log_internal_format.a
../bin/main: /home/james/.local/lib/libabsl_log_internal_proto.a
../bin/main: /home/james/.local/lib/libabsl_log_internal_log_sink_set.a
../bin/main: /home/james/.local/lib/libabsl_log_sink.a
../bin/main: /home/james/.local/lib/libabsl_log_entry.a
../bin/main: /home/james/.local/lib/libabsl_log_initialize.a
../bin/main: /home/james/.local/lib/libabsl_log_globals.a
../bin/main: /home/james/.local/lib/libabsl_log_internal_globals.a
../bin/main: /home/james/.local/lib/libabsl_statusor.a
../bin/main: /home/james/.local/lib/libabsl_status.a
../bin/main: /home/james/.local/lib/libabsl_strerror.a
../bin/main: /home/james/.local/lib/libutf8_validity.a
../bin/main: /home/james/.local/lib/libabsl_flags_usage.a
../bin/main: /home/james/.local/lib/libabsl_flags_usage_internal.a
../bin/main: /home/james/.local/lib/libabsl_flags.a
../bin/main: /home/james/.local/lib/libabsl_flags_internal.a
../bin/main: /home/james/.local/lib/libabsl_flags_marshalling.a
../bin/main: /home/james/.local/lib/libabsl_flags_reflection.a
../bin/main: /home/james/.local/lib/libabsl_flags_config.a
../bin/main: /home/james/.local/lib/libabsl_flags_private_handle_accessor.a
../bin/main: /home/james/.local/lib/libabsl_flags_commandlineflag.a
../bin/main: /home/james/.local/lib/libabsl_flags_commandlineflag_internal.a
../bin/main: /home/james/.local/lib/libabsl_flags_program_name.a
../bin/main: /home/james/.local/lib/libabsl_cord.a
../bin/main: /home/james/.local/lib/libabsl_cordz_info.a
../bin/main: /home/james/.local/lib/libabsl_cord_internal.a
../bin/main: /home/james/.local/lib/libabsl_cordz_functions.a
../bin/main: /home/james/.local/lib/libabsl_cordz_handle.a
../bin/main: /home/james/.local/lib/libabsl_crc_cord_state.a
../bin/main: /home/james/.local/lib/libabsl_crc32c.a
../bin/main: /home/james/.local/lib/libabsl_str_format_internal.a
../bin/main: /home/james/.local/lib/libabsl_crc_internal.a
../bin/main: /home/james/.local/lib/libabsl_crc_cpu_detect.a
../bin/main: /home/james/.local/lib/libabsl_raw_hash_set.a
../bin/main: /home/james/.local/lib/libabsl_hash.a
../bin/main: /home/james/.local/lib/libabsl_bad_variant_access.a
../bin/main: /home/james/.local/lib/libabsl_city.a
../bin/main: /home/james/.local/lib/libabsl_low_level_hash.a
../bin/main: /home/james/.local/lib/libabsl_bad_optional_access.a
../bin/main: /home/james/.local/lib/libabsl_hashtablez_sampler.a
../bin/main: /home/james/.local/lib/libabsl_exponential_biased.a
../bin/main: /home/james/.local/lib/libabsl_synchronization.a
../bin/main: /home/james/.local/lib/libabsl_graphcycles_internal.a
../bin/main: /home/james/.local/lib/libabsl_kernel_timeout_internal.a
../bin/main: /home/james/.local/lib/libabsl_time.a
../bin/main: /home/james/.local/lib/libabsl_civil_time.a
../bin/main: /home/james/.local/lib/libabsl_time_zone.a
../bin/main: /home/james/.local/lib/libabsl_stacktrace.a
../bin/main: /home/james/.local/lib/libabsl_symbolize.a
../bin/main: /home/james/.local/lib/libabsl_strings.a
../bin/main: /home/james/.local/lib/libabsl_string_view.a
../bin/main: /home/james/.local/lib/libabsl_strings_internal.a
../bin/main: /home/james/.local/lib/libabsl_int128.a
../bin/main: /home/james/.local/lib/libabsl_throw_delegate.a
../bin/main: /home/james/.local/lib/libabsl_malloc_internal.a
../bin/main: /home/james/.local/lib/libabsl_debugging_internal.a
../bin/main: /home/james/.local/lib/libabsl_demangle_internal.a
../bin/main: /home/james/.local/lib/libabsl_base.a
../bin/main: /home/james/.local/lib/libabsl_raw_logging_internal.a
../bin/main: /home/james/.local/lib/libabsl_log_severity.a
../bin/main: /home/james/.local/lib/libabsl_spinlock_wait.a
../bin/main: src/CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/james/MY_PROJECTS/Network_Modelling_Tool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/main"
	cd /home/james/MY_PROJECTS/Network_Modelling_Tool/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/main.dir/build: ../bin/main
.PHONY : src/CMakeFiles/main.dir/build

src/CMakeFiles/main.dir/clean:
	cd /home/james/MY_PROJECTS/Network_Modelling_Tool/build/src && $(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/main.dir/clean

src/CMakeFiles/main.dir/depend:
	cd /home/james/MY_PROJECTS/Network_Modelling_Tool/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/james/MY_PROJECTS/Network_Modelling_Tool /home/james/MY_PROJECTS/Network_Modelling_Tool/src /home/james/MY_PROJECTS/Network_Modelling_Tool/build /home/james/MY_PROJECTS/Network_Modelling_Tool/build/src /home/james/MY_PROJECTS/Network_Modelling_Tool/build/src/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/main.dir/depend

