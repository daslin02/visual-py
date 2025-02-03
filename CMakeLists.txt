cmake_minimum_required(VERSION 3.5)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(visual-py visual-py.cpp)

target_include_directories(visual-py PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/bin/include)

add_subdirectory(bin)
target_link_libraries(visual-py PRIVATE gui)
