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
CMAKE_SOURCE_DIR = "C:\Users\robin\CLionProjects\Can Place Flowers"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\robin\CLionProjects\Can Place Flowers\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Can_Place_Flowers.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Can_Place_Flowers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Can_Place_Flowers.dir/flags.make

CMakeFiles/Can_Place_Flowers.dir/main.cpp.obj: CMakeFiles/Can_Place_Flowers.dir/flags.make
CMakeFiles/Can_Place_Flowers.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\robin\CLionProjects\Can Place Flowers\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Can_Place_Flowers.dir/main.cpp.obj"
	D:\mingw\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Can_Place_Flowers.dir\main.cpp.obj -c "C:\Users\robin\CLionProjects\Can Place Flowers\main.cpp"

CMakeFiles/Can_Place_Flowers.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Can_Place_Flowers.dir/main.cpp.i"
	D:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\robin\CLionProjects\Can Place Flowers\main.cpp" > CMakeFiles\Can_Place_Flowers.dir\main.cpp.i

CMakeFiles/Can_Place_Flowers.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Can_Place_Flowers.dir/main.cpp.s"
	D:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\robin\CLionProjects\Can Place Flowers\main.cpp" -o CMakeFiles\Can_Place_Flowers.dir\main.cpp.s

# Object files for target Can_Place_Flowers
Can_Place_Flowers_OBJECTS = \
"CMakeFiles/Can_Place_Flowers.dir/main.cpp.obj"

# External object files for target Can_Place_Flowers
Can_Place_Flowers_EXTERNAL_OBJECTS =

Can_Place_Flowers.exe: CMakeFiles/Can_Place_Flowers.dir/main.cpp.obj
Can_Place_Flowers.exe: CMakeFiles/Can_Place_Flowers.dir/build.make
Can_Place_Flowers.exe: CMakeFiles/Can_Place_Flowers.dir/linklibs.rsp
Can_Place_Flowers.exe: CMakeFiles/Can_Place_Flowers.dir/objects1.rsp
Can_Place_Flowers.exe: CMakeFiles/Can_Place_Flowers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\robin\CLionProjects\Can Place Flowers\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Can_Place_Flowers.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Can_Place_Flowers.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Can_Place_Flowers.dir/build: Can_Place_Flowers.exe

.PHONY : CMakeFiles/Can_Place_Flowers.dir/build

CMakeFiles/Can_Place_Flowers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Can_Place_Flowers.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Can_Place_Flowers.dir/clean

CMakeFiles/Can_Place_Flowers.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\robin\CLionProjects\Can Place Flowers" "C:\Users\robin\CLionProjects\Can Place Flowers" "C:\Users\robin\CLionProjects\Can Place Flowers\cmake-build-debug" "C:\Users\robin\CLionProjects\Can Place Flowers\cmake-build-debug" "C:\Users\robin\CLionProjects\Can Place Flowers\cmake-build-debug\CMakeFiles\Can_Place_Flowers.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Can_Place_Flowers.dir/depend

