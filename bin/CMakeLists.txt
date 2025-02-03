find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

add_library(gui STATIC src/mainWindow.cpp )

target_link_libraries(gui PRIVATE  Core Widgets)
target_include_directories(gui PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
