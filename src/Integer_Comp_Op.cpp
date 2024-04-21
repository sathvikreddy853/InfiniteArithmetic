#include "Integer.h"

bool InfiniteArithmetic::Integer::operator>(const Integer &other)
{
	return (this->Compare(other) == 1);
}

bool InfiniteArithmetic::Integer::operator>=(const Integer &other)
{
	return (this->Compare(other) == 1 || this->Compare(other) == 0);
}

bool InfiniteArithmetic::Integer::operator<(const Integer &other)
{
	return (this->Compare(other) == -1);
}

bool InfiniteArithmetic::Integer::operator<=(const Integer &other)
{
	return (this->Compare(other) == -1 || this->Compare(other) == 0);
}

bool InfiniteArithmetic::Integer::operator==(const Integer &other)
{
	return (this->Compare(other) == 0);
}

bool InfiniteArithmetic::Integer::operator!=(const Integer &other)
{
	return !(*this == other);
}