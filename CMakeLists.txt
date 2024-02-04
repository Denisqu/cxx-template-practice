cmake_minimum_required(VERSION 3.5)

project(templates-practice VERSION 0.1 LANGUAGES CXX)


set(PROJECT_SOURCES
        main.cpp
        mystd/my_unique_ptr.cpp mystd/my_unique_ptr.h
        mystd/my_unique_ptr_with_deleter.cpp mystd/my_unique_ptr_with_deleter.h
)


add_executable(templates-practice
        ${PROJECT_SOURCES}
)

target_include_directories(templates-practice PRIVATE mystd)
