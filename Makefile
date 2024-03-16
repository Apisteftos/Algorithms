# Compiler
CXX := g++

# Compiler flags
CXXFLAGS := -std=c++11 -Wall -Wextra -g 

# Directories
SRC_DIR := src
QUICKSORT_DIR := include/Quicksort
DOCS_DIR := docs
BUILD_DIR := build

# Source files
SRCS := $(wildcard $(SRC_DIR)/*.cpp)   $(wildcard $(QUICKSORT_DIR)/*.cpp)

# Object files
#OBJS = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS)) 
OBJS := $(SRCS:.cpp=.o)

# Executable name
TARGET := main

# Doxygen configuration file
#DOXYGEN_CONFIG := $(DOCS_DIR)/Doxyfile.ini

# Default target
all: $(TARGET)

# Compile source files into object files
%.o: %.cpp
	$(CXX)	$(CXXFLAGS)	-I$(QUICKSORT_DIR) -c $< -o $@

# Link object files into executable
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Clean generated files
clean:
	rm -rf $(BUILD_DIR)/*.o  $(SRC_DIR)/*.o $(TARGET) 


.Phony: all clean


# Generate Doxygen configuration file
#generate_doxygen_config:
#	doxygen -g	$(DOXYGEN_CONFIG)


# Doxygen documentation
#doxygen:
#	doxygen	$(DOXYGEN_CONFIG)
