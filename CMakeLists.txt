cmake_minimum_required(VERSION 3.16.3)
project(BASIC VERSION 1.0)

include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${CMAKE_SOURCE_DIR}/src/LinearDS)
include_directories(${CMAKE_SOURCE_DIR}/src/Polymorphism)

add_executable(BASIC
    # src/mainStatic.cpp
    # src/Demo.h
    # src/Demo.cpp
    # src/GPSPath.cpp
    # src/GPSPath_1.cpp
    # src/Constructor.cpp
    # src/Copy&CopyAssigment.cpp
    # src/Pointers.cpp
    # src/Pointers1.cpp
    # src/Pointers2.cpp
    # src/UniquePointer.cpp
    # src/SharePointer.cpp
    # src/ArrayPointers.cpp
    # src/ArrayPointers1.cpp
    # src/DoublePointer.cpp
    # src/voidpointer.cpp
    # src/Copy&Move.cpp
    # src/PointerSwapping.cpp
    # src/Reference.cpp
    # src/ConstantPointer.cpp
    # src/Palindrome.cpp
    # src/Arrays_1.cpp
    # src/Arrays_2.cpp
    # src/Template.cpp
    # src/DeepCopy.cpp
    # src/Polymorphism/FunctionOverriding_1.cpp
    # src/Polymorphism/FunctionOverriding_2.cpp
    # src/Polymorphism/VirtualDestructor.cpp
    # src/SolidSRP.cpp
    # src/SolidOCP.cpp
    # src/SolidLSP.cpp
    # src/SolidISP.cpp
    src/SolidDIP.cpp

)