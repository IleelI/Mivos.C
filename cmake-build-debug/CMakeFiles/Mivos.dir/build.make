# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Users/volcent/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.7142.21/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/volcent/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.7142.21/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Mivos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Mivos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Mivos.dir/flags.make

CMakeFiles/Mivos.dir/main.cpp.o: CMakeFiles/Mivos.dir/flags.make
CMakeFiles/Mivos.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Mivos.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mivos.dir/main.cpp.o -c "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/main.cpp"

CMakeFiles/Mivos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mivos.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/main.cpp" > CMakeFiles/Mivos.dir/main.cpp.i

CMakeFiles/Mivos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mivos.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/main.cpp" -o CMakeFiles/Mivos.dir/main.cpp.s

CMakeFiles/Mivos.dir/Application/Entities/Organism.cpp.o: CMakeFiles/Mivos.dir/flags.make
CMakeFiles/Mivos.dir/Application/Entities/Organism.cpp.o: ../Application/Entities/Organism.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Mivos.dir/Application/Entities/Organism.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mivos.dir/Application/Entities/Organism.cpp.o -c "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Organism.cpp"

CMakeFiles/Mivos.dir/Application/Entities/Organism.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mivos.dir/Application/Entities/Organism.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Organism.cpp" > CMakeFiles/Mivos.dir/Application/Entities/Organism.cpp.i

CMakeFiles/Mivos.dir/Application/Entities/Organism.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mivos.dir/Application/Entities/Organism.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Organism.cpp" -o CMakeFiles/Mivos.dir/Application/Entities/Organism.cpp.s

CMakeFiles/Mivos.dir/Application/Entities/OrganismManager.cpp.o: CMakeFiles/Mivos.dir/flags.make
CMakeFiles/Mivos.dir/Application/Entities/OrganismManager.cpp.o: ../Application/Entities/OrganismManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Mivos.dir/Application/Entities/OrganismManager.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mivos.dir/Application/Entities/OrganismManager.cpp.o -c "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/OrganismManager.cpp"

CMakeFiles/Mivos.dir/Application/Entities/OrganismManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mivos.dir/Application/Entities/OrganismManager.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/OrganismManager.cpp" > CMakeFiles/Mivos.dir/Application/Entities/OrganismManager.cpp.i

CMakeFiles/Mivos.dir/Application/Entities/OrganismManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mivos.dir/Application/Entities/OrganismManager.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/OrganismManager.cpp" -o CMakeFiles/Mivos.dir/Application/Entities/OrganismManager.cpp.s

CMakeFiles/Mivos.dir/Application/Entities/Animals/Animals.cpp.o: CMakeFiles/Mivos.dir/flags.make
CMakeFiles/Mivos.dir/Application/Entities/Animals/Animals.cpp.o: ../Application/Entities/Animals/Animals.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Mivos.dir/Application/Entities/Animals/Animals.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mivos.dir/Application/Entities/Animals/Animals.cpp.o -c "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Animals.cpp"

CMakeFiles/Mivos.dir/Application/Entities/Animals/Animals.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mivos.dir/Application/Entities/Animals/Animals.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Animals.cpp" > CMakeFiles/Mivos.dir/Application/Entities/Animals/Animals.cpp.i

CMakeFiles/Mivos.dir/Application/Entities/Animals/Animals.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mivos.dir/Application/Entities/Animals/Animals.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Animals.cpp" -o CMakeFiles/Mivos.dir/Application/Entities/Animals/Animals.cpp.s

CMakeFiles/Mivos.dir/Application/Entities/Plants/Plants.cpp.o: CMakeFiles/Mivos.dir/flags.make
CMakeFiles/Mivos.dir/Application/Entities/Plants/Plants.cpp.o: ../Application/Entities/Plants/Plants.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Mivos.dir/Application/Entities/Plants/Plants.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mivos.dir/Application/Entities/Plants/Plants.cpp.o -c "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Plants.cpp"

CMakeFiles/Mivos.dir/Application/Entities/Plants/Plants.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mivos.dir/Application/Entities/Plants/Plants.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Plants.cpp" > CMakeFiles/Mivos.dir/Application/Entities/Plants/Plants.cpp.i

CMakeFiles/Mivos.dir/Application/Entities/Plants/Plants.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mivos.dir/Application/Entities/Plants/Plants.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Plants.cpp" -o CMakeFiles/Mivos.dir/Application/Entities/Plants/Plants.cpp.s

CMakeFiles/Mivos.dir/Application/Entities/Animals/Sheep.cpp.o: CMakeFiles/Mivos.dir/flags.make
CMakeFiles/Mivos.dir/Application/Entities/Animals/Sheep.cpp.o: ../Application/Entities/Animals/Sheep.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Mivos.dir/Application/Entities/Animals/Sheep.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mivos.dir/Application/Entities/Animals/Sheep.cpp.o -c "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Sheep.cpp"

CMakeFiles/Mivos.dir/Application/Entities/Animals/Sheep.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mivos.dir/Application/Entities/Animals/Sheep.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Sheep.cpp" > CMakeFiles/Mivos.dir/Application/Entities/Animals/Sheep.cpp.i

CMakeFiles/Mivos.dir/Application/Entities/Animals/Sheep.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mivos.dir/Application/Entities/Animals/Sheep.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Sheep.cpp" -o CMakeFiles/Mivos.dir/Application/Entities/Animals/Sheep.cpp.s

CMakeFiles/Mivos.dir/Application/Entities/Animals/Wolf.cpp.o: CMakeFiles/Mivos.dir/flags.make
CMakeFiles/Mivos.dir/Application/Entities/Animals/Wolf.cpp.o: ../Application/Entities/Animals/Wolf.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Mivos.dir/Application/Entities/Animals/Wolf.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mivos.dir/Application/Entities/Animals/Wolf.cpp.o -c "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Wolf.cpp"

CMakeFiles/Mivos.dir/Application/Entities/Animals/Wolf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mivos.dir/Application/Entities/Animals/Wolf.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Wolf.cpp" > CMakeFiles/Mivos.dir/Application/Entities/Animals/Wolf.cpp.i

CMakeFiles/Mivos.dir/Application/Entities/Animals/Wolf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mivos.dir/Application/Entities/Animals/Wolf.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Wolf.cpp" -o CMakeFiles/Mivos.dir/Application/Entities/Animals/Wolf.cpp.s

CMakeFiles/Mivos.dir/Application/Entities/Animals/Fox.cpp.o: CMakeFiles/Mivos.dir/flags.make
CMakeFiles/Mivos.dir/Application/Entities/Animals/Fox.cpp.o: ../Application/Entities/Animals/Fox.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Mivos.dir/Application/Entities/Animals/Fox.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mivos.dir/Application/Entities/Animals/Fox.cpp.o -c "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Fox.cpp"

CMakeFiles/Mivos.dir/Application/Entities/Animals/Fox.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mivos.dir/Application/Entities/Animals/Fox.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Fox.cpp" > CMakeFiles/Mivos.dir/Application/Entities/Animals/Fox.cpp.i

CMakeFiles/Mivos.dir/Application/Entities/Animals/Fox.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mivos.dir/Application/Entities/Animals/Fox.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Fox.cpp" -o CMakeFiles/Mivos.dir/Application/Entities/Animals/Fox.cpp.s

CMakeFiles/Mivos.dir/Application/Entities/Animals/Turtle.cpp.o: CMakeFiles/Mivos.dir/flags.make
CMakeFiles/Mivos.dir/Application/Entities/Animals/Turtle.cpp.o: ../Application/Entities/Animals/Turtle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Mivos.dir/Application/Entities/Animals/Turtle.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mivos.dir/Application/Entities/Animals/Turtle.cpp.o -c "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Turtle.cpp"

CMakeFiles/Mivos.dir/Application/Entities/Animals/Turtle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mivos.dir/Application/Entities/Animals/Turtle.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Turtle.cpp" > CMakeFiles/Mivos.dir/Application/Entities/Animals/Turtle.cpp.i

CMakeFiles/Mivos.dir/Application/Entities/Animals/Turtle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mivos.dir/Application/Entities/Animals/Turtle.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Turtle.cpp" -o CMakeFiles/Mivos.dir/Application/Entities/Animals/Turtle.cpp.s

CMakeFiles/Mivos.dir/Application/Entities/Animals/Antelope.cpp.o: CMakeFiles/Mivos.dir/flags.make
CMakeFiles/Mivos.dir/Application/Entities/Animals/Antelope.cpp.o: ../Application/Entities/Animals/Antelope.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Mivos.dir/Application/Entities/Animals/Antelope.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mivos.dir/Application/Entities/Animals/Antelope.cpp.o -c "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Antelope.cpp"

CMakeFiles/Mivos.dir/Application/Entities/Animals/Antelope.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mivos.dir/Application/Entities/Animals/Antelope.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Antelope.cpp" > CMakeFiles/Mivos.dir/Application/Entities/Animals/Antelope.cpp.i

CMakeFiles/Mivos.dir/Application/Entities/Animals/Antelope.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mivos.dir/Application/Entities/Animals/Antelope.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Animals/Antelope.cpp" -o CMakeFiles/Mivos.dir/Application/Entities/Animals/Antelope.cpp.s

CMakeFiles/Mivos.dir/Application/Entities/Plants/Grass.cpp.o: CMakeFiles/Mivos.dir/flags.make
CMakeFiles/Mivos.dir/Application/Entities/Plants/Grass.cpp.o: ../Application/Entities/Plants/Grass.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Mivos.dir/Application/Entities/Plants/Grass.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mivos.dir/Application/Entities/Plants/Grass.cpp.o -c "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Grass.cpp"

CMakeFiles/Mivos.dir/Application/Entities/Plants/Grass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mivos.dir/Application/Entities/Plants/Grass.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Grass.cpp" > CMakeFiles/Mivos.dir/Application/Entities/Plants/Grass.cpp.i

CMakeFiles/Mivos.dir/Application/Entities/Plants/Grass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mivos.dir/Application/Entities/Plants/Grass.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Grass.cpp" -o CMakeFiles/Mivos.dir/Application/Entities/Plants/Grass.cpp.s

CMakeFiles/Mivos.dir/Application/Entities/Plants/Dandelion.cpp.o: CMakeFiles/Mivos.dir/flags.make
CMakeFiles/Mivos.dir/Application/Entities/Plants/Dandelion.cpp.o: ../Application/Entities/Plants/Dandelion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Mivos.dir/Application/Entities/Plants/Dandelion.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mivos.dir/Application/Entities/Plants/Dandelion.cpp.o -c "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Dandelion.cpp"

CMakeFiles/Mivos.dir/Application/Entities/Plants/Dandelion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mivos.dir/Application/Entities/Plants/Dandelion.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Dandelion.cpp" > CMakeFiles/Mivos.dir/Application/Entities/Plants/Dandelion.cpp.i

CMakeFiles/Mivos.dir/Application/Entities/Plants/Dandelion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mivos.dir/Application/Entities/Plants/Dandelion.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Dandelion.cpp" -o CMakeFiles/Mivos.dir/Application/Entities/Plants/Dandelion.cpp.s

CMakeFiles/Mivos.dir/Application/Entities/Plants/Guarana.cpp.o: CMakeFiles/Mivos.dir/flags.make
CMakeFiles/Mivos.dir/Application/Entities/Plants/Guarana.cpp.o: ../Application/Entities/Plants/Guarana.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Mivos.dir/Application/Entities/Plants/Guarana.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mivos.dir/Application/Entities/Plants/Guarana.cpp.o -c "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Guarana.cpp"

CMakeFiles/Mivos.dir/Application/Entities/Plants/Guarana.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mivos.dir/Application/Entities/Plants/Guarana.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Guarana.cpp" > CMakeFiles/Mivos.dir/Application/Entities/Plants/Guarana.cpp.i

CMakeFiles/Mivos.dir/Application/Entities/Plants/Guarana.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mivos.dir/Application/Entities/Plants/Guarana.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Guarana.cpp" -o CMakeFiles/Mivos.dir/Application/Entities/Plants/Guarana.cpp.s

CMakeFiles/Mivos.dir/Application/Entities/Plants/Wolfberry.cpp.o: CMakeFiles/Mivos.dir/flags.make
CMakeFiles/Mivos.dir/Application/Entities/Plants/Wolfberry.cpp.o: ../Application/Entities/Plants/Wolfberry.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/Mivos.dir/Application/Entities/Plants/Wolfberry.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mivos.dir/Application/Entities/Plants/Wolfberry.cpp.o -c "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Wolfberry.cpp"

CMakeFiles/Mivos.dir/Application/Entities/Plants/Wolfberry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mivos.dir/Application/Entities/Plants/Wolfberry.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Wolfberry.cpp" > CMakeFiles/Mivos.dir/Application/Entities/Plants/Wolfberry.cpp.i

CMakeFiles/Mivos.dir/Application/Entities/Plants/Wolfberry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mivos.dir/Application/Entities/Plants/Wolfberry.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Wolfberry.cpp" -o CMakeFiles/Mivos.dir/Application/Entities/Plants/Wolfberry.cpp.s

CMakeFiles/Mivos.dir/Application/Entities/Plants/Pineborscht.cpp.o: CMakeFiles/Mivos.dir/flags.make
CMakeFiles/Mivos.dir/Application/Entities/Plants/Pineborscht.cpp.o: ../Application/Entities/Plants/Pineborscht.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/Mivos.dir/Application/Entities/Plants/Pineborscht.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mivos.dir/Application/Entities/Plants/Pineborscht.cpp.o -c "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Pineborscht.cpp"

CMakeFiles/Mivos.dir/Application/Entities/Plants/Pineborscht.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mivos.dir/Application/Entities/Plants/Pineborscht.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Pineborscht.cpp" > CMakeFiles/Mivos.dir/Application/Entities/Plants/Pineborscht.cpp.i

CMakeFiles/Mivos.dir/Application/Entities/Plants/Pineborscht.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mivos.dir/Application/Entities/Plants/Pineborscht.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/Application/Entities/Plants/Pineborscht.cpp" -o CMakeFiles/Mivos.dir/Application/Entities/Plants/Pineborscht.cpp.s

# Object files for target Mivos
Mivos_OBJECTS = \
"CMakeFiles/Mivos.dir/main.cpp.o" \
"CMakeFiles/Mivos.dir/Application/Entities/Organism.cpp.o" \
"CMakeFiles/Mivos.dir/Application/Entities/OrganismManager.cpp.o" \
"CMakeFiles/Mivos.dir/Application/Entities/Animals/Animals.cpp.o" \
"CMakeFiles/Mivos.dir/Application/Entities/Plants/Plants.cpp.o" \
"CMakeFiles/Mivos.dir/Application/Entities/Animals/Sheep.cpp.o" \
"CMakeFiles/Mivos.dir/Application/Entities/Animals/Wolf.cpp.o" \
"CMakeFiles/Mivos.dir/Application/Entities/Animals/Fox.cpp.o" \
"CMakeFiles/Mivos.dir/Application/Entities/Animals/Turtle.cpp.o" \
"CMakeFiles/Mivos.dir/Application/Entities/Animals/Antelope.cpp.o" \
"CMakeFiles/Mivos.dir/Application/Entities/Plants/Grass.cpp.o" \
"CMakeFiles/Mivos.dir/Application/Entities/Plants/Dandelion.cpp.o" \
"CMakeFiles/Mivos.dir/Application/Entities/Plants/Guarana.cpp.o" \
"CMakeFiles/Mivos.dir/Application/Entities/Plants/Wolfberry.cpp.o" \
"CMakeFiles/Mivos.dir/Application/Entities/Plants/Pineborscht.cpp.o"

# External object files for target Mivos
Mivos_EXTERNAL_OBJECTS =

Mivos: CMakeFiles/Mivos.dir/main.cpp.o
Mivos: CMakeFiles/Mivos.dir/Application/Entities/Organism.cpp.o
Mivos: CMakeFiles/Mivos.dir/Application/Entities/OrganismManager.cpp.o
Mivos: CMakeFiles/Mivos.dir/Application/Entities/Animals/Animals.cpp.o
Mivos: CMakeFiles/Mivos.dir/Application/Entities/Plants/Plants.cpp.o
Mivos: CMakeFiles/Mivos.dir/Application/Entities/Animals/Sheep.cpp.o
Mivos: CMakeFiles/Mivos.dir/Application/Entities/Animals/Wolf.cpp.o
Mivos: CMakeFiles/Mivos.dir/Application/Entities/Animals/Fox.cpp.o
Mivos: CMakeFiles/Mivos.dir/Application/Entities/Animals/Turtle.cpp.o
Mivos: CMakeFiles/Mivos.dir/Application/Entities/Animals/Antelope.cpp.o
Mivos: CMakeFiles/Mivos.dir/Application/Entities/Plants/Grass.cpp.o
Mivos: CMakeFiles/Mivos.dir/Application/Entities/Plants/Dandelion.cpp.o
Mivos: CMakeFiles/Mivos.dir/Application/Entities/Plants/Guarana.cpp.o
Mivos: CMakeFiles/Mivos.dir/Application/Entities/Plants/Wolfberry.cpp.o
Mivos: CMakeFiles/Mivos.dir/Application/Entities/Plants/Pineborscht.cpp.o
Mivos: CMakeFiles/Mivos.dir/build.make
Mivos: /Library/Developer/CommandLineTools/SDKs/MacOSX11.3.sdk/usr/lib/libcurses.tbd
Mivos: /Library/Developer/CommandLineTools/SDKs/MacOSX11.3.sdk/usr/lib/libform.tbd
Mivos: CMakeFiles/Mivos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX executable Mivos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Mivos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Mivos.dir/build: Mivos

.PHONY : CMakeFiles/Mivos.dir/build

CMakeFiles/Mivos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Mivos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Mivos.dir/clean

CMakeFiles/Mivos.dir/depend:
	cd "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos" "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos" "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug" "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug" "/Users/volcent/Documents/Studia/Projekty/PO/1. Etap/Mivos/cmake-build-debug/CMakeFiles/Mivos.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Mivos.dir/depend

