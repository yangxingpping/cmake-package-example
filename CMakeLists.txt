cmake_minimum_required(VERSION 3.0)
project(youngCMake)

option(BUILD_SHARED_LIBS "Build shared libraries" ON)

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR})
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})

enable_testing()

# Monolithic version
add_subdirectory(Foo)
add_subdirectory(Boo)
