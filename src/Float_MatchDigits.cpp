#include "Float.h"

// makes sure that both the numbers have equal number of digits
void InfiniteArithmetic::Float::MatchDigits(Float &num1, Float &num2)
{
    size_t Size1 = num1.Array.size();
    size_t Size2 = num2.Array.size();

    if (Size1 > Size2)
    {
        for(size_t i=0; i<Size1-Size2+2; i++)
            num2.Array.push_back(num2.isNegative ? 9 : 0);
        
        for(uint16_t i=0; i<2; i++)
            num1.Array.push_back(num1.isNegative ? 9 : 0);
    }
    else
    {
        for(size_t i=0; i<Size2-Size1+2; i++)
            num1.Array.push_back(num1.isNegative ? 9 : 0);
        
        for(uint16_t i=0; i<2; i++)
            num2.Array.push_back(num2.isNegative ? 9 : 0);
    }

    return;
}