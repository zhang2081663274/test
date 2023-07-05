#最低要求的cmake版本
cmake_minimum_required(VERSION 3.25)
#项目名称
project(Factory)


#使用SRC代替其后原文件
set(SRC factory.cpp main.cpp)
#日志信息
message(STATUS ${PROJECT_BINARY_DIR})


#设置输出位置
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

#包含的头文件地址
include_directories(./include/1_factory_header)
include_directories(./include/2_strategy_header)
include_directories(./include/3_decorate_header)
include_directories(./include/4_proxy_header)


#执行内容
add_executable(Factory main.cpp factory.cpp)





