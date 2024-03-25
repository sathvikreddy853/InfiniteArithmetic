# Makefile InfiniteArithmetic

objects := # object files

main : $(objects)
	g++ -o main $(objects) 

clean :
	rm main $(objects)