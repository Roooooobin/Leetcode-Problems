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
CMAKE_SOURCE_DIR = "C:\Users\robin\CLionProjects\Max Area of Island"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\robin\CLionProjects\Max Area of Island\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Max_Area_of_Island.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Max_Area_of_Island.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Max_Area_of_Island.dir/flags.make

CMakeFiles/Max_Area_of_Island.dir/main.cpp.obj: CMakeFiles/Max_Area_of_Island.dir/flags.make
CMakeFiles/Max_Area_of_Island.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\robin\CLionProjects\Max Area of Island\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Max_Area_of_Island.dir/main.cpp.obj"
	D:\mingw\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Max_Area_of_Island.dir\main.cpp.obj -c "C:\Users\robin\CLionProjects\Max Area of Island\main.cpp"

CMakeFiles/Max_Area_of_Island.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Max_Area_of_Island.dir/main.cpp.i"
	D:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\robin\CLionProjects\Max Area of Island\main.cpp" > CMakeFiles\Max_Area_of_Island.dir\main.cpp.i

CMakeFiles/Max_Area_of_Island.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Max_Area_of_Island.dir/main.cpp.s"
	D:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\robin\CLionProjects\Max Area of Island\main.cpp" -o CMakeFiles\Max_Area_of_Island.dir\main.cpp.s

# Object files for target Max_Area_of_Island
Max_Area_of_Island_OBJECTS = \
"CMakeFiles/Max_Area_of_Island.dir/main.cpp.obj"

# External object files for target Max_Area_of_Island
Max_Area_of_Island_EXTERNAL_OBJECTS =

Max_Area_of_Island.exe: CMakeFiles/Max_Area_of_Island.dir/main.cpp.obj
Max_Area_of_Island.exe: CMakeFiles/Max_Area_of_Island.dir/build.make
Max_Area_of_Island.exe: CMakeFiles/Max_Area_of_Island.dir/linklibs.rsp
Max_Area_of_Island.exe: CMakeFiles/Max_Area_of_Island.dir/objects1.rsp
Max_Area_of_Island.exe: CMakeFiles/Max_Area_of_Island.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\robin\CLionProjects\Max Area of Island\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Max_Area_of_Island.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Max_Area_of_Island.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Max_Area_of_Island.dir/build: Max_Area_of_Island.exe

.PHONY : CMakeFiles/Max_Area_of_Island.dir/build

CMakeFiles/Max_Area_of_Island.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Max_Area_of_Island.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Max_Area_of_Island.dir/clean

CMakeFiles/Max_Area_of_Island.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\robin\CLionProjects\Max Area of Island" "C:\Users\robin\CLionProjects\Max Area of Island" "C:\Users\robin\CLionProjects\Max Area of Island\cmake-build-debug" "C:\Users\robin\CLionProjects\Max Area of Island\cmake-build-debug" "C:\Users\robin\CLionProjects\Max Area of Island\cmake-build-debug\CMakeFiles\Max_Area_of_Island.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Max_Area_of_Island.dir/depend

