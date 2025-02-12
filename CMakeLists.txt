cmake_minimum_required(VERSION 3.5)


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

add_subdirectory(bin)

add_executable(visual-py visual-py.cpp)

target_include_directories(visual-py PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/bin/include)

target_link_libraries(visual-py PRIVATE gui)

target_link_libraries(visual-py PRIVATE Qt6::Core Qt6::Widgets)
