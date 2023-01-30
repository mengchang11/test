CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

# 项目名称
PROJECT(partSort)

# 添加头文件
INCLUDE_DIRECTORIES(inc)

# 设置源文件
SET(SRC_LIST src/print.cpp src/part_sort.cpp src/main.cpp)

# 生成可执行二进制文件
ADD_EXECUTABLE(partSort ${SRC_LIST})

MESSAGE(STATUS "This is BINARY dir " ${PROJECT_BINARY_DIR})
MESSAGE(STATUS "This is SOURCE dir " ${PROJECT_SOURCE_DIR})