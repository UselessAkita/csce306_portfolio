cmake_minimum_required(VERSION 3.21)
project(csce306_portfolio)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(csce306_portfolio
        ClassCourse.cpp
        ClassCourse.h
        main.cpp
        NewDate.cpp
        NewDate.h
        ReadingTask.cpp
        ReadingTask.h
        Task.cpp
        Task.h
        WritingTask.cpp
        WritingTask.h)
