#include "Float.h"

int16_t InfiniteArithmetic::Float::Compare(const Float & other)
{
	Float result = this->Subtract(other);
	if(result.isNegative)
		return -1;
	else if(result.isZero()) 
		return 0;
	else 
		return 1;
}