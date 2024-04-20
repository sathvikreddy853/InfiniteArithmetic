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

    size_t dividendSize = dividend.Array.size();
    size_t divisorSize = divisor.Array.size();

    uint64_t idigit_diff = (dividend.Array.size() - dividend.PointPosition) - (divisor.Array.size() - divisor.PointPosition) + 1;
    uint64_t tdigit_diff = (dividend.Array.size() - divisor.Array.size()) + 1;

    int16_t point_adder = dividend.Compare(divisor);
    if (point_adder >= 0)   point_adder = 2; 
    if (point_adder == -1)   point_adder = 1;

    // set up the divisor
    if(prec + 1 - (tdigit_diff - idigit_diff))
        dividend.Array.insert(dividend.Array.begin(), prec + 1 - (tdigit_diff - idigit_diff), 0);

    // divisor.Array.insert(divisor.Array.begin(), prec - (tdigit_diff - idigit_diff), 0);
        divisor.Array.insert(divisor.Array.begin(), dividendSize-divisorSize + prec + 1, 0);

    uint16_t multiplier;

    for(size_t i=0; i< prec + idigit_diff + 1; i++)
    {
        for(multiplier=1; multiplier<10; multiplier++)
        {
            if (dividend.Compare(divisor.MultiplyByDigit(multiplier)) == -1)
                break;
        }

        result.Array.insert(result.Array.begin(), multiplier - 1);

        if (multiplier > 1)
            dividend = dividend.Subtract(divisor.MultiplyByDigit(multiplier - 1));

        divisor.Array.erase(divisor.Array.begin());
    }

    if(result.isNegative)
        result = result.Complement();

    result.PopZero();
    result.PointPosition = result.Array.size() - idigit_diff + point_adder ;

    return result;
}