cmake_minimum_required(VERSION 3.12)
project(raylib_game_of_life)

find_package(raylib 5.1 REQUIRED)

set(CMAKE_CXX_STANDARD 20)

add_executable(raylib_game_of_life src/main.cpp
        src/grid.cpp
        src/grid.h
        src/sidebar.cpp
        src/sidebar.h
)

target_link_libraries(${PROJECT_NAME} raylib)
