# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /run/media/survari/Survari/Projekte/C++/galdur

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /run/media/survari/Survari/Projekte/C++/galdur

# Include any dependencies generated for this target.
include CMakeFiles/gdi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gdi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gdi.dir/flags.make

CMakeFiles/gdi.dir/main.cpp.o: CMakeFiles/gdi.dir/flags.make
CMakeFiles/gdi.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/run/media/survari/Survari/Projekte/C++/galdur/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gdi.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gdi.dir/main.cpp.o -c /run/media/survari/Survari/Projekte/C++/galdur/main.cpp

CMakeFiles/gdi.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gdi.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /run/media/survari/Survari/Projekte/C++/galdur/main.cpp > CMakeFiles/gdi.dir/main.cpp.i

CMakeFiles/gdi.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gdi.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /run/media/survari/Survari/Projekte/C++/galdur/main.cpp -o CMakeFiles/gdi.dir/main.cpp.s

CMakeFiles/gdi.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/gdi.dir/main.cpp.o.requires

CMakeFiles/gdi.dir/main.cpp.o.provides: CMakeFiles/gdi.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/gdi.dir/build.make CMakeFiles/gdi.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/gdi.dir/main.cpp.o.provides

CMakeFiles/gdi.dir/main.cpp.o.provides.build: CMakeFiles/gdi.dir/main.cpp.o


# Object files for target gdi
gdi_OBJECTS = \
"CMakeFiles/gdi.dir/main.cpp.o"

# External object files for target gdi
gdi_EXTERNAL_OBJECTS =

gdi: CMakeFiles/gdi.dir/main.cpp.o
gdi: CMakeFiles/gdi.dir/build.make
gdi: CMakeFiles/gdi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/run/media/survari/Survari/Projekte/C++/galdur/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable gdi"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gdi.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gdi.dir/build: gdi

.PHONY : CMakeFiles/gdi.dir/build

CMakeFiles/gdi.dir/requires: CMakeFiles/gdi.dir/main.cpp.o.requires

.PHONY : CMakeFiles/gdi.dir/requires

CMakeFiles/gdi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gdi.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gdi.dir/clean

CMakeFiles/gdi.dir/depend:
	cd /run/media/survari/Survari/Projekte/C++/galdur && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /run/media/survari/Survari/Projekte/C++/galdur /run/media/survari/Survari/Projekte/C++/galdur /run/media/survari/Survari/Projekte/C++/galdur /run/media/survari/Survari/Projekte/C++/galdur /run/media/survari/Survari/Projekte/C++/galdur/CMakeFiles/gdi.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gdi.dir/depend
