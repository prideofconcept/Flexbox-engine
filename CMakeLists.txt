cmake_minimum_required(VERSION 3.3)
project(FlexBoxEngine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z -O3 -Wall -Wextra -Wformat=2 -pedantic-errors -Wstrict-aliasing=1 -Wsuggest-attribute ")

file(GLOB FlexboxEngine_src
        "main.cpp"
        "FlexboxEngine/*.cpp")

add_executable(FlexBoxEngine ${FlexboxEngine_src})