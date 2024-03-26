# Makefile InfiniteArithmetic

CC = g++ -std=c++17

objects := Integer_Construct.o Integer_Add.o Calculator.o Integer_Print.o Integer_Subtract.o Integer_Complement.o

main : $(objects) 
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

$(objects) : Integer.h

clean :
	rm Calculator $(objects)