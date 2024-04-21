#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Mod(Integer other)
{
	Integer thisOne = *this;
	return thisOne - ((thisOne/other) * other);
}