#include "Float.h"

void InfiniteArithmetic::Float::PopZero()
{
	while(Array.size() - PointPosition + 1 > 0 && Array.back() == 0)
		Array.pop_back();

	return;
}