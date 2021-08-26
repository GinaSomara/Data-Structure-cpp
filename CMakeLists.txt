cmake_minimum_required(VERSION 3.20)
project(DataStruc)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStruc BagInterface.h Include.h LinkedBag.cpp LinkedBag.h LinkedBag340.cpp LinkedBagClient340.cpp Node.cpp Node.h)
