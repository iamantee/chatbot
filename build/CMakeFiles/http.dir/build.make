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
include CMakeFiles/http.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/http.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/http.dir/flags.make

CMakeFiles/http.dir/modules/http/http.cpp.o: CMakeFiles/http.dir/flags.make
CMakeFiles/http.dir/modules/http/http.cpp.o: ../modules/http/http.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Antee/projects/chatbot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/http.dir/modules/http/http.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/http.dir/modules/http/http.cpp.o -c /Users/Antee/projects/chatbot/modules/http/http.cpp

CMakeFiles/http.dir/modules/http/http.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/http.dir/modules/http/http.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Antee/projects/chatbot/modules/http/http.cpp > CMakeFiles/http.dir/modules/http/http.cpp.i

CMakeFiles/http.dir/modules/http/http.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/http.dir/modules/http/http.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Antee/projects/chatbot/modules/http/http.cpp -o CMakeFiles/http.dir/modules/http/http.cpp.s

# Object files for target http
http_OBJECTS = \
"CMakeFiles/http.dir/modules/http/http.cpp.o"

# External object files for target http
http_EXTERNAL_OBJECTS =

bin/http: CMakeFiles/http.dir/modules/http/http.cpp.o
bin/http: CMakeFiles/http.dir/build.make
bin/http: CMakeFiles/http.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Antee/projects/chatbot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/http"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/http.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/http.dir/build: bin/http

.PHONY : CMakeFiles/http.dir/build

CMakeFiles/http.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/http.dir/cmake_clean.cmake
.PHONY : CMakeFiles/http.dir/clean

CMakeFiles/http.dir/depend:
	cd /Users/Antee/projects/chatbot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Antee/projects/chatbot /Users/Antee/projects/chatbot /Users/Antee/projects/chatbot/build /Users/Antee/projects/chatbot/build /Users/Antee/projects/chatbot/build/CMakeFiles/http.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/http.dir/depend

