#include "Float.h"

bool InfiniteArithmetic::Float::isZero() const
{
	uint16_t zero_digit = 9 * this->isNegative;
	bool isZero = true;

	for(auto elem : this->Array)
	{
		if(elem != zero_digit)
		{
			isZero = false;
			break;
		}
	}

	return isZero;
}