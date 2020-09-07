cmake_minimum_required(VERSION 2.8)
project(fatdog)

set(CMAKE_VERBOSE_MAKEFILE ON)  # 显示详细的原始编译信息
# CXXFLAGS 用于 C++ 编译器的选项，$ENV 表示 cmake 的环境变量，CMAKE_CXX_FLAGS  指定编译标志
# 选项 -rdynamic 用来通知链接器将所有符号添加到动态符号表中
# -o3 将优化程度调到最高，-Wall 显示警告
# gcc 中的有些警告信息可以使用 -Wwarning-name 打开，也可以使用 -Wno-warning-name 来关闭，所以
# -Wno-deprecated 使用过时的特性时不要给出警告
# -Werror 把所有警告转换为错误，以在警告发生时中止编译过程
# -Wno-unused-function 未使用的函数不要给出警告
SET(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -rdynamic -o0 -g -ggdb -std=c++11 -Wall -Wno-deprecated -Werror -Wno-unused-function")

# 给变量 LIB_SRC 设置值
SET(LIB_SRC
    fatdog/log.cc
    fatdog/util.cc
    )

# add_library 将目录中的源文件生成链接库
add_library(fatdog SHARED ${LIB_SRC})
#add_library(fatdog_static STATIC ${LIB_SRC})
#SET_TARGET_PROPERTIES (fatdog_static PROPERTIES OUTPUT_NAME "fatdog")

# 从源文件中生成可执行文件
add_executable(test tests/test.cc)
# 为目标引入依赖关系，add_dependencies(target-name depend-target1 depend-target2 ...)
add_dependencies(test fatdog)
# 添加链接库
target_link_libraries(test fatdog)

# 用于设置可执行文件的输出路径
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# 用于设置库文件的输出路径
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
