### CMake.List


```Bash
nano main.cpp #assuming there is a "hello world" code in there
ls # should show the main file just created
g++ -o hello main.cpp
ls # should show hello
.hello # shows whatever is the output of the file
```

CMake is a file to just do that above:


In a CMakeList.txt file:

```Bash
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(hello VERSION 1.0)
add_executable(hello main.cpp)
```

And then we just run it

```Bash
cmake . && make && ./hello
```

Adding a header file

```Bash
file(GLOB_RECURSE SRC_FILES src/*.cpp CONFIGURE_DEPENDS)
add_executable(hello ${SRC_FILES})

# Replace add_executable with add_library
add_library(mylib STATIC lib/blah.cpp)

# Can then include it in your main executable
target_link_libraries(hello PUBLIC mylib)
```

[Sorce](https://codevion.github.io/#!cpp/cmake.md)