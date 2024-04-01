# Makefile InfiniteArithmetic

TARGET_EXEC := Calculator
# where the .cpp files are present
SRC_DIR := ./src
# where the .h files are present
INCL_DIR := ./include
# where the object files go in 
BUILD_DIR := ./build

CXX := g++
CXXFLAGS := -std=c++17 -I$(INCL_DIR)

SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))
# OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)					- same output as previous

.PHONY : all run clean

all : $(BUILD_DIR) $(TARGET_EXEC)

$(TARGET_EXEC) :  $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET_EXEC)
	@echo "Building Calculator"

$(BUILD_DIR) : 
	mkdir build/

$(BUILD_DIR)/%.o : $(SRC_DIR)/%.cpp $(INCL_DIR)/Integer.h $(INCL_DIR)/Float.h
	$(CXX) -c $(CXXFLAGS) $< -o $@

run : 
	./$(TARGET_EXEC)
	@echo "Running Calculator"

clean :
	rm -r $(TARGET_EXEC) $(BUILD_DIR)
