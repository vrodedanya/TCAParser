cmake_minimum_required(VERSION 3.7)

project(TCAParser)

include_directories(include include/tcapASN)
link_directories(${CMAKE_CURRENT_BINARY_DIR})

add_custom_target(buildASN make -f "${CMAKE_CURRENT_SOURCE_DIR}/include/tcapASN/makeasn" all)

add_definitions(-DASN_DISABLE_OER_SUPPORT)
add_executable(TCAParser source/main.cpp)

add_executable(hexLoader source/hex.c)

add_dependencies(TCAParser buildASN)

target_link_libraries(TCAParser asn)
