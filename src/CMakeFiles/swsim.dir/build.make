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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.7.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.7.0/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nath/sevenwonders

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nath/sevenwonders

# Include any dependencies generated for this target.
include src/CMakeFiles/swsim.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/swsim.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/swsim.dir/flags.make

src/CMakeFiles/swsim.dir/main.cpp.o: src/CMakeFiles/swsim.dir/flags.make
src/CMakeFiles/swsim.dir/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nath/sevenwonders/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/swsim.dir/main.cpp.o"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/swsim.dir/main.cpp.o -c /Users/nath/sevenwonders/src/main.cpp

src/CMakeFiles/swsim.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/swsim.dir/main.cpp.i"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nath/sevenwonders/src/main.cpp > CMakeFiles/swsim.dir/main.cpp.i

src/CMakeFiles/swsim.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/swsim.dir/main.cpp.s"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nath/sevenwonders/src/main.cpp -o CMakeFiles/swsim.dir/main.cpp.s

src/CMakeFiles/swsim.dir/main.cpp.o.requires:

.PHONY : src/CMakeFiles/swsim.dir/main.cpp.o.requires

src/CMakeFiles/swsim.dir/main.cpp.o.provides: src/CMakeFiles/swsim.dir/main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/swsim.dir/build.make src/CMakeFiles/swsim.dir/main.cpp.o.provides.build
.PHONY : src/CMakeFiles/swsim.dir/main.cpp.o.provides

src/CMakeFiles/swsim.dir/main.cpp.o.provides.build: src/CMakeFiles/swsim.dir/main.cpp.o


src/CMakeFiles/swsim.dir/cards/BlueCard.cpp.o: src/CMakeFiles/swsim.dir/flags.make
src/CMakeFiles/swsim.dir/cards/BlueCard.cpp.o: src/cards/BlueCard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nath/sevenwonders/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/swsim.dir/cards/BlueCard.cpp.o"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/swsim.dir/cards/BlueCard.cpp.o -c /Users/nath/sevenwonders/src/cards/BlueCard.cpp

src/CMakeFiles/swsim.dir/cards/BlueCard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/swsim.dir/cards/BlueCard.cpp.i"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nath/sevenwonders/src/cards/BlueCard.cpp > CMakeFiles/swsim.dir/cards/BlueCard.cpp.i

src/CMakeFiles/swsim.dir/cards/BlueCard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/swsim.dir/cards/BlueCard.cpp.s"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nath/sevenwonders/src/cards/BlueCard.cpp -o CMakeFiles/swsim.dir/cards/BlueCard.cpp.s

src/CMakeFiles/swsim.dir/cards/BlueCard.cpp.o.requires:

.PHONY : src/CMakeFiles/swsim.dir/cards/BlueCard.cpp.o.requires

src/CMakeFiles/swsim.dir/cards/BlueCard.cpp.o.provides: src/CMakeFiles/swsim.dir/cards/BlueCard.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/swsim.dir/build.make src/CMakeFiles/swsim.dir/cards/BlueCard.cpp.o.provides.build
.PHONY : src/CMakeFiles/swsim.dir/cards/BlueCard.cpp.o.provides

src/CMakeFiles/swsim.dir/cards/BlueCard.cpp.o.provides.build: src/CMakeFiles/swsim.dir/cards/BlueCard.cpp.o


src/CMakeFiles/swsim.dir/cards/Card.cpp.o: src/CMakeFiles/swsim.dir/flags.make
src/CMakeFiles/swsim.dir/cards/Card.cpp.o: src/cards/Card.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nath/sevenwonders/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/swsim.dir/cards/Card.cpp.o"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/swsim.dir/cards/Card.cpp.o -c /Users/nath/sevenwonders/src/cards/Card.cpp

src/CMakeFiles/swsim.dir/cards/Card.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/swsim.dir/cards/Card.cpp.i"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nath/sevenwonders/src/cards/Card.cpp > CMakeFiles/swsim.dir/cards/Card.cpp.i

src/CMakeFiles/swsim.dir/cards/Card.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/swsim.dir/cards/Card.cpp.s"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nath/sevenwonders/src/cards/Card.cpp -o CMakeFiles/swsim.dir/cards/Card.cpp.s

src/CMakeFiles/swsim.dir/cards/Card.cpp.o.requires:

.PHONY : src/CMakeFiles/swsim.dir/cards/Card.cpp.o.requires

src/CMakeFiles/swsim.dir/cards/Card.cpp.o.provides: src/CMakeFiles/swsim.dir/cards/Card.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/swsim.dir/build.make src/CMakeFiles/swsim.dir/cards/Card.cpp.o.provides.build
.PHONY : src/CMakeFiles/swsim.dir/cards/Card.cpp.o.provides

src/CMakeFiles/swsim.dir/cards/Card.cpp.o.provides.build: src/CMakeFiles/swsim.dir/cards/Card.cpp.o


src/CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.o: src/CMakeFiles/swsim.dir/flags.make
src/CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.o: src/cards/MilitaryCard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nath/sevenwonders/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.o"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.o -c /Users/nath/sevenwonders/src/cards/MilitaryCard.cpp

src/CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.i"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nath/sevenwonders/src/cards/MilitaryCard.cpp > CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.i

src/CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.s"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nath/sevenwonders/src/cards/MilitaryCard.cpp -o CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.s

src/CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.o.requires:

.PHONY : src/CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.o.requires

src/CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.o.provides: src/CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/swsim.dir/build.make src/CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.o.provides.build
.PHONY : src/CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.o.provides

src/CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.o.provides.build: src/CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.o


src/CMakeFiles/swsim.dir/cards/ResourceCard.cpp.o: src/CMakeFiles/swsim.dir/flags.make
src/CMakeFiles/swsim.dir/cards/ResourceCard.cpp.o: src/cards/ResourceCard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nath/sevenwonders/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/swsim.dir/cards/ResourceCard.cpp.o"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/swsim.dir/cards/ResourceCard.cpp.o -c /Users/nath/sevenwonders/src/cards/ResourceCard.cpp

src/CMakeFiles/swsim.dir/cards/ResourceCard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/swsim.dir/cards/ResourceCard.cpp.i"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nath/sevenwonders/src/cards/ResourceCard.cpp > CMakeFiles/swsim.dir/cards/ResourceCard.cpp.i

src/CMakeFiles/swsim.dir/cards/ResourceCard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/swsim.dir/cards/ResourceCard.cpp.s"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nath/sevenwonders/src/cards/ResourceCard.cpp -o CMakeFiles/swsim.dir/cards/ResourceCard.cpp.s

src/CMakeFiles/swsim.dir/cards/ResourceCard.cpp.o.requires:

.PHONY : src/CMakeFiles/swsim.dir/cards/ResourceCard.cpp.o.requires

src/CMakeFiles/swsim.dir/cards/ResourceCard.cpp.o.provides: src/CMakeFiles/swsim.dir/cards/ResourceCard.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/swsim.dir/build.make src/CMakeFiles/swsim.dir/cards/ResourceCard.cpp.o.provides.build
.PHONY : src/CMakeFiles/swsim.dir/cards/ResourceCard.cpp.o.provides

src/CMakeFiles/swsim.dir/cards/ResourceCard.cpp.o.provides.build: src/CMakeFiles/swsim.dir/cards/ResourceCard.cpp.o


src/CMakeFiles/swsim.dir/cards/ScienceCard.cpp.o: src/CMakeFiles/swsim.dir/flags.make
src/CMakeFiles/swsim.dir/cards/ScienceCard.cpp.o: src/cards/ScienceCard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nath/sevenwonders/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/swsim.dir/cards/ScienceCard.cpp.o"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/swsim.dir/cards/ScienceCard.cpp.o -c /Users/nath/sevenwonders/src/cards/ScienceCard.cpp

src/CMakeFiles/swsim.dir/cards/ScienceCard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/swsim.dir/cards/ScienceCard.cpp.i"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nath/sevenwonders/src/cards/ScienceCard.cpp > CMakeFiles/swsim.dir/cards/ScienceCard.cpp.i

src/CMakeFiles/swsim.dir/cards/ScienceCard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/swsim.dir/cards/ScienceCard.cpp.s"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nath/sevenwonders/src/cards/ScienceCard.cpp -o CMakeFiles/swsim.dir/cards/ScienceCard.cpp.s

src/CMakeFiles/swsim.dir/cards/ScienceCard.cpp.o.requires:

.PHONY : src/CMakeFiles/swsim.dir/cards/ScienceCard.cpp.o.requires

src/CMakeFiles/swsim.dir/cards/ScienceCard.cpp.o.provides: src/CMakeFiles/swsim.dir/cards/ScienceCard.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/swsim.dir/build.make src/CMakeFiles/swsim.dir/cards/ScienceCard.cpp.o.provides.build
.PHONY : src/CMakeFiles/swsim.dir/cards/ScienceCard.cpp.o.provides

src/CMakeFiles/swsim.dir/cards/ScienceCard.cpp.o.provides.build: src/CMakeFiles/swsim.dir/cards/ScienceCard.cpp.o


src/CMakeFiles/swsim.dir/cards/GuildCard.cpp.o: src/CMakeFiles/swsim.dir/flags.make
src/CMakeFiles/swsim.dir/cards/GuildCard.cpp.o: src/cards/GuildCard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nath/sevenwonders/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/swsim.dir/cards/GuildCard.cpp.o"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/swsim.dir/cards/GuildCard.cpp.o -c /Users/nath/sevenwonders/src/cards/GuildCard.cpp

src/CMakeFiles/swsim.dir/cards/GuildCard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/swsim.dir/cards/GuildCard.cpp.i"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nath/sevenwonders/src/cards/GuildCard.cpp > CMakeFiles/swsim.dir/cards/GuildCard.cpp.i

src/CMakeFiles/swsim.dir/cards/GuildCard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/swsim.dir/cards/GuildCard.cpp.s"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nath/sevenwonders/src/cards/GuildCard.cpp -o CMakeFiles/swsim.dir/cards/GuildCard.cpp.s

src/CMakeFiles/swsim.dir/cards/GuildCard.cpp.o.requires:

.PHONY : src/CMakeFiles/swsim.dir/cards/GuildCard.cpp.o.requires

src/CMakeFiles/swsim.dir/cards/GuildCard.cpp.o.provides: src/CMakeFiles/swsim.dir/cards/GuildCard.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/swsim.dir/build.make src/CMakeFiles/swsim.dir/cards/GuildCard.cpp.o.provides.build
.PHONY : src/CMakeFiles/swsim.dir/cards/GuildCard.cpp.o.provides

src/CMakeFiles/swsim.dir/cards/GuildCard.cpp.o.provides.build: src/CMakeFiles/swsim.dir/cards/GuildCard.cpp.o


src/CMakeFiles/swsim.dir/components/Military.cpp.o: src/CMakeFiles/swsim.dir/flags.make
src/CMakeFiles/swsim.dir/components/Military.cpp.o: src/components/Military.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nath/sevenwonders/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/swsim.dir/components/Military.cpp.o"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/swsim.dir/components/Military.cpp.o -c /Users/nath/sevenwonders/src/components/Military.cpp

src/CMakeFiles/swsim.dir/components/Military.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/swsim.dir/components/Military.cpp.i"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nath/sevenwonders/src/components/Military.cpp > CMakeFiles/swsim.dir/components/Military.cpp.i

src/CMakeFiles/swsim.dir/components/Military.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/swsim.dir/components/Military.cpp.s"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nath/sevenwonders/src/components/Military.cpp -o CMakeFiles/swsim.dir/components/Military.cpp.s

src/CMakeFiles/swsim.dir/components/Military.cpp.o.requires:

.PHONY : src/CMakeFiles/swsim.dir/components/Military.cpp.o.requires

src/CMakeFiles/swsim.dir/components/Military.cpp.o.provides: src/CMakeFiles/swsim.dir/components/Military.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/swsim.dir/build.make src/CMakeFiles/swsim.dir/components/Military.cpp.o.provides.build
.PHONY : src/CMakeFiles/swsim.dir/components/Military.cpp.o.provides

src/CMakeFiles/swsim.dir/components/Military.cpp.o.provides.build: src/CMakeFiles/swsim.dir/components/Military.cpp.o


src/CMakeFiles/swsim.dir/components/Resource.cpp.o: src/CMakeFiles/swsim.dir/flags.make
src/CMakeFiles/swsim.dir/components/Resource.cpp.o: src/components/Resource.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nath/sevenwonders/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/CMakeFiles/swsim.dir/components/Resource.cpp.o"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/swsim.dir/components/Resource.cpp.o -c /Users/nath/sevenwonders/src/components/Resource.cpp

src/CMakeFiles/swsim.dir/components/Resource.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/swsim.dir/components/Resource.cpp.i"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nath/sevenwonders/src/components/Resource.cpp > CMakeFiles/swsim.dir/components/Resource.cpp.i

src/CMakeFiles/swsim.dir/components/Resource.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/swsim.dir/components/Resource.cpp.s"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nath/sevenwonders/src/components/Resource.cpp -o CMakeFiles/swsim.dir/components/Resource.cpp.s

src/CMakeFiles/swsim.dir/components/Resource.cpp.o.requires:

.PHONY : src/CMakeFiles/swsim.dir/components/Resource.cpp.o.requires

src/CMakeFiles/swsim.dir/components/Resource.cpp.o.provides: src/CMakeFiles/swsim.dir/components/Resource.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/swsim.dir/build.make src/CMakeFiles/swsim.dir/components/Resource.cpp.o.provides.build
.PHONY : src/CMakeFiles/swsim.dir/components/Resource.cpp.o.provides

src/CMakeFiles/swsim.dir/components/Resource.cpp.o.provides.build: src/CMakeFiles/swsim.dir/components/Resource.cpp.o


src/CMakeFiles/swsim.dir/components/Science.cpp.o: src/CMakeFiles/swsim.dir/flags.make
src/CMakeFiles/swsim.dir/components/Science.cpp.o: src/components/Science.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nath/sevenwonders/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/CMakeFiles/swsim.dir/components/Science.cpp.o"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/swsim.dir/components/Science.cpp.o -c /Users/nath/sevenwonders/src/components/Science.cpp

src/CMakeFiles/swsim.dir/components/Science.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/swsim.dir/components/Science.cpp.i"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nath/sevenwonders/src/components/Science.cpp > CMakeFiles/swsim.dir/components/Science.cpp.i

src/CMakeFiles/swsim.dir/components/Science.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/swsim.dir/components/Science.cpp.s"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nath/sevenwonders/src/components/Science.cpp -o CMakeFiles/swsim.dir/components/Science.cpp.s

src/CMakeFiles/swsim.dir/components/Science.cpp.o.requires:

.PHONY : src/CMakeFiles/swsim.dir/components/Science.cpp.o.requires

src/CMakeFiles/swsim.dir/components/Science.cpp.o.provides: src/CMakeFiles/swsim.dir/components/Science.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/swsim.dir/build.make src/CMakeFiles/swsim.dir/components/Science.cpp.o.provides.build
.PHONY : src/CMakeFiles/swsim.dir/components/Science.cpp.o.provides

src/CMakeFiles/swsim.dir/components/Science.cpp.o.provides.build: src/CMakeFiles/swsim.dir/components/Science.cpp.o


src/CMakeFiles/swsim.dir/game/ArgProcessor.cpp.o: src/CMakeFiles/swsim.dir/flags.make
src/CMakeFiles/swsim.dir/game/ArgProcessor.cpp.o: src/game/ArgProcessor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nath/sevenwonders/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/CMakeFiles/swsim.dir/game/ArgProcessor.cpp.o"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/swsim.dir/game/ArgProcessor.cpp.o -c /Users/nath/sevenwonders/src/game/ArgProcessor.cpp

src/CMakeFiles/swsim.dir/game/ArgProcessor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/swsim.dir/game/ArgProcessor.cpp.i"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nath/sevenwonders/src/game/ArgProcessor.cpp > CMakeFiles/swsim.dir/game/ArgProcessor.cpp.i

src/CMakeFiles/swsim.dir/game/ArgProcessor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/swsim.dir/game/ArgProcessor.cpp.s"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nath/sevenwonders/src/game/ArgProcessor.cpp -o CMakeFiles/swsim.dir/game/ArgProcessor.cpp.s

src/CMakeFiles/swsim.dir/game/ArgProcessor.cpp.o.requires:

.PHONY : src/CMakeFiles/swsim.dir/game/ArgProcessor.cpp.o.requires

src/CMakeFiles/swsim.dir/game/ArgProcessor.cpp.o.provides: src/CMakeFiles/swsim.dir/game/ArgProcessor.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/swsim.dir/build.make src/CMakeFiles/swsim.dir/game/ArgProcessor.cpp.o.provides.build
.PHONY : src/CMakeFiles/swsim.dir/game/ArgProcessor.cpp.o.provides

src/CMakeFiles/swsim.dir/game/ArgProcessor.cpp.o.provides.build: src/CMakeFiles/swsim.dir/game/ArgProcessor.cpp.o


src/CMakeFiles/swsim.dir/game/Deck.cpp.o: src/CMakeFiles/swsim.dir/flags.make
src/CMakeFiles/swsim.dir/game/Deck.cpp.o: src/game/Deck.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nath/sevenwonders/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object src/CMakeFiles/swsim.dir/game/Deck.cpp.o"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/swsim.dir/game/Deck.cpp.o -c /Users/nath/sevenwonders/src/game/Deck.cpp

src/CMakeFiles/swsim.dir/game/Deck.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/swsim.dir/game/Deck.cpp.i"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nath/sevenwonders/src/game/Deck.cpp > CMakeFiles/swsim.dir/game/Deck.cpp.i

src/CMakeFiles/swsim.dir/game/Deck.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/swsim.dir/game/Deck.cpp.s"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nath/sevenwonders/src/game/Deck.cpp -o CMakeFiles/swsim.dir/game/Deck.cpp.s

src/CMakeFiles/swsim.dir/game/Deck.cpp.o.requires:

.PHONY : src/CMakeFiles/swsim.dir/game/Deck.cpp.o.requires

src/CMakeFiles/swsim.dir/game/Deck.cpp.o.provides: src/CMakeFiles/swsim.dir/game/Deck.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/swsim.dir/build.make src/CMakeFiles/swsim.dir/game/Deck.cpp.o.provides.build
.PHONY : src/CMakeFiles/swsim.dir/game/Deck.cpp.o.provides

src/CMakeFiles/swsim.dir/game/Deck.cpp.o.provides.build: src/CMakeFiles/swsim.dir/game/Deck.cpp.o


src/CMakeFiles/swsim.dir/game/Game.cpp.o: src/CMakeFiles/swsim.dir/flags.make
src/CMakeFiles/swsim.dir/game/Game.cpp.o: src/game/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nath/sevenwonders/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object src/CMakeFiles/swsim.dir/game/Game.cpp.o"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/swsim.dir/game/Game.cpp.o -c /Users/nath/sevenwonders/src/game/Game.cpp

src/CMakeFiles/swsim.dir/game/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/swsim.dir/game/Game.cpp.i"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nath/sevenwonders/src/game/Game.cpp > CMakeFiles/swsim.dir/game/Game.cpp.i

src/CMakeFiles/swsim.dir/game/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/swsim.dir/game/Game.cpp.s"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nath/sevenwonders/src/game/Game.cpp -o CMakeFiles/swsim.dir/game/Game.cpp.s

src/CMakeFiles/swsim.dir/game/Game.cpp.o.requires:

.PHONY : src/CMakeFiles/swsim.dir/game/Game.cpp.o.requires

src/CMakeFiles/swsim.dir/game/Game.cpp.o.provides: src/CMakeFiles/swsim.dir/game/Game.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/swsim.dir/build.make src/CMakeFiles/swsim.dir/game/Game.cpp.o.provides.build
.PHONY : src/CMakeFiles/swsim.dir/game/Game.cpp.o.provides

src/CMakeFiles/swsim.dir/game/Game.cpp.o.provides.build: src/CMakeFiles/swsim.dir/game/Game.cpp.o


src/CMakeFiles/swsim.dir/game/Player.cpp.o: src/CMakeFiles/swsim.dir/flags.make
src/CMakeFiles/swsim.dir/game/Player.cpp.o: src/game/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nath/sevenwonders/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object src/CMakeFiles/swsim.dir/game/Player.cpp.o"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/swsim.dir/game/Player.cpp.o -c /Users/nath/sevenwonders/src/game/Player.cpp

src/CMakeFiles/swsim.dir/game/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/swsim.dir/game/Player.cpp.i"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nath/sevenwonders/src/game/Player.cpp > CMakeFiles/swsim.dir/game/Player.cpp.i

src/CMakeFiles/swsim.dir/game/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/swsim.dir/game/Player.cpp.s"
	cd /Users/nath/sevenwonders/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nath/sevenwonders/src/game/Player.cpp -o CMakeFiles/swsim.dir/game/Player.cpp.s

src/CMakeFiles/swsim.dir/game/Player.cpp.o.requires:

.PHONY : src/CMakeFiles/swsim.dir/game/Player.cpp.o.requires

src/CMakeFiles/swsim.dir/game/Player.cpp.o.provides: src/CMakeFiles/swsim.dir/game/Player.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/swsim.dir/build.make src/CMakeFiles/swsim.dir/game/Player.cpp.o.provides.build
.PHONY : src/CMakeFiles/swsim.dir/game/Player.cpp.o.provides

src/CMakeFiles/swsim.dir/game/Player.cpp.o.provides.build: src/CMakeFiles/swsim.dir/game/Player.cpp.o


# Object files for target swsim
swsim_OBJECTS = \
"CMakeFiles/swsim.dir/main.cpp.o" \
"CMakeFiles/swsim.dir/cards/BlueCard.cpp.o" \
"CMakeFiles/swsim.dir/cards/Card.cpp.o" \
"CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.o" \
"CMakeFiles/swsim.dir/cards/ResourceCard.cpp.o" \
"CMakeFiles/swsim.dir/cards/ScienceCard.cpp.o" \
"CMakeFiles/swsim.dir/cards/GuildCard.cpp.o" \
"CMakeFiles/swsim.dir/components/Military.cpp.o" \
"CMakeFiles/swsim.dir/components/Resource.cpp.o" \
"CMakeFiles/swsim.dir/components/Science.cpp.o" \
"CMakeFiles/swsim.dir/game/ArgProcessor.cpp.o" \
"CMakeFiles/swsim.dir/game/Deck.cpp.o" \
"CMakeFiles/swsim.dir/game/Game.cpp.o" \
"CMakeFiles/swsim.dir/game/Player.cpp.o"

# External object files for target swsim
swsim_EXTERNAL_OBJECTS =

src/swsim: src/CMakeFiles/swsim.dir/main.cpp.o
src/swsim: src/CMakeFiles/swsim.dir/cards/BlueCard.cpp.o
src/swsim: src/CMakeFiles/swsim.dir/cards/Card.cpp.o
src/swsim: src/CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.o
src/swsim: src/CMakeFiles/swsim.dir/cards/ResourceCard.cpp.o
src/swsim: src/CMakeFiles/swsim.dir/cards/ScienceCard.cpp.o
src/swsim: src/CMakeFiles/swsim.dir/cards/GuildCard.cpp.o
src/swsim: src/CMakeFiles/swsim.dir/components/Military.cpp.o
src/swsim: src/CMakeFiles/swsim.dir/components/Resource.cpp.o
src/swsim: src/CMakeFiles/swsim.dir/components/Science.cpp.o
src/swsim: src/CMakeFiles/swsim.dir/game/ArgProcessor.cpp.o
src/swsim: src/CMakeFiles/swsim.dir/game/Deck.cpp.o
src/swsim: src/CMakeFiles/swsim.dir/game/Game.cpp.o
src/swsim: src/CMakeFiles/swsim.dir/game/Player.cpp.o
src/swsim: src/CMakeFiles/swsim.dir/build.make
src/swsim: src/CMakeFiles/swsim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nath/sevenwonders/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX executable swsim"
	cd /Users/nath/sevenwonders/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/swsim.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/swsim.dir/build: src/swsim

.PHONY : src/CMakeFiles/swsim.dir/build

src/CMakeFiles/swsim.dir/requires: src/CMakeFiles/swsim.dir/main.cpp.o.requires
src/CMakeFiles/swsim.dir/requires: src/CMakeFiles/swsim.dir/cards/BlueCard.cpp.o.requires
src/CMakeFiles/swsim.dir/requires: src/CMakeFiles/swsim.dir/cards/Card.cpp.o.requires
src/CMakeFiles/swsim.dir/requires: src/CMakeFiles/swsim.dir/cards/MilitaryCard.cpp.o.requires
src/CMakeFiles/swsim.dir/requires: src/CMakeFiles/swsim.dir/cards/ResourceCard.cpp.o.requires
src/CMakeFiles/swsim.dir/requires: src/CMakeFiles/swsim.dir/cards/ScienceCard.cpp.o.requires
src/CMakeFiles/swsim.dir/requires: src/CMakeFiles/swsim.dir/cards/GuildCard.cpp.o.requires
src/CMakeFiles/swsim.dir/requires: src/CMakeFiles/swsim.dir/components/Military.cpp.o.requires
src/CMakeFiles/swsim.dir/requires: src/CMakeFiles/swsim.dir/components/Resource.cpp.o.requires
src/CMakeFiles/swsim.dir/requires: src/CMakeFiles/swsim.dir/components/Science.cpp.o.requires
src/CMakeFiles/swsim.dir/requires: src/CMakeFiles/swsim.dir/game/ArgProcessor.cpp.o.requires
src/CMakeFiles/swsim.dir/requires: src/CMakeFiles/swsim.dir/game/Deck.cpp.o.requires
src/CMakeFiles/swsim.dir/requires: src/CMakeFiles/swsim.dir/game/Game.cpp.o.requires
src/CMakeFiles/swsim.dir/requires: src/CMakeFiles/swsim.dir/game/Player.cpp.o.requires

.PHONY : src/CMakeFiles/swsim.dir/requires

src/CMakeFiles/swsim.dir/clean:
	cd /Users/nath/sevenwonders/src && $(CMAKE_COMMAND) -P CMakeFiles/swsim.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/swsim.dir/clean

src/CMakeFiles/swsim.dir/depend:
	cd /Users/nath/sevenwonders && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nath/sevenwonders /Users/nath/sevenwonders/src /Users/nath/sevenwonders /Users/nath/sevenwonders/src /Users/nath/sevenwonders/src/CMakeFiles/swsim.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/swsim.dir/depend

