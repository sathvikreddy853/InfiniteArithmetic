#include "Float.h"

bool InfiniteArithmetic::Float::operator>(const Float &other)
{
	return (this->Compare(other) == 1);
}

bool InfiniteArithmetic::Float::operator>=(const Float &other)
{
	return (this->Compare(other) == 1 || this->Compare(other) == 0);
}

bool InfiniteArithmetic::Float::operator<(const Float &other)
{
	return (this->Compare(other) == -1);
}

bool InfiniteArithmetic::Float::operator<=(const Float &other)
{
	return (this->Compare(other) == -1 || this->Compare(other) == 0);
}

bool InfiniteArithmetic::Float::operator==(const Float &other)
{
	return (this->Compare(other) == 0);
}

bool InfiniteArithmetic::Float::operator!=(const Float &other)
{
	return !(*this == other);
}