# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hzt/autsys-projects-amg/catkin_ws/src/mav_trajectory_generation/mav_trajectory_generation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hzt/autsys-projects-amg/catkin_ws/build/mav_trajectory_generation

# Include any dependencies generated for this target.
include CMakeFiles/test_polynomial_optimization.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_polynomial_optimization.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_polynomial_optimization.dir/flags.make

CMakeFiles/test_polynomial_optimization.dir/test/test_polynomial_optimization.cpp.o: CMakeFiles/test_polynomial_optimization.dir/flags.make
CMakeFiles/test_polynomial_optimization.dir/test/test_polynomial_optimization.cpp.o: /home/hzt/autsys-projects-amg/catkin_ws/src/mav_trajectory_generation/mav_trajectory_generation/test/test_polynomial_optimization.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hzt/autsys-projects-amg/catkin_ws/build/mav_trajectory_generation/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_polynomial_optimization.dir/test/test_polynomial_optimization.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_polynomial_optimization.dir/test/test_polynomial_optimization.cpp.o -c /home/hzt/autsys-projects-amg/catkin_ws/src/mav_trajectory_generation/mav_trajectory_generation/test/test_polynomial_optimization.cpp

CMakeFiles/test_polynomial_optimization.dir/test/test_polynomial_optimization.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_polynomial_optimization.dir/test/test_polynomial_optimization.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hzt/autsys-projects-amg/catkin_ws/src/mav_trajectory_generation/mav_trajectory_generation/test/test_polynomial_optimization.cpp > CMakeFiles/test_polynomial_optimization.dir/test/test_polynomial_optimization.cpp.i

CMakeFiles/test_polynomial_optimization.dir/test/test_polynomial_optimization.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_polynomial_optimization.dir/test/test_polynomial_optimization.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hzt/autsys-projects-amg/catkin_ws/src/mav_trajectory_generation/mav_trajectory_generation/test/test_polynomial_optimization.cpp -o CMakeFiles/test_polynomial_optimization.dir/test/test_polynomial_optimization.cpp.s

# Object files for target test_polynomial_optimization
test_polynomial_optimization_OBJECTS = \
"CMakeFiles/test_polynomial_optimization.dir/test/test_polynomial_optimization.cpp.o"

# External object files for target test_polynomial_optimization
test_polynomial_optimization_EXTERNAL_OBJECTS =

/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization: CMakeFiles/test_polynomial_optimization.dir/test/test_polynomial_optimization.cpp.o
/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization: CMakeFiles/test_polynomial_optimization.dir/build.make
/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization: gtest/lib/libgtest.so
/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization: /home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/libmav_trajectory_generation.so
/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization: /home/hzt/autsys-projects-amg/catkin_ws/devel/.private/eigen_checks/lib/libeigen_checks.so
/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization: /home/hzt/autsys-projects-amg/catkin_ws/devel/.private/glog_catkin/lib/libglog.so
/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization: /opt/ros/noetic/lib/libroscpp_serialization.so
/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization: /opt/ros/noetic/lib/librostime.so
/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization: /opt/ros/noetic/lib/libcpp_common.so
/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization: /home/hzt/autsys-projects-amg/catkin_ws/devel/.private/nlopt/lib/libnlopt_wrap.so
/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization: /home/hzt/autsys-projects-amg/catkin_ws/devel/.private/yaml_cpp_catkin/lib/libyaml-cpp0.5.so
/home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization: CMakeFiles/test_polynomial_optimization.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hzt/autsys-projects-amg/catkin_ws/build/mav_trajectory_generation/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_polynomial_optimization.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_polynomial_optimization.dir/build: /home/hzt/autsys-projects-amg/catkin_ws/devel/.private/mav_trajectory_generation/lib/mav_trajectory_generation/test_polynomial_optimization

.PHONY : CMakeFiles/test_polynomial_optimization.dir/build

CMakeFiles/test_polynomial_optimization.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_polynomial_optimization.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_polynomial_optimization.dir/clean

CMakeFiles/test_polynomial_optimization.dir/depend:
	cd /home/hzt/autsys-projects-amg/catkin_ws/build/mav_trajectory_generation && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hzt/autsys-projects-amg/catkin_ws/src/mav_trajectory_generation/mav_trajectory_generation /home/hzt/autsys-projects-amg/catkin_ws/src/mav_trajectory_generation/mav_trajectory_generation /home/hzt/autsys-projects-amg/catkin_ws/build/mav_trajectory_generation /home/hzt/autsys-projects-amg/catkin_ws/build/mav_trajectory_generation /home/hzt/autsys-projects-amg/catkin_ws/build/mav_trajectory_generation/CMakeFiles/test_polynomial_optimization.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_polynomial_optimization.dir/depend

