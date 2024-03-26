#include "Integer.h"

InfiniteArithmetic::Integer::Integer()
{
    Size = 0;
    isNegative = false;
}

InfiniteArithmetic::Integer::Integer(std::string num)
{
    Size = num.length();

    for (size_t i=0; i < Size; i++)
    {
        Array.push_back((num[Size-1-i] - '0'));
    }
}

InfiniteArithmetic::Integer::Integer(const Integer &obj)
{
    Size = obj.Size;

    for(int i : obj.Array)
        Array.push_back(i);
    
    isNegative = obj.isNegative;
}