# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.12.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.12.3/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Antee/projects/chatbot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Antee/projects/chatbot/build

# Include any dependencies generated for this target.
include CMakeFiles/md5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/md5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/md5.dir/flags.make

CMakeFiles/md5.dir/md5.cpp.o: CMakeFiles/md5.dir/flags.make
CMakeFiles/md5.dir/md5.cpp.o: ../md5.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Antee/projects/chatbot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/md5.dir/md5.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/md5.dir/md5.cpp.o -c /Users/Antee/projects/chatbot/md5.cpp

CMakeFiles/md5.dir/md5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/md5.dir/md5.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Antee/projects/chatbot/md5.cpp > CMakeFiles/md5.dir/md5.cpp.i

CMakeFiles/md5.dir/md5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/md5.dir/md5.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Antee/projects/chatbot/md5.cpp -o CMakeFiles/md5.dir/md5.cpp.s

# Object files for target md5
md5_OBJECTS = \
"CMakeFiles/md5.dir/md5.cpp.o"

# External object files for target md5
md5_EXTERNAL_OBJECTS =

bin/md5: CMakeFiles/md5.dir/md5.cpp.o
bin/md5: CMakeFiles/md5.dir/build.make
bin/md5: CMakeFiles/md5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Antee/projects/chatbot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/md5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/md5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/md5.dir/build: bin/md5

.PHONY : CMakeFiles/md5.dir/build

CMakeFiles/md5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/md5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/md5.dir/clean

CMakeFiles/md5.dir/depend:
	cd /Users/Antee/projects/chatbot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Antee/projects/chatbot /Users/Antee/projects/chatbot /Users/Antee/projects/chatbot/build /Users/Antee/projects/chatbot/build /Users/Antee/projects/chatbot/build/CMakeFiles/md5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/md5.dir/depend

