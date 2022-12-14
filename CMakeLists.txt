cmake_minimum_required(VERSION 3.12)
project(scheduler)

find_package(Boost REQUIRED COMPONENTS
    chrono
    program_options
    system
)

add_library(${PROJECT_NAME}_objs OBJECT
    src/hello.cpp
)
target_link_libraries(${PROJECT_NAME}_objs PUBLIC
    Boost::chrono
    Boost::system
    Boost::program_options
)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE ${PROJECT_NAME}_objs)
