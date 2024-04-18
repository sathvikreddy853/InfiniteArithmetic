#include "Float.h"

size_t InfiniteArithmetic::Float::SetPrecision(size_t prec=1000)
{
	static size_t precision = 1000;
	precision = prec;

	return precision;
}