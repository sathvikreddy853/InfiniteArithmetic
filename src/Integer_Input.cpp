#include "Integer.h"

std::istream &InfiniteArithmetic::operator>> (std::istream & input, InfiniteArithmetic::Integer &num)
{
	std::string input_str;
	input >> input_str;

	num = Integer(input_str);

	return input;
}