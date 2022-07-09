cmake_minimum_required(VERSION 3.0)
project(BER)
add_executable(${PROJECT_NAME} bitcoin.cc)
target_link_libraries(${PROJECT_NAME} libcurl.a)
