cmake_minimum_required(VERSION 3.22.1)

project(SortAlgorithms VERSION 0.1)

set(gcc_like_cxx "$<COMPILE_LANG_AND_ID:CXX,ARMClang,AppleClang,Clang,GNU,LCC>")
set(msvc_cxx "$<COMPILE_LANG_AND_ID:CXX,MSVC>")

add_executable(SortAlgorithms src/main.cpp "src/MergeSort/include/MergeSort.h")

target_compile_options(SortAlgorithms INTERFACE 
    "$<${gcc_like_cxx}:$<BUILD_INTERFACE:-Wall;-Wextra;-pedantic;-Wshadow;-Wformat=2;-Wunused;-O3>>" 
    "$<${msvc_cxx}:$<BUILD_INTERFACE:-W3>>"
)