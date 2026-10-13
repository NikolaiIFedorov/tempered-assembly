cmake_minimum_required(VERSION 3.20)
project(tempered_kernel CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(kernel kernel/main.cpp)
target_link_libraries(kernel embind)
set_target_properties(kernel PROPERTIES
  SUFFIX ".js"
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/dist"
  LINK_FLAGS "-sMODULARIZE -sEXPORT_ES6 -sEXPORT_NAME=createKernel -sENVIRONMENT=web,node --emit-tsd kernel.d.ts")
