#include "Integer.h"

InfiniteArithmetic::Integer::Integer()
{
    Size = 0;
    isNegative = false;
}

InfiniteArithmetic::Integer::Integer(std::string num)
{
    if(num[0] == '-')
        isNegative = true;
    else
        isNegative = false;

    Size = num.length() - isNegative;
    
    for(size_t i=0; i<Size; i++)
    {
        Array.push_back((num[num.length()-i-1] - '0'));
    }
}

InfiniteArithmetic::Integer::Integer(const Integer &obj)
{
    Size = obj.Size;

    for(int i : obj.Array)
        Array.push_back(i);
    
    isNegative = obj.isNegative;
}