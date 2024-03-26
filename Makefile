# Makefile InfiniteArithmetic

objects := Integer_Construct.o Integer_Add.o Calculator.o Integer_Print.o

main : $(objects) 
	g++ -o Calculator $(objects)

Integer_Construct.o : Integer_Construct.cpp 

Integer_Add.o : Integer_Add.cpp

Integer_Print.o : Integer_Print.cpp

Calculator.o : Calculator.cpp

$(objects) : Integer.h

clean :
	rm Calculator $(objects)