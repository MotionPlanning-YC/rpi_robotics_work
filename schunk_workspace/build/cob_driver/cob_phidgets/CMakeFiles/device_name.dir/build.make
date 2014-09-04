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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/powerball/rpi_robotics_work/schunk_workspace/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/powerball/rpi_robotics_work/schunk_workspace/build

# Include any dependencies generated for this target.
include cob_driver/cob_phidgets/CMakeFiles/device_name.dir/depend.make

# Include the progress variables for this target.
include cob_driver/cob_phidgets/CMakeFiles/device_name.dir/progress.make

# Include the compile flags for this target's objects.
include cob_driver/cob_phidgets/CMakeFiles/device_name.dir/flags.make

cob_driver/cob_phidgets/CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.o: cob_driver/cob_phidgets/CMakeFiles/device_name.dir/flags.make
cob_driver/cob_phidgets/CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.o: /home/powerball/rpi_robotics_work/schunk_workspace/src/cob_driver/cob_phidgets/ros/src/set_device_name.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/powerball/rpi_robotics_work/schunk_workspace/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object cob_driver/cob_phidgets/CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.o"
	cd /home/powerball/rpi_robotics_work/schunk_workspace/build/cob_driver/cob_phidgets && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.o -c /home/powerball/rpi_robotics_work/schunk_workspace/src/cob_driver/cob_phidgets/ros/src/set_device_name.cpp

cob_driver/cob_phidgets/CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.i"
	cd /home/powerball/rpi_robotics_work/schunk_workspace/build/cob_driver/cob_phidgets && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/powerball/rpi_robotics_work/schunk_workspace/src/cob_driver/cob_phidgets/ros/src/set_device_name.cpp > CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.i

cob_driver/cob_phidgets/CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.s"
	cd /home/powerball/rpi_robotics_work/schunk_workspace/build/cob_driver/cob_phidgets && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/powerball/rpi_robotics_work/schunk_workspace/src/cob_driver/cob_phidgets/ros/src/set_device_name.cpp -o CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.s

cob_driver/cob_phidgets/CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.o.requires:
.PHONY : cob_driver/cob_phidgets/CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.o.requires

cob_driver/cob_phidgets/CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.o.provides: cob_driver/cob_phidgets/CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.o.requires
	$(MAKE) -f cob_driver/cob_phidgets/CMakeFiles/device_name.dir/build.make cob_driver/cob_phidgets/CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.o.provides.build
.PHONY : cob_driver/cob_phidgets/CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.o.provides

cob_driver/cob_phidgets/CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.o.provides.build: cob_driver/cob_phidgets/CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.o

# Object files for target device_name
device_name_OBJECTS = \
"CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.o"

# External object files for target device_name
device_name_EXTERNAL_OBJECTS =

/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: cob_driver/cob_phidgets/CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.o
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /opt/ros/hydro/lib/libroscpp.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /usr/lib/libboost_signals-mt.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /usr/lib/libboost_filesystem-mt.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /opt/ros/hydro/lib/librosconsole.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /opt/ros/hydro/lib/librosconsole_log4cxx.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /opt/ros/hydro/lib/librosconsole_backend_interface.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /usr/lib/liblog4cxx.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /usr/lib/libboost_regex-mt.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /opt/ros/hydro/lib/libxmlrpcpp.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /opt/ros/hydro/lib/libroscpp_serialization.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /opt/ros/hydro/lib/librostime.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /usr/lib/libboost_date_time-mt.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /usr/lib/libboost_system-mt.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /usr/lib/libboost_thread-mt.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /opt/ros/hydro/lib/libcpp_common.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /opt/ros/hydro/lib/libconsole_bridge.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: /home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/libphidget21.so
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: cob_driver/cob_phidgets/CMakeFiles/device_name.dir/build.make
/home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name: cob_driver/cob_phidgets/CMakeFiles/device_name.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable /home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name"
	cd /home/powerball/rpi_robotics_work/schunk_workspace/build/cob_driver/cob_phidgets && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/device_name.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
cob_driver/cob_phidgets/CMakeFiles/device_name.dir/build: /home/powerball/rpi_robotics_work/schunk_workspace/devel/lib/cob_phidgets/device_name
.PHONY : cob_driver/cob_phidgets/CMakeFiles/device_name.dir/build

cob_driver/cob_phidgets/CMakeFiles/device_name.dir/requires: cob_driver/cob_phidgets/CMakeFiles/device_name.dir/ros/src/set_device_name.cpp.o.requires
.PHONY : cob_driver/cob_phidgets/CMakeFiles/device_name.dir/requires

cob_driver/cob_phidgets/CMakeFiles/device_name.dir/clean:
	cd /home/powerball/rpi_robotics_work/schunk_workspace/build/cob_driver/cob_phidgets && $(CMAKE_COMMAND) -P CMakeFiles/device_name.dir/cmake_clean.cmake
.PHONY : cob_driver/cob_phidgets/CMakeFiles/device_name.dir/clean

cob_driver/cob_phidgets/CMakeFiles/device_name.dir/depend:
	cd /home/powerball/rpi_robotics_work/schunk_workspace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/powerball/rpi_robotics_work/schunk_workspace/src /home/powerball/rpi_robotics_work/schunk_workspace/src/cob_driver/cob_phidgets /home/powerball/rpi_robotics_work/schunk_workspace/build /home/powerball/rpi_robotics_work/schunk_workspace/build/cob_driver/cob_phidgets /home/powerball/rpi_robotics_work/schunk_workspace/build/cob_driver/cob_phidgets/CMakeFiles/device_name.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cob_driver/cob_phidgets/CMakeFiles/device_name.dir/depend

