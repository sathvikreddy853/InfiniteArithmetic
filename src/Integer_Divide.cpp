#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Divide(Integer divisor)
{
    Integer result;
    Integer dividend;

    // setting the variables 
    if (this->isNegative)
        dividend = this->Complement();
    else
        dividend = *this;
    
    if (divisor.isNegative)
        divisor = divisor.Complement();


    size_t dividendSize = dividend.Array.size();
    size_t divisorSize = divisor.Array.size();

    // set up the divisor
    if (divisorSize > dividendSize)
        return Integer("0");
    else
        for(size_t i=0; i<dividendSize-divisorSize; i++)
            divisor.Array.insert(divisor.Array.begin(), 0);

    for(size_t i=0; i<dividendSize-divisorSize+1; i++)
    {
        for(uint16_t multiplier=1; multiplier<10; multiplier++)
        {
            // divisor.Multiply(Integer(std::string(1, '0' + multiplier)));
        }
    }
    

    // if(result.isNegative)
        // result = result.Complement();

    return result;
}