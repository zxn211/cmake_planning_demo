cmake_minimum_required(VERSION 3.30.3)
project(planning
    VERSION 0.0.1
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL "https://github.com/zxn211/cmake_planning_demo"
)

set(CMAKE_CXX_STANDARD 20)

#变量设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin) #动态库以及可执行文件输出目录
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(Pnc_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)
#添加子目录
add_subdirectory(src)# 这个目录是找 子目录里的 CMakeLists # 只要有就能找到

 