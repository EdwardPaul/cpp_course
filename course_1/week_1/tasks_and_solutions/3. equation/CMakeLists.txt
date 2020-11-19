cmake_minimum_required(VERSION 2.8.3)
project(equation_solution)

add_compile_options(-std=c++11)

add_executable(equation
        src/equation.cpp
        )