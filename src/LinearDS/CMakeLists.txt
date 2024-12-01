cmake_minimum_required(VERSION 3.16.3)

project(STL VERSION 1.0)

include_directories(${CMAKE_SOURCE_DIR}/src)

add_executable(STL
    #src/Array.cpp
    # src/Vector.cpp
    # src/VectorEmbrace.cpp
    # src/VectorEmbraceBack.cpp
    # src/VectorDuplicates.cpp
    # src/ForwardList.cpp
    # src/List.cpp
    # src/Pairs.cpp
    # src/Tuples.cpp
    # src/Queue.cpp
    # src/Dequeue.cpp
    src/PriorityQueue.cpp
  
  )