project (tint3)
cmake_minimum_required(VERSION 3.6)

include( FindPkgConfig )
include( CheckLibraryExists )
pkg_check_modules( X11 REQUIRED x11)

if (NOT X11_FOUND)
	message( FATAL_ERROR "Not all dependencies fulfilled" )
endif (NOT X11_FOUND)

# Bring the headers, such as xlibCtrl.h into the project
include_directories( include
										 ${X11_INCLUDE_DIRS} )
link_directories( ${X11_LIBRARY_DIRS} )

file(GLOB SOURCES "src/*.cpp")

add_executable(tint3 ${SOURCES})

target_link_libraries( tint3 ${X11_LIBRARIES} )
