# Makefile InfiniteArithmetic

TARGET_EXEC := Calculator
# where the .cpp files are present
SRC_DIR := ./src
# where the .h files are present
INCL_DIR := ./include
# where the object files go in 
BUILD_DIR := ./build
# where testing scripts are kept
UTILS_DIR := ./utils

LIB := lib-inf.a

CXX := clang++
CXXFLAGS := -Wall -Wextra -g -std=c++17 -I$(INCL_DIR)

SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))
# OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)					- same output as previous
TEST_FILES := $(wildcard $(UTILS_DIR)/*.out) $(wildcard $(UTILS_DIR)/*.in)

UTILS_GEN_FILES := $(wildcard $(UTILS_DIR)/*_Generation.py)

GEN_FILES := $(patsubst $(UTILS_DIR)/%.py, %.py, $(UTILS_GEN_FILES))
CHECK_FILES := $(wildcard $(UTILS_DIR)/*_Cheker.py)

.PHONY : all run lib-inf clean 

# all1 : 
#	@echo $(TEST_FILES)

all : $(BUILD_DIR) $(TARGET_EXEC)

# build executable
$(TARGET_EXEC) :  $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET_EXEC)
	@echo "Building Calculator"

$(BUILD_DIR) : 
	mkdir build/

# for building Integer files
$(BUILD_DIR)/Integer_%.o : $(SRC_DIR)/Integer_%.cpp $(INCL_DIR)/Integer.h
	$(CXX) -c $(CXXFLAGS) $< -o $@

# for building Float files
$(BUILD_DIR)/Float_%.o : $(SRC_DIR)/Float_%.cpp $(INCL_DIR)/Float.h
	$(CXX) -c $(CXXFLAGS) $< -o $@

# for building Caculator
$(BUILD_DIR)/$(TARGET_EXEC).o : $(SRC_DIR)/$(TARGET_EXEC).cpp $(INCL_DIR)/Integer.h $(INCL_DIR)/Float.h
	$(CXX) -c $(CXXFLAGS) $< -o $@

generate : $(GEN_FILES) 
	@echo "Generating Test Cases"

# for generating test files
# %_Generation.py: 
#	python3 -u $(UTILS_DIR)/$@

$(LIB): $(BUILD_DIR) $(OBJS)
	@ar rcs $@ $(OBJS)
	@echo "Building Library!"

run : 
	./$(TARGET_EXEC)
	@echo "Running Calculator"

clean :
	-@rm -r $(BUILD_DIR)
	-@rm "$(TARGET_EXEC)";
	-@rm $(OUT)
	-@rm $(LIB)
	@echo "Clearing All Files!"