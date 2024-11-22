cmake_minimum_required(VERSION 3.0)
project(foo-monolithic)

option(BUILD_SHARED_LIBS "Build shared libraries" ON)

enable_testing()

# Monolithic version
add_subdirectory(Foo)
add_subdirectory(Boo)
