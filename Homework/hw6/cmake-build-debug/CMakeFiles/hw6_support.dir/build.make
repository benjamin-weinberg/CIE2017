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
include CMakeFiles/hw6_support.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hw6_support.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hw6_support.dir/flags.make

CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.o: CMakeFiles/hw6_support.dir/flags.make
CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.o: ../json/jsoncpp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/json/jsoncpp.cpp"

CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/json/jsoncpp.cpp" > CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.i

CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/json/jsoncpp.cpp" -o CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.s

CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.o.requires:

.PHONY : CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.o.requires

CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.o.provides: CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw6_support.dir/build.make CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.o.provides.build
.PHONY : CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.o.provides

CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.o.provides.build: CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.o


CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.o: CMakeFiles/hw6_support.dir/flags.make
CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.o: ../HW6JsonHelper.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/HW6JsonHelper.cpp"

CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/HW6JsonHelper.cpp" > CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.i

CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/HW6JsonHelper.cpp" -o CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.s

CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.o.requires:

.PHONY : CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.o.requires

CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.o.provides: CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw6_support.dir/build.make CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.o.provides.build
.PHONY : CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.o.provides

CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.o.provides.build: CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.o


CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.o: CMakeFiles/hw6_support.dir/flags.make
CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.o: ../HW6HelperFunctions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/HW6HelperFunctions.cpp"

CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/HW6HelperFunctions.cpp" > CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.i

CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/HW6HelperFunctions.cpp" -o CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.s

CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.o.requires:

.PHONY : CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.o.requires

CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.o.provides: CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw6_support.dir/build.make CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.o.provides.build
.PHONY : CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.o.provides

CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.o.provides.build: CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.o


CMakeFiles/hw6_support.dir/HealthStatus.cpp.o: CMakeFiles/hw6_support.dir/flags.make
CMakeFiles/hw6_support.dir/HealthStatus.cpp.o: ../HealthStatus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/hw6_support.dir/HealthStatus.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw6_support.dir/HealthStatus.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/HealthStatus.cpp"

CMakeFiles/hw6_support.dir/HealthStatus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw6_support.dir/HealthStatus.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/HealthStatus.cpp" > CMakeFiles/hw6_support.dir/HealthStatus.cpp.i

CMakeFiles/hw6_support.dir/HealthStatus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw6_support.dir/HealthStatus.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/HealthStatus.cpp" -o CMakeFiles/hw6_support.dir/HealthStatus.cpp.s

CMakeFiles/hw6_support.dir/HealthStatus.cpp.o.requires:

.PHONY : CMakeFiles/hw6_support.dir/HealthStatus.cpp.o.requires

CMakeFiles/hw6_support.dir/HealthStatus.cpp.o.provides: CMakeFiles/hw6_support.dir/HealthStatus.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw6_support.dir/build.make CMakeFiles/hw6_support.dir/HealthStatus.cpp.o.provides.build
.PHONY : CMakeFiles/hw6_support.dir/HealthStatus.cpp.o.provides

CMakeFiles/hw6_support.dir/HealthStatus.cpp.o.provides.build: CMakeFiles/hw6_support.dir/HealthStatus.cpp.o


CMakeFiles/hw6_support.dir/CharacterBase.cpp.o: CMakeFiles/hw6_support.dir/flags.make
CMakeFiles/hw6_support.dir/CharacterBase.cpp.o: ../CharacterBase.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/hw6_support.dir/CharacterBase.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw6_support.dir/CharacterBase.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/CharacterBase.cpp"

CMakeFiles/hw6_support.dir/CharacterBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw6_support.dir/CharacterBase.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/CharacterBase.cpp" > CMakeFiles/hw6_support.dir/CharacterBase.cpp.i

CMakeFiles/hw6_support.dir/CharacterBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw6_support.dir/CharacterBase.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/CharacterBase.cpp" -o CMakeFiles/hw6_support.dir/CharacterBase.cpp.s

CMakeFiles/hw6_support.dir/CharacterBase.cpp.o.requires:

.PHONY : CMakeFiles/hw6_support.dir/CharacterBase.cpp.o.requires

CMakeFiles/hw6_support.dir/CharacterBase.cpp.o.provides: CMakeFiles/hw6_support.dir/CharacterBase.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw6_support.dir/build.make CMakeFiles/hw6_support.dir/CharacterBase.cpp.o.provides.build
.PHONY : CMakeFiles/hw6_support.dir/CharacterBase.cpp.o.provides

CMakeFiles/hw6_support.dir/CharacterBase.cpp.o.provides.build: CMakeFiles/hw6_support.dir/CharacterBase.cpp.o


CMakeFiles/hw6_support.dir/StoreBase.cpp.o: CMakeFiles/hw6_support.dir/flags.make
CMakeFiles/hw6_support.dir/StoreBase.cpp.o: ../StoreBase.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/hw6_support.dir/StoreBase.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw6_support.dir/StoreBase.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/StoreBase.cpp"

CMakeFiles/hw6_support.dir/StoreBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw6_support.dir/StoreBase.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/StoreBase.cpp" > CMakeFiles/hw6_support.dir/StoreBase.cpp.i

CMakeFiles/hw6_support.dir/StoreBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw6_support.dir/StoreBase.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/StoreBase.cpp" -o CMakeFiles/hw6_support.dir/StoreBase.cpp.s

CMakeFiles/hw6_support.dir/StoreBase.cpp.o.requires:

.PHONY : CMakeFiles/hw6_support.dir/StoreBase.cpp.o.requires

CMakeFiles/hw6_support.dir/StoreBase.cpp.o.provides: CMakeFiles/hw6_support.dir/StoreBase.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw6_support.dir/build.make CMakeFiles/hw6_support.dir/StoreBase.cpp.o.provides.build
.PHONY : CMakeFiles/hw6_support.dir/StoreBase.cpp.o.provides

CMakeFiles/hw6_support.dir/StoreBase.cpp.o.provides.build: CMakeFiles/hw6_support.dir/StoreBase.cpp.o


CMakeFiles/hw6_support.dir/Item.cpp.o: CMakeFiles/hw6_support.dir/flags.make
CMakeFiles/hw6_support.dir/Item.cpp.o: ../Item.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/hw6_support.dir/Item.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw6_support.dir/Item.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/Item.cpp"

CMakeFiles/hw6_support.dir/Item.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw6_support.dir/Item.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/Item.cpp" > CMakeFiles/hw6_support.dir/Item.cpp.i

CMakeFiles/hw6_support.dir/Item.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw6_support.dir/Item.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/Item.cpp" -o CMakeFiles/hw6_support.dir/Item.cpp.s

CMakeFiles/hw6_support.dir/Item.cpp.o.requires:

.PHONY : CMakeFiles/hw6_support.dir/Item.cpp.o.requires

CMakeFiles/hw6_support.dir/Item.cpp.o.provides: CMakeFiles/hw6_support.dir/Item.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw6_support.dir/build.make CMakeFiles/hw6_support.dir/Item.cpp.o.provides.build
.PHONY : CMakeFiles/hw6_support.dir/Item.cpp.o.provides

CMakeFiles/hw6_support.dir/Item.cpp.o.provides.build: CMakeFiles/hw6_support.dir/Item.cpp.o


CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.o: CMakeFiles/hw6_support.dir/flags.make
CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.o: ../StoreInventoryItem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/StoreInventoryItem.cpp"

CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/StoreInventoryItem.cpp" > CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.i

CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/StoreInventoryItem.cpp" -o CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.s

CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.o.requires:

.PHONY : CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.o.requires

CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.o.provides: CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw6_support.dir/build.make CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.o.provides.build
.PHONY : CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.o.provides

CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.o.provides.build: CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.o


CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.o: CMakeFiles/hw6_support.dir/flags.make
CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.o: ../PurchaseRecord.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/PurchaseRecord.cpp"

CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/PurchaseRecord.cpp" > CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.i

CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/PurchaseRecord.cpp" -o CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.s

CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.o.requires:

.PHONY : CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.o.requires

CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.o.provides: CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw6_support.dir/build.make CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.o.provides.build
.PHONY : CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.o.provides

CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.o.provides.build: CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.o


CMakeFiles/hw6_support.dir/MallGame.cpp.o: CMakeFiles/hw6_support.dir/flags.make
CMakeFiles/hw6_support.dir/MallGame.cpp.o: ../MallGame.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/hw6_support.dir/MallGame.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw6_support.dir/MallGame.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/MallGame.cpp"

CMakeFiles/hw6_support.dir/MallGame.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw6_support.dir/MallGame.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/MallGame.cpp" > CMakeFiles/hw6_support.dir/MallGame.cpp.i

CMakeFiles/hw6_support.dir/MallGame.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw6_support.dir/MallGame.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/MallGame.cpp" -o CMakeFiles/hw6_support.dir/MallGame.cpp.s

CMakeFiles/hw6_support.dir/MallGame.cpp.o.requires:

.PHONY : CMakeFiles/hw6_support.dir/MallGame.cpp.o.requires

CMakeFiles/hw6_support.dir/MallGame.cpp.o.provides: CMakeFiles/hw6_support.dir/MallGame.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw6_support.dir/build.make CMakeFiles/hw6_support.dir/MallGame.cpp.o.provides.build
.PHONY : CMakeFiles/hw6_support.dir/MallGame.cpp.o.provides

CMakeFiles/hw6_support.dir/MallGame.cpp.o.provides.build: CMakeFiles/hw6_support.dir/MallGame.cpp.o


CMakeFiles/hw6_support.dir/Character.cpp.o: CMakeFiles/hw6_support.dir/flags.make
CMakeFiles/hw6_support.dir/Character.cpp.o: ../Character.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/hw6_support.dir/Character.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw6_support.dir/Character.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/Character.cpp"

CMakeFiles/hw6_support.dir/Character.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw6_support.dir/Character.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/Character.cpp" > CMakeFiles/hw6_support.dir/Character.cpp.i

CMakeFiles/hw6_support.dir/Character.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw6_support.dir/Character.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/Character.cpp" -o CMakeFiles/hw6_support.dir/Character.cpp.s

CMakeFiles/hw6_support.dir/Character.cpp.o.requires:

.PHONY : CMakeFiles/hw6_support.dir/Character.cpp.o.requires

CMakeFiles/hw6_support.dir/Character.cpp.o.provides: CMakeFiles/hw6_support.dir/Character.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw6_support.dir/build.make CMakeFiles/hw6_support.dir/Character.cpp.o.provides.build
.PHONY : CMakeFiles/hw6_support.dir/Character.cpp.o.provides

CMakeFiles/hw6_support.dir/Character.cpp.o.provides.build: CMakeFiles/hw6_support.dir/Character.cpp.o


CMakeFiles/hw6_support.dir/Store.cpp.o: CMakeFiles/hw6_support.dir/flags.make
CMakeFiles/hw6_support.dir/Store.cpp.o: ../Store.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/hw6_support.dir/Store.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw6_support.dir/Store.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/Store.cpp"

CMakeFiles/hw6_support.dir/Store.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw6_support.dir/Store.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/Store.cpp" > CMakeFiles/hw6_support.dir/Store.cpp.i

CMakeFiles/hw6_support.dir/Store.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw6_support.dir/Store.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/Store.cpp" -o CMakeFiles/hw6_support.dir/Store.cpp.s

CMakeFiles/hw6_support.dir/Store.cpp.o.requires:

.PHONY : CMakeFiles/hw6_support.dir/Store.cpp.o.requires

CMakeFiles/hw6_support.dir/Store.cpp.o.provides: CMakeFiles/hw6_support.dir/Store.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw6_support.dir/build.make CMakeFiles/hw6_support.dir/Store.cpp.o.provides.build
.PHONY : CMakeFiles/hw6_support.dir/Store.cpp.o.provides

CMakeFiles/hw6_support.dir/Store.cpp.o.provides.build: CMakeFiles/hw6_support.dir/Store.cpp.o


CMakeFiles/hw6_support.dir/GameObject.cpp.o: CMakeFiles/hw6_support.dir/flags.make
CMakeFiles/hw6_support.dir/GameObject.cpp.o: ../GameObject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/hw6_support.dir/GameObject.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw6_support.dir/GameObject.cpp.o -c "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/GameObject.cpp"

CMakeFiles/hw6_support.dir/GameObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw6_support.dir/GameObject.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/GameObject.cpp" > CMakeFiles/hw6_support.dir/GameObject.cpp.i

CMakeFiles/hw6_support.dir/GameObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw6_support.dir/GameObject.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/GameObject.cpp" -o CMakeFiles/hw6_support.dir/GameObject.cpp.s

CMakeFiles/hw6_support.dir/GameObject.cpp.o.requires:

.PHONY : CMakeFiles/hw6_support.dir/GameObject.cpp.o.requires

CMakeFiles/hw6_support.dir/GameObject.cpp.o.provides: CMakeFiles/hw6_support.dir/GameObject.cpp.o.requires
	$(MAKE) -f CMakeFiles/hw6_support.dir/build.make CMakeFiles/hw6_support.dir/GameObject.cpp.o.provides.build
.PHONY : CMakeFiles/hw6_support.dir/GameObject.cpp.o.provides

CMakeFiles/hw6_support.dir/GameObject.cpp.o.provides.build: CMakeFiles/hw6_support.dir/GameObject.cpp.o


# Object files for target hw6_support
hw6_support_OBJECTS = \
"CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.o" \
"CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.o" \
"CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.o" \
"CMakeFiles/hw6_support.dir/HealthStatus.cpp.o" \
"CMakeFiles/hw6_support.dir/CharacterBase.cpp.o" \
"CMakeFiles/hw6_support.dir/StoreBase.cpp.o" \
"CMakeFiles/hw6_support.dir/Item.cpp.o" \
"CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.o" \
"CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.o" \
"CMakeFiles/hw6_support.dir/MallGame.cpp.o" \
"CMakeFiles/hw6_support.dir/Character.cpp.o" \
"CMakeFiles/hw6_support.dir/Store.cpp.o" \
"CMakeFiles/hw6_support.dir/GameObject.cpp.o"

# External object files for target hw6_support
hw6_support_EXTERNAL_OBJECTS =

libhw6_support.a: CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.o
libhw6_support.a: CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.o
libhw6_support.a: CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.o
libhw6_support.a: CMakeFiles/hw6_support.dir/HealthStatus.cpp.o
libhw6_support.a: CMakeFiles/hw6_support.dir/CharacterBase.cpp.o
libhw6_support.a: CMakeFiles/hw6_support.dir/StoreBase.cpp.o
libhw6_support.a: CMakeFiles/hw6_support.dir/Item.cpp.o
libhw6_support.a: CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.o
libhw6_support.a: CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.o
libhw6_support.a: CMakeFiles/hw6_support.dir/MallGame.cpp.o
libhw6_support.a: CMakeFiles/hw6_support.dir/Character.cpp.o
libhw6_support.a: CMakeFiles/hw6_support.dir/Store.cpp.o
libhw6_support.a: CMakeFiles/hw6_support.dir/GameObject.cpp.o
libhw6_support.a: CMakeFiles/hw6_support.dir/build.make
libhw6_support.a: CMakeFiles/hw6_support.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX static library libhw6_support.a"
	$(CMAKE_COMMAND) -P CMakeFiles/hw6_support.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw6_support.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hw6_support.dir/build: libhw6_support.a

.PHONY : CMakeFiles/hw6_support.dir/build

CMakeFiles/hw6_support.dir/requires: CMakeFiles/hw6_support.dir/json/jsoncpp.cpp.o.requires
CMakeFiles/hw6_support.dir/requires: CMakeFiles/hw6_support.dir/HW6JsonHelper.cpp.o.requires
CMakeFiles/hw6_support.dir/requires: CMakeFiles/hw6_support.dir/HW6HelperFunctions.cpp.o.requires
CMakeFiles/hw6_support.dir/requires: CMakeFiles/hw6_support.dir/HealthStatus.cpp.o.requires
CMakeFiles/hw6_support.dir/requires: CMakeFiles/hw6_support.dir/CharacterBase.cpp.o.requires
CMakeFiles/hw6_support.dir/requires: CMakeFiles/hw6_support.dir/StoreBase.cpp.o.requires
CMakeFiles/hw6_support.dir/requires: CMakeFiles/hw6_support.dir/Item.cpp.o.requires
CMakeFiles/hw6_support.dir/requires: CMakeFiles/hw6_support.dir/StoreInventoryItem.cpp.o.requires
CMakeFiles/hw6_support.dir/requires: CMakeFiles/hw6_support.dir/PurchaseRecord.cpp.o.requires
CMakeFiles/hw6_support.dir/requires: CMakeFiles/hw6_support.dir/MallGame.cpp.o.requires
CMakeFiles/hw6_support.dir/requires: CMakeFiles/hw6_support.dir/Character.cpp.o.requires
CMakeFiles/hw6_support.dir/requires: CMakeFiles/hw6_support.dir/Store.cpp.o.requires
CMakeFiles/hw6_support.dir/requires: CMakeFiles/hw6_support.dir/GameObject.cpp.o.requires

.PHONY : CMakeFiles/hw6_support.dir/requires

CMakeFiles/hw6_support.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hw6_support.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hw6_support.dir/clean

CMakeFiles/hw6_support.dir/depend:
	cd "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6" "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6" "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug" "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug" "/cygdrive/d/Student/cie/CIE Svn/wnbrg/homework/hw6/cmake-build-debug/CMakeFiles/hw6_support.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/hw6_support.dir/depend

