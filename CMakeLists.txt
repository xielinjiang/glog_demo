cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(main)

# PCL package

# OpenCV package
FIND_PACKAGE(OpenCV 3.4.3 REQUIRED)

# OpenCV include directories
INCLUDE_DIRECTORIES(${OpenCV_INCLUDE_DIRS})

# PCL include directories
link_libraries(-lpthread)
link_libraries(-lopencv_features2d)

#  set(CMAKE_BUILD_TYPE Release)
set(CMAKE_BUILD_TYPE Debug)

add_definitions(-std=c++11)

FILE(GLOB SOURCES  "src/*.cpp" "src/*.cc" "src/*.h" "src/*.hpp")

ADD_EXECUTABLE(main ${SOURCES})

TARGET_LINK_LIBRARIES(main  ${OpenCV_LIBS} glog)

