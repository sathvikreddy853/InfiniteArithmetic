#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Mod(Integer other)
{
	Integer thisOne = *this;
	LOG(thisOne);
	Integer temp = ((thisOne/other) * other);
	LOG(temp);
	return thisOne - temp;
}