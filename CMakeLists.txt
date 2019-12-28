cmake_minimum_required(VERSION 3.15.5)
SET(CMAKE_CXX_STANDARD 17)
project(Assignment6 CXX)

include_directories(includes)
file(GLOB SOURCES "src/*.cpp")
add_executable(run ${SOURCES})




