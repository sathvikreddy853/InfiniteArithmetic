#include "Integer.h"

InfiniteArithmetic::Integer &InfiniteArithmetic::Integer::operator+(Integer &other)
{
	return this->Add2(other);
}

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::operator-(Integer &other)
{
	return this->Subtract(other);
}

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::operator*(Integer &other)
{
	return this->Multiply(other);
}

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::operator/(Integer &other)
{
	return this->Divide(other);
}

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::operator-()
{
	return this->Negate();
}

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::operator+()
{
	return *this;
}

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::operator~()
{
	return this->Complement();
}