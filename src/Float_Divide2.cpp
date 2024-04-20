#include "Float.h"

InfiniteArithmetic::Float InfiniteArithmetic::Float::Divide2(Float divisor)
{
	Float result;
    Float dividend;

    result.isNegative = this->isNegative ^ divisor.isNegative;

    if (this->isNegative)
		dividend = this->Negate();
    else
        dividend = *this;
    
    if (divisor.isNegative)
		divisor.Negate();

	int64_t idigit_diff = (dividend.Array.size() - dividend.PointPosition) - (divisor.Array.size() - divisor.PointPosition) + 1;
	int64_t tdigit_diff = (dividend.Array.size() - divisor.Array.size()) + 1;

	if(prec + 1 - (tdigit_diff - idigit_diff))
		dividend.Array.insert(dividend.Array.begin(), prec + 1 - (tdigit_diff - idigit_diff), 0);

	return result;
}
