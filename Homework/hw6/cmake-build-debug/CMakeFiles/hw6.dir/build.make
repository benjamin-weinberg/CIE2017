# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /cygdrive/c/Users/Ben/.CLion2017.1/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Ben/.CLion2017.1/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/hw6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hw6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hw6.dir/flags.make

CMakeFiles/hw6.dir/hw6.cpp.o: CMakeFiles/hw6.dir/flags.make
CMakeFiles/hw6.dir/hw6.cpp.o: ../hw6.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hw6.dir/hw6.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw6.dir/hw6.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/hw6.cpp"

CMakeFiles/hw6.dir/hw6.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw6.dir/hw6.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/hw6.cpp" > CMakeFiles/hw6.dir/hw6.cpp.i

CMakeFiles/hw6.dir/hw6.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw6.dir/hw6.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/hw6.cpp" -o CMakeFiles/hw6.dir/hw6.cpp.s

CMakeFiles/hw6.dir/hw6.cpp.o.requires:

.PHONY : CMakeFiles/hw6.dir/hw6.cpp.o.requires

CMakeFiles/hw6.dir/hw6.cpp.o.provides: CMakeFiles/hw6.dir/hw6.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw6.dir/build.make CMakeFiles/hw6.dir/hw6.cpp.o.provides.build
.PHONY : CMakeFiles/hw6.dir/hw6.cpp.o.provides

CMakeFiles/hw6.dir/hw6.cpp.o.provides.build: CMakeFiles/hw6.dir/hw6.cpp.o


# Object files for target hw6
hw6_OBJECTS = \
"CMakeFiles/hw6.dir/hw6.cpp.o"

# External object files for target hw6
hw6_EXTERNAL_OBJECTS =

hw6.exe: CMakeFiles/hw6.dir/hw6.cpp.o
hw6.exe: CMakeFiles/hw6.dir/build.make
hw6.exe: libhw6_support.a
hw6.exe: CMakeFiles/hw6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hw6.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hw6.dir/build: hw6.exe

.PHONY : CMakeFiles/hw6.dir/build

CMakeFiles/hw6.dir/requires: CMakeFiles/hw6.dir/hw6.cpp.o.requires

.PHONY : CMakeFiles/hw6.dir/requires

CMakeFiles/hw6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hw6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hw6.dir/clean

CMakeFiles/hw6.dir/depend:
	cd "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6" "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6" "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug" "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug" "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles/hw6.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/hw6.dir/depend

