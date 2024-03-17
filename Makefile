# Compiler
CXX := g++

# Compiler flags
CXXFLAGS := -std=c++11 -Wall -Wextra  -g 

# Directories
SRC_DIR := src
INCLUDE_DIR := include
QUICKSORTLOMUTO_DIR := include/QuicksortLomuto
QUICKSORTHOARE_DIR := include/QuicksortHoare
DOCS_DIR := docs
BUILD_DIR := build

# Source files
SRCS := $(wildcard $(SRC_DIR)/*.cpp)
SRCS += $(wildcard $(INCLUDE_DIR)/*.cpp)
SRCS += $(wildcard $(QUICKSORTLOMUTO_DIR)/*.cpp)
SRCS += $(wildcard $(QUICKSORTHOARE_DIR)/*.cpp)

# Object files
#OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))
OBJS := $(SRCS:.cpp=.o)

# Executable name
TARGET := main

# Doxygen configuration file
#DOXYGEN_CONFIG := $(DOCS_DIR)/Doxyfile.ini

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@ 

# Compile source files into object files
%.o: %.cpp
	$(CXX)	$(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@


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
