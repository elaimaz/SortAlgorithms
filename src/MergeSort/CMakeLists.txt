add_library(MergeSort STATIC ${CMAKE_CURRENT_SOURCE_DIR}/src/MergeSort.cpp)

target_include_directories(MergeSort PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)