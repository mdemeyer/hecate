cmake_minimum_required(VERSION 3.17..3.21)

project(hecate
        VERSION 0.0.1
        LANGUAGES CXX)

enable_testing()

add_subdirectory(apps)
add_subdirectory(libs)
