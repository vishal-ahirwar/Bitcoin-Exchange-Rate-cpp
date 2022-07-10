cmake_minimum_required(VERSION 3.0)
project(BER)
add_executable(${PROJECT_NAME} ./src/main.cc ./src/bitcoin.cc ../src/curlHandler.cc)
target_link_libraries(${PROJECT_NAME} curl)
