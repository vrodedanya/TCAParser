cmake_minimum_required(VERSION 3.7)

project(TCAParser)

include_directories(include include/tcapASN)
link_directories(build)

add_custom_target(buildASN make -f "${CMAKE_CURRENT_SOURCE_DIR}/include/tcapASN/makeasn" all)

add_executable(TCAParser source/main.cpp)

add_executable(hexLoader source/hex.c)

add_dependencies(TCAParser buildASN)

target_link_libraries(TCAParser asn)
