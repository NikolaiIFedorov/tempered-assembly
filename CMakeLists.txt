cmake_minimum_required(VERSION 3.20)
project(tempered_assembly CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(assembly src/main.cpp)
target_link_libraries(assembly embind)
set_target_properties(assembly PROPERTIES
  SUFFIX ".js"
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/dist"
  LINK_FLAGS "-sMODULARIZE -sEXPORT_ES6 -sEXPORT_NAME=createKernel -sENVIRONMENT=web,node --emit-tsd kernel.d.ts")

target_include_directories(assembly PRIVATE ${CMAKE_SOURCE_DIR}/src)
