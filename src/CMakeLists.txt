project(planning_main)

add_subdirectory(pnc_map)
add_subdirectory(process)

add_executable(${PROJECT_NAME} planning_main.cpp) #文件名就直接用工程名

target_include_directories(${PROJECT_NAME}
PUBLIC
${Process_Dir}
)
target_link_libraries(${PROJECT_NAME}
PUBLIC
process
)