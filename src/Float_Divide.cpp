#include "Float.h"

InfiniteArithmetic::Float InfiniteArithmetic::Float::Divide(Float divisor)
{
    Float result;
    Float dividend;

    result.isNegative = this->isNegative ^ divisor.isNegative;

    // setting the variables 
    if (this->isNegative)
    {
        dividend = this->Complement();
        dividend.isNegative = false;
    }
    else
        dividend = *this;
    
    if (divisor.isNegative)
    {
        divisor = divisor.Complement();
        divisor.isNegative = false;
    }

    uint64_t idigit_diff = (dividend.Array.size() - dividend.PointPosition) - (divisor.Array.size() - divisor.PointPosition) + 1; // 3
    uint64_t tdigit_diff = (dividend.Array.size() - divisor.Array.size()) + 1; // 6

    uint64_t dividend_suffix = prec + 1 - (tdigit_diff - idigit_diff);

    dividend.Array.insert(dividend.Array.begin(), dividend_suffix, 0);
    dividend.PointPosition += dividend_suffix;

    // set up the divisor

    divisor.Array.insert(divisor.Array.begin(), idigit_diff - 2, 0);
    divisor.PointPosition -= (idigit_diff - 1);

    uint16_t multiplier;
    
    size_t it=0;
    for(it=0; it < idigit_diff + prec + 1; it++)      // correct
    {
        for(multiplier=1; multiplier<10; multiplier++)
        {
            if (dividend.Compare(divisor.MultiplyByDigit(multiplier)) == -1)
                break;   
        }

        result.Array.insert(result.Array.begin(), multiplier - 1);
        if (multiplier > 1)
            dividend = dividend.Subtract(divisor.MultiplyByDigit(multiplier - 1));


        if (dividend.isZero())
            break;

        divisor.Array.insert(divisor.Array.end(), 0);
        divisor.PointPosition += 1;
    }

    if(result.isNegative)
        result = result.Complement();

	// result.PointPosition = it - dividendSize + divisorSize - 1;
    result.PointPosition = it - idigit_diff;

    return result;
}