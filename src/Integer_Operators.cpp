#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::operator+(const Integer &other)
{
	return this->Add(other);
}

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::operator-(const Integer &other)
{
	return this->Subtract(other);
}

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::operator*(const Integer &other)
{
	return this->Multiply(other);
}

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::operator/(const Integer &other)
{
	return this->Divide(other);
}

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::operator%(const Integer &other)
{
	return this->Mod(other);
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