add_library(PRINTLIB STATIC printlib.c)

if (COMPILE_EXECUTABLE)
    target_link_libraries(cmake_basic PUBLIC PRINTLIB)
else()
    target_link_libraries(PRINTLIB)
endif()
