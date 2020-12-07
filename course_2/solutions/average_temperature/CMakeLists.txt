cmake_minimum_required(VERSION 2.8.3)
project(average_temperature)

add_compile_options(-std=c++11)

add_executable(average_temperature
        src/average_temperature.cpp
        )