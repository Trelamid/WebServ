# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kdakota/check/webserv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kdakota/check/webserv/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/new_webserv.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/new_webserv.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/new_webserv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/new_webserv.dir/flags.make

CMakeFiles/new_webserv.dir/CGI.cpp.o: CMakeFiles/new_webserv.dir/flags.make
CMakeFiles/new_webserv.dir/CGI.cpp.o: ../CGI.cpp
CMakeFiles/new_webserv.dir/CGI.cpp.o: CMakeFiles/new_webserv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kdakota/check/webserv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/new_webserv.dir/CGI.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/new_webserv.dir/CGI.cpp.o -MF CMakeFiles/new_webserv.dir/CGI.cpp.o.d -o CMakeFiles/new_webserv.dir/CGI.cpp.o -c /Users/kdakota/check/webserv/CGI.cpp

CMakeFiles/new_webserv.dir/CGI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/new_webserv.dir/CGI.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kdakota/check/webserv/CGI.cpp > CMakeFiles/new_webserv.dir/CGI.cpp.i

CMakeFiles/new_webserv.dir/CGI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/new_webserv.dir/CGI.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kdakota/check/webserv/CGI.cpp -o CMakeFiles/new_webserv.dir/CGI.cpp.s

CMakeFiles/new_webserv.dir/Config.cpp.o: CMakeFiles/new_webserv.dir/flags.make
CMakeFiles/new_webserv.dir/Config.cpp.o: ../Config.cpp
CMakeFiles/new_webserv.dir/Config.cpp.o: CMakeFiles/new_webserv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kdakota/check/webserv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/new_webserv.dir/Config.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/new_webserv.dir/Config.cpp.o -MF CMakeFiles/new_webserv.dir/Config.cpp.o.d -o CMakeFiles/new_webserv.dir/Config.cpp.o -c /Users/kdakota/check/webserv/Config.cpp

CMakeFiles/new_webserv.dir/Config.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/new_webserv.dir/Config.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kdakota/check/webserv/Config.cpp > CMakeFiles/new_webserv.dir/Config.cpp.i

CMakeFiles/new_webserv.dir/Config.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/new_webserv.dir/Config.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kdakota/check/webserv/Config.cpp -o CMakeFiles/new_webserv.dir/Config.cpp.s

CMakeFiles/new_webserv.dir/Location.cpp.o: CMakeFiles/new_webserv.dir/flags.make
CMakeFiles/new_webserv.dir/Location.cpp.o: ../Location.cpp
CMakeFiles/new_webserv.dir/Location.cpp.o: CMakeFiles/new_webserv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kdakota/check/webserv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/new_webserv.dir/Location.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/new_webserv.dir/Location.cpp.o -MF CMakeFiles/new_webserv.dir/Location.cpp.o.d -o CMakeFiles/new_webserv.dir/Location.cpp.o -c /Users/kdakota/check/webserv/Location.cpp

CMakeFiles/new_webserv.dir/Location.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/new_webserv.dir/Location.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kdakota/check/webserv/Location.cpp > CMakeFiles/new_webserv.dir/Location.cpp.i

CMakeFiles/new_webserv.dir/Location.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/new_webserv.dir/Location.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kdakota/check/webserv/Location.cpp -o CMakeFiles/new_webserv.dir/Location.cpp.s

CMakeFiles/new_webserv.dir/main.cpp.o: CMakeFiles/new_webserv.dir/flags.make
CMakeFiles/new_webserv.dir/main.cpp.o: ../main.cpp
CMakeFiles/new_webserv.dir/main.cpp.o: CMakeFiles/new_webserv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kdakota/check/webserv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/new_webserv.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/new_webserv.dir/main.cpp.o -MF CMakeFiles/new_webserv.dir/main.cpp.o.d -o CMakeFiles/new_webserv.dir/main.cpp.o -c /Users/kdakota/check/webserv/main.cpp

CMakeFiles/new_webserv.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/new_webserv.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kdakota/check/webserv/main.cpp > CMakeFiles/new_webserv.dir/main.cpp.i

CMakeFiles/new_webserv.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/new_webserv.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kdakota/check/webserv/main.cpp -o CMakeFiles/new_webserv.dir/main.cpp.s

CMakeFiles/new_webserv.dir/Request.cpp.o: CMakeFiles/new_webserv.dir/flags.make
CMakeFiles/new_webserv.dir/Request.cpp.o: ../Request.cpp
CMakeFiles/new_webserv.dir/Request.cpp.o: CMakeFiles/new_webserv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kdakota/check/webserv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/new_webserv.dir/Request.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/new_webserv.dir/Request.cpp.o -MF CMakeFiles/new_webserv.dir/Request.cpp.o.d -o CMakeFiles/new_webserv.dir/Request.cpp.o -c /Users/kdakota/check/webserv/Request.cpp

CMakeFiles/new_webserv.dir/Request.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/new_webserv.dir/Request.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kdakota/check/webserv/Request.cpp > CMakeFiles/new_webserv.dir/Request.cpp.i

CMakeFiles/new_webserv.dir/Request.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/new_webserv.dir/Request.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kdakota/check/webserv/Request.cpp -o CMakeFiles/new_webserv.dir/Request.cpp.s

CMakeFiles/new_webserv.dir/RequestParser.cpp.o: CMakeFiles/new_webserv.dir/flags.make
CMakeFiles/new_webserv.dir/RequestParser.cpp.o: ../RequestParser.cpp
CMakeFiles/new_webserv.dir/RequestParser.cpp.o: CMakeFiles/new_webserv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kdakota/check/webserv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/new_webserv.dir/RequestParser.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/new_webserv.dir/RequestParser.cpp.o -MF CMakeFiles/new_webserv.dir/RequestParser.cpp.o.d -o CMakeFiles/new_webserv.dir/RequestParser.cpp.o -c /Users/kdakota/check/webserv/RequestParser.cpp

CMakeFiles/new_webserv.dir/RequestParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/new_webserv.dir/RequestParser.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kdakota/check/webserv/RequestParser.cpp > CMakeFiles/new_webserv.dir/RequestParser.cpp.i

CMakeFiles/new_webserv.dir/RequestParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/new_webserv.dir/RequestParser.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kdakota/check/webserv/RequestParser.cpp -o CMakeFiles/new_webserv.dir/RequestParser.cpp.s

CMakeFiles/new_webserv.dir/Response.cpp.o: CMakeFiles/new_webserv.dir/flags.make
CMakeFiles/new_webserv.dir/Response.cpp.o: ../Response.cpp
CMakeFiles/new_webserv.dir/Response.cpp.o: CMakeFiles/new_webserv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kdakota/check/webserv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/new_webserv.dir/Response.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/new_webserv.dir/Response.cpp.o -MF CMakeFiles/new_webserv.dir/Response.cpp.o.d -o CMakeFiles/new_webserv.dir/Response.cpp.o -c /Users/kdakota/check/webserv/Response.cpp

CMakeFiles/new_webserv.dir/Response.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/new_webserv.dir/Response.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kdakota/check/webserv/Response.cpp > CMakeFiles/new_webserv.dir/Response.cpp.i

CMakeFiles/new_webserv.dir/Response.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/new_webserv.dir/Response.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kdakota/check/webserv/Response.cpp -o CMakeFiles/new_webserv.dir/Response.cpp.s

CMakeFiles/new_webserv.dir/Server.cpp.o: CMakeFiles/new_webserv.dir/flags.make
CMakeFiles/new_webserv.dir/Server.cpp.o: ../Server.cpp
CMakeFiles/new_webserv.dir/Server.cpp.o: CMakeFiles/new_webserv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kdakota/check/webserv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/new_webserv.dir/Server.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/new_webserv.dir/Server.cpp.o -MF CMakeFiles/new_webserv.dir/Server.cpp.o.d -o CMakeFiles/new_webserv.dir/Server.cpp.o -c /Users/kdakota/check/webserv/Server.cpp

CMakeFiles/new_webserv.dir/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/new_webserv.dir/Server.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kdakota/check/webserv/Server.cpp > CMakeFiles/new_webserv.dir/Server.cpp.i

CMakeFiles/new_webserv.dir/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/new_webserv.dir/Server.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kdakota/check/webserv/Server.cpp -o CMakeFiles/new_webserv.dir/Server.cpp.s

CMakeFiles/new_webserv.dir/TCPlistener.cpp.o: CMakeFiles/new_webserv.dir/flags.make
CMakeFiles/new_webserv.dir/TCPlistener.cpp.o: ../TCPlistener.cpp
CMakeFiles/new_webserv.dir/TCPlistener.cpp.o: CMakeFiles/new_webserv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kdakota/check/webserv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/new_webserv.dir/TCPlistener.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/new_webserv.dir/TCPlistener.cpp.o -MF CMakeFiles/new_webserv.dir/TCPlistener.cpp.o.d -o CMakeFiles/new_webserv.dir/TCPlistener.cpp.o -c /Users/kdakota/check/webserv/TCPlistener.cpp

CMakeFiles/new_webserv.dir/TCPlistener.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/new_webserv.dir/TCPlistener.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kdakota/check/webserv/TCPlistener.cpp > CMakeFiles/new_webserv.dir/TCPlistener.cpp.i

CMakeFiles/new_webserv.dir/TCPlistener.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/new_webserv.dir/TCPlistener.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kdakota/check/webserv/TCPlistener.cpp -o CMakeFiles/new_webserv.dir/TCPlistener.cpp.s

# Object files for target new_webserv
new_webserv_OBJECTS = \
"CMakeFiles/new_webserv.dir/CGI.cpp.o" \
"CMakeFiles/new_webserv.dir/Config.cpp.o" \
"CMakeFiles/new_webserv.dir/Location.cpp.o" \
"CMakeFiles/new_webserv.dir/main.cpp.o" \
"CMakeFiles/new_webserv.dir/Request.cpp.o" \
"CMakeFiles/new_webserv.dir/RequestParser.cpp.o" \
"CMakeFiles/new_webserv.dir/Response.cpp.o" \
"CMakeFiles/new_webserv.dir/Server.cpp.o" \
"CMakeFiles/new_webserv.dir/TCPlistener.cpp.o"

# External object files for target new_webserv
new_webserv_EXTERNAL_OBJECTS =

new_webserv: CMakeFiles/new_webserv.dir/CGI.cpp.o
new_webserv: CMakeFiles/new_webserv.dir/Config.cpp.o
new_webserv: CMakeFiles/new_webserv.dir/Location.cpp.o
new_webserv: CMakeFiles/new_webserv.dir/main.cpp.o
new_webserv: CMakeFiles/new_webserv.dir/Request.cpp.o
new_webserv: CMakeFiles/new_webserv.dir/RequestParser.cpp.o
new_webserv: CMakeFiles/new_webserv.dir/Response.cpp.o
new_webserv: CMakeFiles/new_webserv.dir/Server.cpp.o
new_webserv: CMakeFiles/new_webserv.dir/TCPlistener.cpp.o
new_webserv: CMakeFiles/new_webserv.dir/build.make
new_webserv: CMakeFiles/new_webserv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kdakota/check/webserv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable new_webserv"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/new_webserv.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/new_webserv.dir/build: new_webserv
.PHONY : CMakeFiles/new_webserv.dir/build

CMakeFiles/new_webserv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/new_webserv.dir/cmake_clean.cmake
.PHONY : CMakeFiles/new_webserv.dir/clean

CMakeFiles/new_webserv.dir/depend:
	cd /Users/kdakota/check/webserv/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kdakota/check/webserv /Users/kdakota/check/webserv /Users/kdakota/check/webserv/cmake-build-debug /Users/kdakota/check/webserv/cmake-build-debug /Users/kdakota/check/webserv/cmake-build-debug/CMakeFiles/new_webserv.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/new_webserv.dir/depend
