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
CMAKE_SOURCE_DIR = "C:\Users\robin\CLionProjects\Move Zeroes"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\robin\CLionProjects\Move Zeroes\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Move_Zeroes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Move_Zeroes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Move_Zeroes.dir/flags.make

CMakeFiles/Move_Zeroes.dir/main.cpp.obj: CMakeFiles/Move_Zeroes.dir/flags.make
CMakeFiles/Move_Zeroes.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\robin\CLionProjects\Move Zeroes\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Move_Zeroes.dir/main.cpp.obj"
	D:\mingw\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Move_Zeroes.dir\main.cpp.obj -c "C:\Users\robin\CLionProjects\Move Zeroes\main.cpp"

CMakeFiles/Move_Zeroes.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Move_Zeroes.dir/main.cpp.i"
	D:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\robin\CLionProjects\Move Zeroes\main.cpp" > CMakeFiles\Move_Zeroes.dir\main.cpp.i

CMakeFiles/Move_Zeroes.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Move_Zeroes.dir/main.cpp.s"
	D:\mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\robin\CLionProjects\Move Zeroes\main.cpp" -o CMakeFiles\Move_Zeroes.dir\main.cpp.s

# Object files for target Move_Zeroes
Move_Zeroes_OBJECTS = \
"CMakeFiles/Move_Zeroes.dir/main.cpp.obj"

# External object files for target Move_Zeroes
Move_Zeroes_EXTERNAL_OBJECTS =

Move_Zeroes.exe: CMakeFiles/Move_Zeroes.dir/main.cpp.obj
Move_Zeroes.exe: CMakeFiles/Move_Zeroes.dir/build.make
Move_Zeroes.exe: CMakeFiles/Move_Zeroes.dir/linklibs.rsp
Move_Zeroes.exe: CMakeFiles/Move_Zeroes.dir/objects1.rsp
Move_Zeroes.exe: CMakeFiles/Move_Zeroes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\robin\CLionProjects\Move Zeroes\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Move_Zeroes.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Move_Zeroes.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Move_Zeroes.dir/build: Move_Zeroes.exe

.PHONY : CMakeFiles/Move_Zeroes.dir/build

CMakeFiles/Move_Zeroes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Move_Zeroes.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Move_Zeroes.dir/clean

CMakeFiles/Move_Zeroes.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\robin\CLionProjects\Move Zeroes" "C:\Users\robin\CLionProjects\Move Zeroes" "C:\Users\robin\CLionProjects\Move Zeroes\cmake-build-debug" "C:\Users\robin\CLionProjects\Move Zeroes\cmake-build-debug" "C:\Users\robin\CLionProjects\Move Zeroes\cmake-build-debug\CMakeFiles\Move_Zeroes.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Move_Zeroes.dir/depend

