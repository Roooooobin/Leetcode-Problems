# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\robin\CLionProjects\Sum of Left Leaves"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\robin\CLionProjects\Sum of Left Leaves\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Sum_of_Left_Leaves.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sum_of_Left_Leaves.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sum_of_Left_Leaves.dir/flags.make

CMakeFiles/Sum_of_Left_Leaves.dir/main.cpp.obj: CMakeFiles/Sum_of_Left_Leaves.dir/flags.make
CMakeFiles/Sum_of_Left_Leaves.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\robin\CLionProjects\Sum of Left Leaves\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sum_of_Left_Leaves.dir/main.cpp.obj"
	D:\mingw\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Sum_of_Left_Leaves.dir\main.cpp.obj -c "C:\Users\robin\CLionProjects\Sum of Left Leaves\main.cpp"

CMakeFiles/Sum_of_Left_Leaves.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sum_of_Left_Leaves.dir/main.cpp.i"
	D:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\robin\CLionProjects\Sum of Left Leaves\main.cpp" > CMakeFiles\Sum_of_Left_Leaves.dir\main.cpp.i

CMakeFiles/Sum_of_Left_Leaves.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sum_of_Left_Leaves.dir/main.cpp.s"
	D:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\robin\CLionProjects\Sum of Left Leaves\main.cpp" -o CMakeFiles\Sum_of_Left_Leaves.dir\main.cpp.s

# Object files for target Sum_of_Left_Leaves
Sum_of_Left_Leaves_OBJECTS = \
"CMakeFiles/Sum_of_Left_Leaves.dir/main.cpp.obj"

# External object files for target Sum_of_Left_Leaves
Sum_of_Left_Leaves_EXTERNAL_OBJECTS =

Sum_of_Left_Leaves.exe: CMakeFiles/Sum_of_Left_Leaves.dir/main.cpp.obj
Sum_of_Left_Leaves.exe: CMakeFiles/Sum_of_Left_Leaves.dir/build.make
Sum_of_Left_Leaves.exe: CMakeFiles/Sum_of_Left_Leaves.dir/linklibs.rsp
Sum_of_Left_Leaves.exe: CMakeFiles/Sum_of_Left_Leaves.dir/objects1.rsp
Sum_of_Left_Leaves.exe: CMakeFiles/Sum_of_Left_Leaves.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\robin\CLionProjects\Sum of Left Leaves\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sum_of_Left_Leaves.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Sum_of_Left_Leaves.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sum_of_Left_Leaves.dir/build: Sum_of_Left_Leaves.exe

.PHONY : CMakeFiles/Sum_of_Left_Leaves.dir/build

CMakeFiles/Sum_of_Left_Leaves.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Sum_of_Left_Leaves.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Sum_of_Left_Leaves.dir/clean

CMakeFiles/Sum_of_Left_Leaves.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\robin\CLionProjects\Sum of Left Leaves" "C:\Users\robin\CLionProjects\Sum of Left Leaves" "C:\Users\robin\CLionProjects\Sum of Left Leaves\cmake-build-debug" "C:\Users\robin\CLionProjects\Sum of Left Leaves\cmake-build-debug" "C:\Users\robin\CLionProjects\Sum of Left Leaves\cmake-build-debug\CMakeFiles\Sum_of_Left_Leaves.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Sum_of_Left_Leaves.dir/depend

