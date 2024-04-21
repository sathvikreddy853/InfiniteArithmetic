#include "Float.h"
#include "Integer.h"

InfiniteArithmetic::Float InfiniteArithmetic::Float::Divide(Float divisor)
{
    Float result;
    Float dividend;

    try
    {
        result.isNegative = this->isNegative ^ divisor.isNegative;

        // setting the variables
        if (this->isNegative)
            dividend.Negate();
        else
            dividend = *this;
        
        if (divisor.isNegative)
            divisor.Negate();

        dividend.PopZero();
        divisor.PopZero();

        if(divisor.isZero())
        {
            throw "DivisionByZeroError: The Divisor Provided Is Equal To Zero";
        }

        int64_t idigit_diff = (dividend.Array.size() - dividend.PointPosition) - (divisor.Array.size() - divisor.PointPosition) + 1;
        int64_t tdigit_diff = (dividend.Array.size() - divisor.Array.size()) + 1;

        int64_t dp = tdigit_diff - idigit_diff;
        int64_t ap = prec - dp;

        // set up the divisor
        if(prec + 1 - (tdigit_diff - idigit_diff))
            dividend.Array.insert(dividend.Array.begin(), ap, 0);

        // divisor.Array.insert(divisor.Array.begin(), prec - (tdigit_diff - idigit_diff), 0);

        Integer num1;
        Integer num2; 

        num1.Array = dividend.Array;
        num2.Array = divisor.Array;

        while(!num1.Array.empty() && num1.Array.back() == 0)
            num1.Array.pop_back();

        while(!num2.Array.empty() && num2.Array.back() == 0)
            num2.Array.pop_back();

        result.Array = (num1/num2).Array;

        result.PointPosition = prec+1;

        if((int64_t)(result.PointPosition - 1 - result.Array.size()) > 0)
            result.Array.insert(result.Array.end(), result.PointPosition - 1 - result.Array.size(), 0);
    }
    catch(const char * error_msg)
    {
        std::cerr << error_msg << std::endl;
		exit(1);
    }

    return result;
}