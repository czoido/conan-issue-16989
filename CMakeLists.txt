cmake_minimum_required(VERSION 3.15)
project(libxxx CXX)




add_library(libxxx src/libxxx.cpp)
target_include_directories(libxxx PUBLIC include)



set_target_properties(libxxx PROPERTIES PUBLIC_HEADER "include/libxxx.h")
install(TARGETS libxxx)
