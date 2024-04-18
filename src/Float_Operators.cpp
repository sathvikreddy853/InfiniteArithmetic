#include "Float.h"

InfiniteArithmetic::Float InfiniteArithmetic::Float::operator+(Float &other)
{
	return this->Add(other);
}

InfiniteArithmetic::Float InfiniteArithmetic::Float::operator-(Float &other)
{
	return this->Subtract(other);
}

InfiniteArithmetic::Float InfiniteArithmetic::Float::operator*(Float &other)
{
	return this->Multiply(other);
}

InfiniteArithmetic::Float InfiniteArithmetic::Float::operator/(Float &other)
{
	return this->Divide(other);
}

InfiniteArithmetic::Float InfiniteArithmetic::Float::operator-()
{
	return this->Negate();
}

InfiniteArithmetic::Float InfiniteArithmetic::Float::operator+()
{
	return *this;
}

InfiniteArithmetic::Float InfiniteArithmetic::Float::operator~()
{
	return this->Complement();
}