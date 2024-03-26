#include "Integer.h"

void InfiniteArithmetic::Integer::Print()
{
    for(size_t i=0; i<_Size; i++)
    {
        std::cout << _Integer[_Size-1-i];
    }

    return;
}