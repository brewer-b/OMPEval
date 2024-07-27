cmake_minimum_required(VERSION 3.10)

project(OMPEval VERSION 1.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the shared library
add_library(OMPEval SHARED omp/HandEvaluator.cpp omp/HandEvaluator_c.cpp)

# Include directories
target_include_directories(OMPEval PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Optionally set optimization flags specifically for the target
target_compile_options(OMPEval PRIVATE -O3 -ffast-math -funsafe-math-optimizations -march=native -fPIC)