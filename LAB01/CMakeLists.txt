cmake_minimum_required(VERSION 2.8)

project(3A-SEI-SoC-POO-LAB1)
#set(CMAKE_BUILD_TYPE Release)
set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Wconversion -std=gnu99")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -Wconversion -std=gnu++11")

add_executable(hello            ./01-hello/hello.cpp)
#add_executable(streams          ./02-streams/streams.cpp)
#add_executable(mess             ./03-mess/mess.cpp)
#add_executable(strings          ./04-strings/strings.cpp)
#add_executable(functions        ./05-functions/functions.cpp)
#add_executable(circle           ./06-circle/circle.cpp ./06-circle/main.cpp)
