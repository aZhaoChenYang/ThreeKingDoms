cmake_minimum_required(VERSION 3.20)
project(ThreeKingDoms)

set(CMAKE_CXX_STANDARD 20)
include_directories(include)
include_directories(.)

add_subdirectory(soldier)

add_executable(ThreeKingDoms src/main.cpp
                              src/gamer.cpp)

target_link_libraries(ThreeKingDoms PUBLIC soldier)