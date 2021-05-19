cmake_minimum_required(VERSION 3.19)
project(win_api)

set(CMAKE_CXX_STANDARD 14)

add_executable(message_box
        message_box_egz.cpp)



add_executable(malina_window  main.cpp
        window.h window.cpp)
