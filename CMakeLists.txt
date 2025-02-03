cmake_minimum_required(VERSION 3.5)


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


# Находите необходимые компоненты Qt

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)


# Добавляем подкаталог bin

add_subdirectory(bin)


# Создайте исполняемый файл

add_executable(visual-py visual-py.cpp)


# Убедитесь, что пути включения Qt добавлены корректно

target_include_directories(visual-py PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/bin/include)

target_link_libraries(visual-py PRIVATE gui)  # Связываем с библиотекой gui


# Свяжите библиотеки Qt

target_link_libraries(visual-py PRIVATE Qt6::Core Qt6::Widgets)

