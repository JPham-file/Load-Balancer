cmake_minimum_required(VERSION 3.25.2)
project(Project_2)

set(CMAKE_CXX_STANDARD 23)

add_executable(Project_2 main.cpp WebServer.cpp WebServer.h Request.cpp Request.h Queue.cpp Queue.h LoadBalancer.cpp LoadBalancer.h)
