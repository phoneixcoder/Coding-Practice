# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Coding questions"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Coding questions\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Coding_questions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Coding_questions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Coding_questions.dir/flags.make

CMakeFiles/Coding_questions.dir/Game_with_Nos.cpp.obj: CMakeFiles/Coding_questions.dir/flags.make
CMakeFiles/Coding_questions.dir/Game_with_Nos.cpp.obj: ../Game\ with\ Nos.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Coding questions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Coding_questions.dir/Game_with_Nos.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Coding_questions.dir\Game_with_Nos.cpp.obj -c "D:\Coding questions\Game with Nos.cpp"

CMakeFiles/Coding_questions.dir/Game_with_Nos.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Coding_questions.dir/Game_with_Nos.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Coding questions\Game with Nos.cpp" > CMakeFiles\Coding_questions.dir\Game_with_Nos.cpp.i

CMakeFiles/Coding_questions.dir/Game_with_Nos.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Coding_questions.dir/Game_with_Nos.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Coding questions\Game with Nos.cpp" -o CMakeFiles\Coding_questions.dir\Game_with_Nos.cpp.s

# Object files for target Coding_questions
Coding_questions_OBJECTS = \
"CMakeFiles/Coding_questions.dir/Game_with_Nos.cpp.obj"

# External object files for target Coding_questions
Coding_questions_EXTERNAL_OBJECTS =

Coding_questions.exe: CMakeFiles/Coding_questions.dir/Game_with_Nos.cpp.obj
Coding_questions.exe: CMakeFiles/Coding_questions.dir/build.make
Coding_questions.exe: CMakeFiles/Coding_questions.dir/linklibs.rsp
Coding_questions.exe: CMakeFiles/Coding_questions.dir/objects1.rsp
Coding_questions.exe: CMakeFiles/Coding_questions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Coding questions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Coding_questions.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Coding_questions.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Coding_questions.dir/build: Coding_questions.exe

.PHONY : CMakeFiles/Coding_questions.dir/build

CMakeFiles/Coding_questions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Coding_questions.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Coding_questions.dir/clean

CMakeFiles/Coding_questions.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Coding questions" "D:\Coding questions" "D:\Coding questions\cmake-build-debug" "D:\Coding questions\cmake-build-debug" "D:\Coding questions\cmake-build-debug\CMakeFiles\Coding_questions.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Coding_questions.dir/depend

