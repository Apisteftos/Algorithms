cmake_minimum_required(VERSION 3.10)

# Adding the project
project(Algorithms)

# Include directories
include_directories(include)

# Adding the project version 
project(Algorithms VERSION 1.0)


# Globbing all header files
file(GLOB_RECURSE  HEADER_FILES include/*.h)


# Adding source files 
add_executable(main
              src/sorting/bubblesort.cpp
              src/sorting/quicksortfat.cpp 
              src/sorting/quicksorthoare.cpp 
              src/sorting/quicksortlomuto.cpp 
              src/main.cpp
              ${HEADER_FILES})


# Adding targets
#target_include_directories(main PUBLIC include)
