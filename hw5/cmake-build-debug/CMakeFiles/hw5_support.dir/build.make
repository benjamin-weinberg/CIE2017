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
CMAKE_SOURCE_DIR = "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/hw5_support.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hw5_support.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hw5_support.dir/flags.make

CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.o: CMakeFiles/hw5_support.dir/flags.make
CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.o: ../json/jsoncpp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/json/jsoncpp.cpp"

CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/json/jsoncpp.cpp" > CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.i

CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/json/jsoncpp.cpp" -o CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.s

CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.o.requires:

.PHONY : CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.o.requires

CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.o.provides: CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw5_support.dir/build.make CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.o.provides.build
.PHONY : CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.o.provides

CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.o.provides.build: CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.o


CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.o: CMakeFiles/hw5_support.dir/flags.make
CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.o: ../HW5JsonHelper.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/HW5JsonHelper.cxx"

CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/HW5JsonHelper.cxx" > CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.i

CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/HW5JsonHelper.cxx" -o CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.s

CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.o.requires:

.PHONY : CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.o.requires

CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.o.provides: CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.o.requires
	$(MAKE) -f CMakeFiles/hw5_support.dir/build.make CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.o.provides.build
.PHONY : CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.o.provides

CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.o.provides.build: CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.o


CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.o: CMakeFiles/hw5_support.dir/flags.make
CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.o: ../HW5HelperFunctions.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/HW5HelperFunctions.cxx"

CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/HW5HelperFunctions.cxx" > CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.i

CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/HW5HelperFunctions.cxx" -o CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.s

CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.o.requires:

.PHONY : CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.o.requires

CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.o.provides: CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.o.requires
	$(MAKE) -f CMakeFiles/hw5_support.dir/build.make CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.o.provides.build
.PHONY : CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.o.provides

CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.o.provides.build: CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.o


CMakeFiles/hw5_support.dir/HealthStatus.cpp.o: CMakeFiles/hw5_support.dir/flags.make
CMakeFiles/hw5_support.dir/HealthStatus.cpp.o: ../HealthStatus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/hw5_support.dir/HealthStatus.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_support.dir/HealthStatus.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/HealthStatus.cpp"

CMakeFiles/hw5_support.dir/HealthStatus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_support.dir/HealthStatus.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/HealthStatus.cpp" > CMakeFiles/hw5_support.dir/HealthStatus.cpp.i

CMakeFiles/hw5_support.dir/HealthStatus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_support.dir/HealthStatus.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/HealthStatus.cpp" -o CMakeFiles/hw5_support.dir/HealthStatus.cpp.s

CMakeFiles/hw5_support.dir/HealthStatus.cpp.o.requires:

.PHONY : CMakeFiles/hw5_support.dir/HealthStatus.cpp.o.requires

CMakeFiles/hw5_support.dir/HealthStatus.cpp.o.provides: CMakeFiles/hw5_support.dir/HealthStatus.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw5_support.dir/build.make CMakeFiles/hw5_support.dir/HealthStatus.cpp.o.provides.build
.PHONY : CMakeFiles/hw5_support.dir/HealthStatus.cpp.o.provides

CMakeFiles/hw5_support.dir/HealthStatus.cpp.o.provides.build: CMakeFiles/hw5_support.dir/HealthStatus.cpp.o


CMakeFiles/hw5_support.dir/Item.cpp.o: CMakeFiles/hw5_support.dir/flags.make
CMakeFiles/hw5_support.dir/Item.cpp.o: ../Item.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/hw5_support.dir/Item.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_support.dir/Item.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/Item.cpp"

CMakeFiles/hw5_support.dir/Item.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_support.dir/Item.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/Item.cpp" > CMakeFiles/hw5_support.dir/Item.cpp.i

CMakeFiles/hw5_support.dir/Item.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_support.dir/Item.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/Item.cpp" -o CMakeFiles/hw5_support.dir/Item.cpp.s

CMakeFiles/hw5_support.dir/Item.cpp.o.requires:

.PHONY : CMakeFiles/hw5_support.dir/Item.cpp.o.requires

CMakeFiles/hw5_support.dir/Item.cpp.o.provides: CMakeFiles/hw5_support.dir/Item.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw5_support.dir/build.make CMakeFiles/hw5_support.dir/Item.cpp.o.provides.build
.PHONY : CMakeFiles/hw5_support.dir/Item.cpp.o.provides

CMakeFiles/hw5_support.dir/Item.cpp.o.provides.build: CMakeFiles/hw5_support.dir/Item.cpp.o


CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.o: CMakeFiles/hw5_support.dir/flags.make
CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.o: ../PurchaseRecord.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/PurchaseRecord.cpp"

CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/PurchaseRecord.cpp" > CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.i

CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/PurchaseRecord.cpp" -o CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.s

CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.o.requires:

.PHONY : CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.o.requires

CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.o.provides: CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw5_support.dir/build.make CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.o.provides.build
.PHONY : CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.o.provides

CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.o.provides.build: CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.o


CMakeFiles/hw5_support.dir/Character.cpp.o: CMakeFiles/hw5_support.dir/flags.make
CMakeFiles/hw5_support.dir/Character.cpp.o: ../Character.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/hw5_support.dir/Character.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_support.dir/Character.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/Character.cpp"

CMakeFiles/hw5_support.dir/Character.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_support.dir/Character.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/Character.cpp" > CMakeFiles/hw5_support.dir/Character.cpp.i

CMakeFiles/hw5_support.dir/Character.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_support.dir/Character.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/Character.cpp" -o CMakeFiles/hw5_support.dir/Character.cpp.s

CMakeFiles/hw5_support.dir/Character.cpp.o.requires:

.PHONY : CMakeFiles/hw5_support.dir/Character.cpp.o.requires

CMakeFiles/hw5_support.dir/Character.cpp.o.provides: CMakeFiles/hw5_support.dir/Character.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw5_support.dir/build.make CMakeFiles/hw5_support.dir/Character.cpp.o.provides.build
.PHONY : CMakeFiles/hw5_support.dir/Character.cpp.o.provides

CMakeFiles/hw5_support.dir/Character.cpp.o.provides.build: CMakeFiles/hw5_support.dir/Character.cpp.o


CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.o: CMakeFiles/hw5_support.dir/flags.make
CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.o: ../StoreInventoryItem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/StoreInventoryItem.cpp"

CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/StoreInventoryItem.cpp" > CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.i

CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/StoreInventoryItem.cpp" -o CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.s

CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.o.requires:

.PHONY : CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.o.requires

CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.o.provides: CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw5_support.dir/build.make CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.o.provides.build
.PHONY : CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.o.provides

CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.o.provides.build: CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.o


CMakeFiles/hw5_support.dir/Store.cpp.o: CMakeFiles/hw5_support.dir/flags.make
CMakeFiles/hw5_support.dir/Store.cpp.o: ../Store.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/hw5_support.dir/Store.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_support.dir/Store.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/Store.cpp"

CMakeFiles/hw5_support.dir/Store.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_support.dir/Store.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/Store.cpp" > CMakeFiles/hw5_support.dir/Store.cpp.i

CMakeFiles/hw5_support.dir/Store.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_support.dir/Store.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/Store.cpp" -o CMakeFiles/hw5_support.dir/Store.cpp.s

CMakeFiles/hw5_support.dir/Store.cpp.o.requires:

.PHONY : CMakeFiles/hw5_support.dir/Store.cpp.o.requires

CMakeFiles/hw5_support.dir/Store.cpp.o.provides: CMakeFiles/hw5_support.dir/Store.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw5_support.dir/build.make CMakeFiles/hw5_support.dir/Store.cpp.o.provides.build
.PHONY : CMakeFiles/hw5_support.dir/Store.cpp.o.provides

CMakeFiles/hw5_support.dir/Store.cpp.o.provides.build: CMakeFiles/hw5_support.dir/Store.cpp.o


# Object files for target hw5_support
hw5_support_OBJECTS = \
"CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.o" \
"CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.o" \
"CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.o" \
"CMakeFiles/hw5_support.dir/HealthStatus.cpp.o" \
"CMakeFiles/hw5_support.dir/Item.cpp.o" \
"CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.o" \
"CMakeFiles/hw5_support.dir/Character.cpp.o" \
"CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.o" \
"CMakeFiles/hw5_support.dir/Store.cpp.o"

# External object files for target hw5_support
hw5_support_EXTERNAL_OBJECTS =

libhw5_support.a: CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.o
libhw5_support.a: CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.o
libhw5_support.a: CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.o
libhw5_support.a: CMakeFiles/hw5_support.dir/HealthStatus.cpp.o
libhw5_support.a: CMakeFiles/hw5_support.dir/Item.cpp.o
libhw5_support.a: CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.o
libhw5_support.a: CMakeFiles/hw5_support.dir/Character.cpp.o
libhw5_support.a: CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.o
libhw5_support.a: CMakeFiles/hw5_support.dir/Store.cpp.o
libhw5_support.a: CMakeFiles/hw5_support.dir/build.make
libhw5_support.a: CMakeFiles/hw5_support.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX static library libhw5_support.a"
	$(CMAKE_COMMAND) -P CMakeFiles/hw5_support.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw5_support.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hw5_support.dir/build: libhw5_support.a

.PHONY : CMakeFiles/hw5_support.dir/build

CMakeFiles/hw5_support.dir/requires: CMakeFiles/hw5_support.dir/json/jsoncpp.cpp.o.requires
CMakeFiles/hw5_support.dir/requires: CMakeFiles/hw5_support.dir/HW5JsonHelper.cxx.o.requires
CMakeFiles/hw5_support.dir/requires: CMakeFiles/hw5_support.dir/HW5HelperFunctions.cxx.o.requires
CMakeFiles/hw5_support.dir/requires: CMakeFiles/hw5_support.dir/HealthStatus.cpp.o.requires
CMakeFiles/hw5_support.dir/requires: CMakeFiles/hw5_support.dir/Item.cpp.o.requires
CMakeFiles/hw5_support.dir/requires: CMakeFiles/hw5_support.dir/PurchaseRecord.cpp.o.requires
CMakeFiles/hw5_support.dir/requires: CMakeFiles/hw5_support.dir/Character.cpp.o.requires
CMakeFiles/hw5_support.dir/requires: CMakeFiles/hw5_support.dir/StoreInventoryItem.cpp.o.requires
CMakeFiles/hw5_support.dir/requires: CMakeFiles/hw5_support.dir/Store.cpp.o.requires

.PHONY : CMakeFiles/hw5_support.dir/requires

CMakeFiles/hw5_support.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hw5_support.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hw5_support.dir/clean

CMakeFiles/hw5_support.dir/depend:
	cd "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5" "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5" "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/cmake-build-debug" "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/cmake-build-debug" "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw5/cmake-build-debug/CMakeFiles/hw5_support.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/hw5_support.dir/depend

