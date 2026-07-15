cmake_minimum_required(VERSION 3.16)
project(project_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS Core REQUIRED)

add_executable(project_1
    main.cpp
)

target_link_libraries(project_1 PRIVATE Qt6::Core)
