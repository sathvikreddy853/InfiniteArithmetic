#include "Float.h"

InfiniteArithmetic::Float InfiniteArithmetic::Float::Divide(Float divisor)
{
    Float result;
    Float dividend;

    result.isNegative = this->isNegative ^ divisor.isNegative;

	size_t precision = SetPrecision();

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

    // set up the divisor
	divisor.Array.insert(divisor.Array.begin(), 0);

	size_t diff = dividendSize-divisorSize>0 ? dividendSize-divisorSize : divisorSize-dividendSize;

	divisor.Array.insert(divisor.Array.begin(), diff + precision, 0);

    uint16_t multiplier;

    for(size_t i=0; i<dividendSize-divisorSize+1+precision; i++)
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

	result.PointPosition = precision;

    return result;
}