cmake_minimum_required(VERSION 3.9)
project(qt_wrap)

# we can also use 17 if we want
set(CMAKE_CXX_STANDARD 14)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
# this will need a bit more config on windows
# this may work on mac with homebrew or whater its packages manager is called
find_package(Qt5Widgets)

# the libary
add_library(qt_wrap STATIC Window.cc qt_wrap.h)
target_link_libraries(qt_wrap Qt5::Widgets)

# test dir
# if (ENABLE_TESTS)
    add_subdirectory(qt_wrap_test)
# endif ()