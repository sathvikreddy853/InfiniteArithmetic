#include "Integer.h"

void InfiniteArithmetic::Integer::MatchDigits(Integer & num1, Integer & num2)
{
    if (num1.Array.size() > num2.Array.size())
    {
        for(size_t i=0; i< num1.Array.size()-num2.Array.size()+1; i++)
            num2.Array.push_back(num2.isNegative ? 9 : 0);
        
        num1.Array.push_back(num1.isNegative ? 9 : 0);
    }
    else
    {
        for(size_t i=0; i< num2.Array.size()-num1.Array.size()+1; i++)
            num1.Array.push_back(num1.isNegative ? 9 : 0);
        
        num2.Array.push_back(num2.isNegative ? 9 : 0);
    }
}