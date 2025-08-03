cmake_minimum_required(VERSION 3.10)
project(OMPEval LANGUAGES CXX)


add_library(${PROJECT_NAME} STATIC omp/HandEvaluator.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ./)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

add_executable(check_omp_eval test.cpp)
target_link_libraries(check_omp_eval ${PROJECT_NAME})