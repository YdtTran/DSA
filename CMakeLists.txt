cmake_minimum_required(VERSION 3.29.2)

project(DSA)

set(OSBitness 32)
if (CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(OSBitness 64)
endif()

set (FULLOutputDir "${CMAKE_SOURCE_DIR}/bin/x${OSBitness}/${CMAKE_BUILD_TYPE}")
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${FULLOutputDir}")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "${FULLOutputDir}")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${FULLOutputDir}")


# Use INTERFACE for header-only library
add_library(List INTERFACE)
target_include_directories(List INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/tools/include)


add_executable(${PROJECT_NAME} main.cpp)