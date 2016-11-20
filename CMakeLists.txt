project (tint3)
cmake_minimum_required(VERSION 3.6)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")

include( FindPkgConfig )
include( CheckLibraryExists )
pkg_check_modules( X11 REQUIRED x11)

if (NOT X11_FOUND)
	message( FATAL_ERROR "Not all dependencies fulfilled" )
endif (NOT X11_FOUND)

# Bring the headers, such as xlibCtrl.h into the project
include_directories( include
					 include/Model
					 include/Controller
					 include/View
					 ${X11_INCLUDE_DIRS} )
link_directories( ${X11_LIBRARY_DIRS} )

file(GLOB SOURCES "src/*.cpp"
									"src/Model/*.cpp" 
									"src/Controller/*.cpp" 
									"src/View/*.cpp")

add_executable(tint3 ${SOURCES})

target_link_libraries( tint3 ${X11_LIBRARIES} )
