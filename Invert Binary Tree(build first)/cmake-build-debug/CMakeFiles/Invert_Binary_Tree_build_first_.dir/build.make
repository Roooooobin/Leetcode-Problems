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
CMAKE_SOURCE_DIR = "C:\Users\robin\CLionProjects\Invert Binary Tree(build first)"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\robin\CLionProjects\Invert Binary Tree(build first)\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Invert_Binary_Tree_build_first_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Invert_Binary_Tree_build_first_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Invert_Binary_Tree_build_first_.dir/flags.make

CMakeFiles/Invert_Binary_Tree_build_first_.dir/main.cpp.obj: CMakeFiles/Invert_Binary_Tree_build_first_.dir/flags.make
CMakeFiles/Invert_Binary_Tree_build_first_.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\robin\CLionProjects\Invert Binary Tree(build first)\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Invert_Binary_Tree_build_first_.dir/main.cpp.obj"
	D:\mingw\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Invert_Binary_Tree_build_first_.dir\main.cpp.obj -c "C:\Users\robin\CLionProjects\Invert Binary Tree(build first)\main.cpp"

CMakeFiles/Invert_Binary_Tree_build_first_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Invert_Binary_Tree_build_first_.dir/main.cpp.i"
	D:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\robin\CLionProjects\Invert Binary Tree(build first)\main.cpp" > CMakeFiles\Invert_Binary_Tree_build_first_.dir\main.cpp.i

CMakeFiles/Invert_Binary_Tree_build_first_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Invert_Binary_Tree_build_first_.dir/main.cpp.s"
	D:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\robin\CLionProjects\Invert Binary Tree(build first)\main.cpp" -o CMakeFiles\Invert_Binary_Tree_build_first_.dir\main.cpp.s

# Object files for target Invert_Binary_Tree_build_first_
Invert_Binary_Tree_build_first__OBJECTS = \
"CMakeFiles/Invert_Binary_Tree_build_first_.dir/main.cpp.obj"

# External object files for target Invert_Binary_Tree_build_first_
Invert_Binary_Tree_build_first__EXTERNAL_OBJECTS =

Invert_Binary_Tree_build_first_.exe: CMakeFiles/Invert_Binary_Tree_build_first_.dir/main.cpp.obj
Invert_Binary_Tree_build_first_.exe: CMakeFiles/Invert_Binary_Tree_build_first_.dir/build.make
Invert_Binary_Tree_build_first_.exe: CMakeFiles/Invert_Binary_Tree_build_first_.dir/linklibs.rsp
Invert_Binary_Tree_build_first_.exe: CMakeFiles/Invert_Binary_Tree_build_first_.dir/objects1.rsp
Invert_Binary_Tree_build_first_.exe: CMakeFiles/Invert_Binary_Tree_build_first_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\robin\CLionProjects\Invert Binary Tree(build first)\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Invert_Binary_Tree_build_first_.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Invert_Binary_Tree_build_first_.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Invert_Binary_Tree_build_first_.dir/build: Invert_Binary_Tree_build_first_.exe

.PHONY : CMakeFiles/Invert_Binary_Tree_build_first_.dir/build

CMakeFiles/Invert_Binary_Tree_build_first_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Invert_Binary_Tree_build_first_.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Invert_Binary_Tree_build_first_.dir/clean

CMakeFiles/Invert_Binary_Tree_build_first_.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\robin\CLionProjects\Invert Binary Tree(build first)" "C:\Users\robin\CLionProjects\Invert Binary Tree(build first)" "C:\Users\robin\CLionProjects\Invert Binary Tree(build first)\cmake-build-debug" "C:\Users\robin\CLionProjects\Invert Binary Tree(build first)\cmake-build-debug" "C:\Users\robin\CLionProjects\Invert Binary Tree(build first)\cmake-build-debug\CMakeFiles\Invert_Binary_Tree_build_first_.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Invert_Binary_Tree_build_first_.dir/depend

