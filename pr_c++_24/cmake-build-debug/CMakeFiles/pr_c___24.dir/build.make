# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/a1exandr0/CLionProjects/pr_c++_24

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/a1exandr0/CLionProjects/pr_c++_24/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pr_c___24.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pr_c___24.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pr_c___24.dir/flags.make

CMakeFiles/pr_c___24.dir/main.cpp.o: CMakeFiles/pr_c___24.dir/flags.make
CMakeFiles/pr_c___24.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/a1exandr0/CLionProjects/pr_c++_24/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pr_c___24.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pr_c___24.dir/main.cpp.o -c /Users/a1exandr0/CLionProjects/pr_c++_24/main.cpp

CMakeFiles/pr_c___24.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pr_c___24.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/a1exandr0/CLionProjects/pr_c++_24/main.cpp > CMakeFiles/pr_c___24.dir/main.cpp.i

CMakeFiles/pr_c___24.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pr_c___24.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/a1exandr0/CLionProjects/pr_c++_24/main.cpp -o CMakeFiles/pr_c___24.dir/main.cpp.s

# Object files for target pr_c___24
pr_c___24_OBJECTS = \
"CMakeFiles/pr_c___24.dir/main.cpp.o"

# External object files for target pr_c___24
pr_c___24_EXTERNAL_OBJECTS =

pr_c___24: CMakeFiles/pr_c___24.dir/main.cpp.o
pr_c___24: CMakeFiles/pr_c___24.dir/build.make
pr_c___24: CMakeFiles/pr_c___24.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/a1exandr0/CLionProjects/pr_c++_24/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pr_c___24"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pr_c___24.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pr_c___24.dir/build: pr_c___24

.PHONY : CMakeFiles/pr_c___24.dir/build

CMakeFiles/pr_c___24.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pr_c___24.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pr_c___24.dir/clean

CMakeFiles/pr_c___24.dir/depend:
	cd /Users/a1exandr0/CLionProjects/pr_c++_24/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/a1exandr0/CLionProjects/pr_c++_24 /Users/a1exandr0/CLionProjects/pr_c++_24 /Users/a1exandr0/CLionProjects/pr_c++_24/cmake-build-debug /Users/a1exandr0/CLionProjects/pr_c++_24/cmake-build-debug /Users/a1exandr0/CLionProjects/pr_c++_24/cmake-build-debug/CMakeFiles/pr_c___24.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pr_c___24.dir/depend

