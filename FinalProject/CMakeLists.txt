cmake_minimum_required(VERSION 3.8)
project(FinalProject)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        Book.cpp
        Store.cpp
        CustomerWaiting.cpp
        LinkedNode.cpp
        LinkedNodeCustomerWaiting.cpp
        LinkedQueue.cpp
        LinkedListInventory.cpp
        ArrayList.cpp
        )

add_executable(FinalProject ${SOURCE_FILES})