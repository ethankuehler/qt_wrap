#test for qt_wrap
include_directories(..)

add_executable(qt_wrap_test main.cc)
target_link_libraries(qt_wrap_test qt_wrap)
