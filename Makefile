# Makefile InfiniteArithmetic

SRC_DIR := src 
OBJ_DIR := object
CXX := g++
CXXFLAGS := -std=c++17

SRCS := $(wildcard $(SRC_DIR)/*.cpp)
 
objects := Integer_Construct.o Integer_Add.o Calculator.o Integer_Print.o Integer_Subtract.o Integer_Complement.o Integer_PopZero.cpp

all : $(objects) 
	$(CC) -o Calculator $(objects)

Integer_Construct.o : Integer_Construct.cpp 
	$(CC) -c -o $@ $<

Integer_Add.o : Integer_Add.cpp
	$(CC) -c -o $@ $<

Integer_Print.o : Integer_Print.cpp
	$(CC) -c -o $@ $<

Calculator.o : Calculator.cpp
	$(CC) -c -o $@ $<

Integer_Complement.o : Integer_Complement.cpp
	$(CC) -c -o $@ $<

Integer_Subtract.o : Integer_Subtract.cpp
	$(CC) -c -o $@ $<

Integer_PopZero.o : Integer_PopZero.cpp
	$(CC) -c -o $@ $<

$(objects) : Integer.h

clean :
	rm Calculator $(objects)