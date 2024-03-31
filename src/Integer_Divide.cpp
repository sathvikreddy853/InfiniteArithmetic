#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Divide(Integer divisor)
{
    Integer result;
    Integer dividend;

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

    // set up the divisor
    if (divisorSize > dividendSize)
        return Integer("0");
    else
        divisor.Array.insert(divisor.Array.begin(), dividendSize-divisorSize, 0);

        divisor.Print();
        dividend.Print();

    uint16_t multiplier;

    for(size_t i=0; i<dividendSize-divisorSize+1; i++)
    {
        for(multiplier=1; multiplier<10; multiplier++)
        {
            if (dividend.Compare(divisor.MultiplyByDigit(multiplier)) == -1)
                break;   
        }

        dividend.Subtract(divisor.MultiplyByDigit(multiplier - 1));

        divisor.Array.erase(divisor.Array.begin());
        divisor.Print();
    }
    

    // if(result.isNegative)
        // result = result.Complement();

    return result;
}