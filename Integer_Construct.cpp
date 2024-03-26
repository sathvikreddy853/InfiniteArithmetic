#include "Integer.h"

InfiniteArithmetic::Integer::Integer()
{
    _Size = 0;
}

InfiniteArithmetic::Integer::Integer(std::string num)
{
    _Size = num.length();

    for (size_t i=0; i < _Size; i++)
    {
        _Integer.push_back((num[_Size-1-i] - '0'));
    }
}