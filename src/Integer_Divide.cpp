#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Divide(Integer divisor)
{
    Integer result;
    Integer dividend;

    try 
    {
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

        if(divisor.isZero())
        {
            throw "DivisionByZeroError: The Divisor Provided Is Equal To Zero";
        }

        int64_t dividendSize = dividend.Array.size();
        int64_t divisorSize = divisor.Array.size();

        // set up the divisor
        if (divisorSize > dividendSize)
            return Integer("0");
        else
            divisor.Array.insert(divisor.Array.begin(), dividendSize-divisorSize, 0);

        uint16_t multiplier;

        for(int64_t i=0; i<dividendSize-divisorSize+1; i++)
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
    }
    catch(const char * error_msg)
    {
        std::cerr << error_msg << std::endl;
		exit(1);
    }

    return result;
}