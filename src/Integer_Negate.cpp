#include "Integer.h"

InfiniteArithmetic::Integer &InfiniteArithmetic::Integer::Negate() 
{
	Integer* result = new Integer;

	*result = this->Complement();
	result->isNegative = !(this->isNegative);

	return *result;
}