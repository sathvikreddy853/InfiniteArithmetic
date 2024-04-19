#include "Float.h"

size_t InfiniteArithmetic::Float::SetPrecision(size_t prec)
{
	static size_t precision = 100;
	precision = prec;

	return precision;
}