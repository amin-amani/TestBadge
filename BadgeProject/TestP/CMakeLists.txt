cmake_minimum_required(VERSION 3.5)

project(cal_test LANGUAGES CXX)
# Set up CTest to generate test results in XML format
include(CTest)
set(CTEST_OUTPUT_ON_FAILURE TRUE)
set(CTEST_XML_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/Testing")
set(CTEST_XML_OUTPUT_FILE "test_results.xml")

find_package(Qt5Test REQUIRED)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fprofile-arcs -ftest-coverage")

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true ${CMAKE_SOURCE_DIR}/production/*.h
                                                ${CMAKE_SOURCE_DIR}/production/*.cpp
                                                )
list(REMOVE_ITEM SOURCES ${CMAKE_SOURCE_DIR}/production/main.cpp)


include_directories(
${CMAKE_SOURCE_DIR}/production
)

message("=================>" ${SOURCES})
enable_testing()

add_executable(cal_test tst_cal_test.cpp ${SOURCES})
add_test(NAME cal_test COMMAND cal_test)

target_link_libraries(cal_test PRIVATE Qt5::Test)

