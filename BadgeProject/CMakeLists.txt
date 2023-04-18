#cmake_minimum_required(VERSION 2.8)
cmake_minimum_required(VERSION 3.5)

project(BadgeTest LANGUAGES CXX)
set_property(GLOBAL PROPERTY CmakeParentDirectory "${CMAKE_CURRENT_LIST_DIR}")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -pthread")
##pleas add your project settings.these scripts generates config.h with your parameters

#include_directories(src)
add_subdirectory(production)
add_subdirectory(TestP)


