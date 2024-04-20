#include "Float.h"

void InfiniteArithmetic::Float::ResizeEnds(Float &num1, Float &num2)
{
	size_t pp1 = num1.PointPosition;
	size_t pp2 = num2.PointPosition;

	if(pp1 > pp2)
	{
		num2.Array.insert(num2.Array.begin(), pp1-pp2+2,num2.isNegative ? 9 : 0);

		num1.Array.insert(num1.Array.begin(), 2, num1.isNegative ? 9 : 0);
	}
	else
	{
		num1.Array.insert(num1.Array.begin(), pp2-pp1+2,num2.isNegative ? 9 : 0);

		num2.Array.insert(num2.Array.begin(), 2, num2.isNegative ? 9 : 0);
	}
}