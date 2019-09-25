cmake_minimum_required(VERSION 3.1.0)

project(qt) 

### Using CMake Instructions

set(Qt5_DIR ~/Qt/5.12.3/clang_64/lib/cmake/Qt5)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} Qt5::Widgets)

