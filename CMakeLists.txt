cmake_minimum_required(VERSION 3.30)
project(MyFirstCPPStep)

set(CMAKE_CXX_STANDARD 20)

add_executable(MyFirstCPPStep main.cpp)

add_executable(task1_calculator Practice/task1_calculator.cpp)

add_executable(task2_score_to_grade Practice/task2_score_to_grade.cpp)

add_executable(task3_calculator_deluxe Practice/task3_calculator_deluxe.cpp)