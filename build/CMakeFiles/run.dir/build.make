# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.15.5/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.15.5/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lukethayer/sources/BladeGen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lukethayer/sources/BladeGen/build

# Include any dependencies generated for this target.
include CMakeFiles/run.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/run.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/run.dir/flags.make

CMakeFiles/run.dir/src/BladeGen.cpp.o: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/src/BladeGen.cpp.o: ../src/BladeGen.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lukethayer/sources/BladeGen/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/run.dir/src/BladeGen.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run.dir/src/BladeGen.cpp.o -c /Users/lukethayer/sources/BladeGen/src/BladeGen.cpp

CMakeFiles/run.dir/src/BladeGen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/src/BladeGen.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lukethayer/sources/BladeGen/src/BladeGen.cpp > CMakeFiles/run.dir/src/BladeGen.cpp.i

CMakeFiles/run.dir/src/BladeGen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/src/BladeGen.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lukethayer/sources/BladeGen/src/BladeGen.cpp -o CMakeFiles/run.dir/src/BladeGen.cpp.s

CMakeFiles/run.dir/src/EncoderHelpers.cpp.o: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/src/EncoderHelpers.cpp.o: ../src/EncoderHelpers.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lukethayer/sources/BladeGen/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/run.dir/src/EncoderHelpers.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run.dir/src/EncoderHelpers.cpp.o -c /Users/lukethayer/sources/BladeGen/src/EncoderHelpers.cpp

CMakeFiles/run.dir/src/EncoderHelpers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/src/EncoderHelpers.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lukethayer/sources/BladeGen/src/EncoderHelpers.cpp > CMakeFiles/run.dir/src/EncoderHelpers.cpp.i

CMakeFiles/run.dir/src/EncoderHelpers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/src/EncoderHelpers.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lukethayer/sources/BladeGen/src/EncoderHelpers.cpp -o CMakeFiles/run.dir/src/EncoderHelpers.cpp.s

CMakeFiles/run.dir/src/RGBtoHSV.cpp.o: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/src/RGBtoHSV.cpp.o: ../src/RGBtoHSV.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lukethayer/sources/BladeGen/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/run.dir/src/RGBtoHSV.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run.dir/src/RGBtoHSV.cpp.o -c /Users/lukethayer/sources/BladeGen/src/RGBtoHSV.cpp

CMakeFiles/run.dir/src/RGBtoHSV.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/src/RGBtoHSV.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lukethayer/sources/BladeGen/src/RGBtoHSV.cpp > CMakeFiles/run.dir/src/RGBtoHSV.cpp.i

CMakeFiles/run.dir/src/RGBtoHSV.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/src/RGBtoHSV.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lukethayer/sources/BladeGen/src/RGBtoHSV.cpp -o CMakeFiles/run.dir/src/RGBtoHSV.cpp.s

CMakeFiles/run.dir/src/lodepng.cpp.o: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/src/lodepng.cpp.o: ../src/lodepng.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lukethayer/sources/BladeGen/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/run.dir/src/lodepng.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run.dir/src/lodepng.cpp.o -c /Users/lukethayer/sources/BladeGen/src/lodepng.cpp

CMakeFiles/run.dir/src/lodepng.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/src/lodepng.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lukethayer/sources/BladeGen/src/lodepng.cpp > CMakeFiles/run.dir/src/lodepng.cpp.i

CMakeFiles/run.dir/src/lodepng.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/src/lodepng.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lukethayer/sources/BladeGen/src/lodepng.cpp -o CMakeFiles/run.dir/src/lodepng.cpp.s

CMakeFiles/run.dir/src/main.cpp.o: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lukethayer/sources/BladeGen/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/run.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run.dir/src/main.cpp.o -c /Users/lukethayer/sources/BladeGen/src/main.cpp

CMakeFiles/run.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lukethayer/sources/BladeGen/src/main.cpp > CMakeFiles/run.dir/src/main.cpp.i

CMakeFiles/run.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lukethayer/sources/BladeGen/src/main.cpp -o CMakeFiles/run.dir/src/main.cpp.s

CMakeFiles/run.dir/src/pngDrawTools.cpp.o: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/src/pngDrawTools.cpp.o: ../src/pngDrawTools.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lukethayer/sources/BladeGen/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/run.dir/src/pngDrawTools.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run.dir/src/pngDrawTools.cpp.o -c /Users/lukethayer/sources/BladeGen/src/pngDrawTools.cpp

CMakeFiles/run.dir/src/pngDrawTools.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/src/pngDrawTools.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lukethayer/sources/BladeGen/src/pngDrawTools.cpp > CMakeFiles/run.dir/src/pngDrawTools.cpp.i

CMakeFiles/run.dir/src/pngDrawTools.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/src/pngDrawTools.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lukethayer/sources/BladeGen/src/pngDrawTools.cpp -o CMakeFiles/run.dir/src/pngDrawTools.cpp.s

# Object files for target run
run_OBJECTS = \
"CMakeFiles/run.dir/src/BladeGen.cpp.o" \
"CMakeFiles/run.dir/src/EncoderHelpers.cpp.o" \
"CMakeFiles/run.dir/src/RGBtoHSV.cpp.o" \
"CMakeFiles/run.dir/src/lodepng.cpp.o" \
"CMakeFiles/run.dir/src/main.cpp.o" \
"CMakeFiles/run.dir/src/pngDrawTools.cpp.o"

# External object files for target run
run_EXTERNAL_OBJECTS =

run: CMakeFiles/run.dir/src/BladeGen.cpp.o
run: CMakeFiles/run.dir/src/EncoderHelpers.cpp.o
run: CMakeFiles/run.dir/src/RGBtoHSV.cpp.o
run: CMakeFiles/run.dir/src/lodepng.cpp.o
run: CMakeFiles/run.dir/src/main.cpp.o
run: CMakeFiles/run.dir/src/pngDrawTools.cpp.o
run: CMakeFiles/run.dir/build.make
run: CMakeFiles/run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lukethayer/sources/BladeGen/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable run"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/run.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/run.dir/build: run

.PHONY : CMakeFiles/run.dir/build

CMakeFiles/run.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/run.dir/cmake_clean.cmake
.PHONY : CMakeFiles/run.dir/clean

CMakeFiles/run.dir/depend:
	cd /Users/lukethayer/sources/BladeGen/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lukethayer/sources/BladeGen /Users/lukethayer/sources/BladeGen /Users/lukethayer/sources/BladeGen/build /Users/lukethayer/sources/BladeGen/build /Users/lukethayer/sources/BladeGen/build/CMakeFiles/run.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/run.dir/depend
