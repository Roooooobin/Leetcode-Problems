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
CMAKE_SOURCE_DIR = "C:\Users\robin\CLionProjects\Diameter of Binary Tree"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\robin\CLionProjects\Diameter of Binary Tree\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Diameter_of_Binary_Tree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Diameter_of_Binary_Tree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Diameter_of_Binary_Tree.dir/flags.make

CMakeFiles/Diameter_of_Binary_Tree.dir/main.cpp.obj: CMakeFiles/Diameter_of_Binary_Tree.dir/flags.make
CMakeFiles/Diameter_of_Binary_Tree.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\robin\CLionProjects\Diameter of Binary Tree\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Diameter_of_Binary_Tree.dir/main.cpp.obj"
	D:\mingw\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Diameter_of_Binary_Tree.dir\main.cpp.obj -c "C:\Users\robin\CLionProjects\Diameter of Binary Tree\main.cpp"

CMakeFiles/Diameter_of_Binary_Tree.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Diameter_of_Binary_Tree.dir/main.cpp.i"
	D:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\robin\CLionProjects\Diameter of Binary Tree\main.cpp" > CMakeFiles\Diameter_of_Binary_Tree.dir\main.cpp.i

CMakeFiles/Diameter_of_Binary_Tree.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Diameter_of_Binary_Tree.dir/main.cpp.s"
	D:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\robin\CLionProjects\Diameter of Binary Tree\main.cpp" -o CMakeFiles\Diameter_of_Binary_Tree.dir\main.cpp.s

# Object files for target Diameter_of_Binary_Tree
Diameter_of_Binary_Tree_OBJECTS = \
"CMakeFiles/Diameter_of_Binary_Tree.dir/main.cpp.obj"

# External object files for target Diameter_of_Binary_Tree
Diameter_of_Binary_Tree_EXTERNAL_OBJECTS =

Diameter_of_Binary_Tree.exe: CMakeFiles/Diameter_of_Binary_Tree.dir/main.cpp.obj
Diameter_of_Binary_Tree.exe: CMakeFiles/Diameter_of_Binary_Tree.dir/build.make
Diameter_of_Binary_Tree.exe: CMakeFiles/Diameter_of_Binary_Tree.dir/linklibs.rsp
Diameter_of_Binary_Tree.exe: CMakeFiles/Diameter_of_Binary_Tree.dir/objects1.rsp
Diameter_of_Binary_Tree.exe: CMakeFiles/Diameter_of_Binary_Tree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\robin\CLionProjects\Diameter of Binary Tree\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Diameter_of_Binary_Tree.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Diameter_of_Binary_Tree.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Diameter_of_Binary_Tree.dir/build: Diameter_of_Binary_Tree.exe

.PHONY : CMakeFiles/Diameter_of_Binary_Tree.dir/build

CMakeFiles/Diameter_of_Binary_Tree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Diameter_of_Binary_Tree.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Diameter_of_Binary_Tree.dir/clean

CMakeFiles/Diameter_of_Binary_Tree.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\robin\CLionProjects\Diameter of Binary Tree" "C:\Users\robin\CLionProjects\Diameter of Binary Tree" "C:\Users\robin\CLionProjects\Diameter of Binary Tree\cmake-build-debug" "C:\Users\robin\CLionProjects\Diameter of Binary Tree\cmake-build-debug" "C:\Users\robin\CLionProjects\Diameter of Binary Tree\cmake-build-debug\CMakeFiles\Diameter_of_Binary_Tree.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Diameter_of_Binary_Tree.dir/depend
