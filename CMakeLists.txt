cmake_minimum_required(VERSION 3.10)

# Adding the project
project(Algorithms)

# Include directories
include_directories(include)

# Adding the project version 
project(Algorithms VERSION 1.0)


# Globbing all header files
file(GLOB_RECURSE  HEADER_FILES include/*.h)

# Find openCV package
find_package(OpenCV REQUIRED)


# include directories
include_directories( ${OpenCV_INCLUDE_DIRS} )


# Adding source files 
add_executable(main
              src/sorting/bubblesort.cpp
              src/sorting/quicksortfat.cpp 
              src/sorting/quicksorthoare.cpp 
              src/sorting/quicksortlomuto.cpp
              src/sorting/selectionsort.cpp
              src/sorting/insertionsort.cpp
              src/sorting/heapsort.cpp
              src/sorting/countingsort.cpp
              src/sorting/pancakesort.cpp
              src/sorting/radixsort.cpp
              src/filter/kernel.cpp
              src/filter/convolution.cpp 
              src/graph/Dijkstra/dijkstra.cpp
              src/graph/Dijkstra/edge.cpp
              src/graph/Dijkstra/graph.cpp 
              src/graph/Dijkstra/vertex.cpp 
              src/graph/DFS/dfs.cpp
              src/graph/DFS/edges.cpp
              src/graph/DFS/graph.cpp
              src/graph/BFS/bfs.cpp
              src/graph/BFS/graph.cpp
              src/helper/helperfun.cpp
              src/main.cpp
              ${HEADER_FILES})


# Add debugging flags and additional warnings
target_compile_options(main PUBLIC -g -Wall -Wextra)

# Linking the libs
target_link_libraries(main ${OpenCV_LIBS})

