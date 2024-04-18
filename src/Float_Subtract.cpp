#include "Float.h"

InfiniteArithmetic::Float InfiniteArithmetic::Float::Subtract(Float other)
{
	Float result;

	result = this->Add(other.Negate());

	return result;
}
