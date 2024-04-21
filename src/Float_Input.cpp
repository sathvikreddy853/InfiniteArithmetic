#include "Float.h"

std::istream &InfiniteArithmetic::operator>> (std::istream & input, InfiniteArithmetic::Float &num)
{
	std::string input_str;
	input >> input_str;

	num = Float(input_str);

	return input;
}