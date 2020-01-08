cmake_minimum_required(VERSION 3.15)
project(steinerTree)

set(CMAKE_CXX_STANDARD 11)

add_executable(steinerTree main.cpp edge.h inputPara.h node.h solution.h algorithm.h strategy.h platform.h utility.h)