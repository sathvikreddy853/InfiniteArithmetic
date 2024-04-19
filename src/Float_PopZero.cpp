#include "Float.h"

void InfiniteArithmetic::Float::PopZero()
{
	while(Array.size() - PointPosition + 1 > 0 && Array.back() == 0 && !isNegative)
		Array.pop_back();
	
	while(Array.size() - PointPosition + 1 > 0 && Array.back() == 9 && isNegative)
		Array.pop_back();

	return;
}