#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Complement()
{
    for(int i=0; i<_Size; i++)
    {
        _Integer[i] = 9 - _Integer[i];
    }

    while(_Size > 0 && _Integer[_Size - 1] == 0)
    {
        _Integer.pop_back();
        _Size -= 1;
    }

    *this = this->Add(Integer("1"));

    return *this;
}