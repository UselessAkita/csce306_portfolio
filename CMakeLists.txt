cmake_minimum_required(VERSION 3.0.0)
project(CSCE306_Portfolio VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(CSCE306_Portfolio ClassCourse.h NewDate.h main.cpp ReadingTask.h Task.h WritingTask.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
