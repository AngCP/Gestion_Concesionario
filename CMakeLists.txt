cmake_minimum_required(VERSION 2.6 FATAL_ERROR)
project(Concesionario)

INCLUDE_DIRECTORIES("./include")

file(GLOB SOURCES "./src/*.cpp")

add_executable(Concesionario ${SOURCES})

