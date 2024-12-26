cmake_minimum_required (VERSION 3.20)

project (cmake_basic LANGUAGES C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)

### Require out-of-source builds
file(TO_CMAKE_PATH "${PROJECT_BINARY_DIR}/CMakeLists.txt" LOC_PATH)
if(EXISTS "${LOC_PATH}")
    message(FATAL_ERROR "You cannot build in a source directory (or any directory with a CMakeLists.txt file). Please make a build subdirectory. Feel free to remove CMakeCache.txt and CMakeFiles.")
endif()

option(COMPILE_EXECUTABLE "Whether to compile the executable" OFF)

if (COMPILE_EXECUTABLE)
    add_subdirectory(src)
    target_include_directories(cmake_basic PUBLIC "inc")
else()
    message("!!No executable compiling!!")
endif()
add_subdirectory(inc)
add_subdirectory(lib)
