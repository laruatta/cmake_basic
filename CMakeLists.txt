cmake_minimum_required (VERSION 3.20)

project (cmake_basic VERSION 1.0.0 LANGUAGES C CXX)

include(cmake/CPM.cmake)
set(LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib)
CPMAddPackage(
    NAME printlib
    GITHUB_REPOSITORY FriedrichAC/printlib
    GIT_TAG dev
    SOURCE_DIR ${LIB_DIR}/printlib
)

add_subdirectory(src)
add_subdirectory(lib)
#target_include_directories(${PROJECT_NAME} PUBLIC version)
target_include_directories(${PROJECT_NAME} PUBLIC ${LIB_DIR}/printlib/inc)
target_link_directories(${PROJECT_NAME} PUBLIC ${printlib_SRC_DIR})