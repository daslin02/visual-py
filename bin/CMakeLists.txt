find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

add_library(gui STATIC src/gui.cpp )

target_link_libraries(gui PRIVATE  Qt6::Core Qt6::Widgets)
target_include_directories(gui PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
