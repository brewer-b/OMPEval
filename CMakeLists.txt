cmake_minimum_required(VERSION 3.10)

project(OMPEval VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(OMPEval SHARED omp/HandEvaluator.cpp)

target_include_directories(OMPEval PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)