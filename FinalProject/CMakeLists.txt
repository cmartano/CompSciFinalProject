cmake_minimum_required(VERSION 3.8)
project(FinalProject)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        Book.cpp
        Store.cpp
        CustomerWaiting.h
        CustomerWaiting.cpp
        cmake-build-debug/CustomerWaiting.cpp Inventory.h)
add_executable(FinalProject ${SOURCE_FILES})