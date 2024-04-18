#include "Float.h"

InfiniteArithmetic::Float &InfiniteArithmetic::Float::Negate() const 
{
	Float* result = new Float;

	*result = this->Complement();
	result->isNegative = !(this->isNegative);

	return *result;
}