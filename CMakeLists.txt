cmake_minimum_required(VERSION 3.8)
project(LifeOfAnts)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Ant.cpp Ant.h)
add_executable(LifeOfAnts ${SOURCE_FILES})