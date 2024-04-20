#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Mod(Integer other)
{
	return this->Subtract((this->Divide(other)).Multiply(other));
}