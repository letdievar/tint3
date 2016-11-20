# tint3

System system panel/taskbar for Linux - made for X wms

## Directory Structure
* src/ (source for the application and library *.cpp)
* include/ (interface for the application library *.h)
* lib/ (source for the third party libraries)
* tests/ (main.cpp for quick tests) <- use cppunit for this part
* doc/ (doxygen or any kind of documentation)

## Compile
Compile the proyect with CMake. As for now, with debugging:

```
$ cmake CMakeLists.txt -DCMAKE_BUILD_TYPE=Debug
$ make
$ ./tint3
```

## Author
Diego Vargas

