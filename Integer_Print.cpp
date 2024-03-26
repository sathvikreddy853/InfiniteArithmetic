#include "Integer.h"

void InfiniteArithmetic::Integer::Print()
{
    for(size_t i=0; i<_Size; i++)
    {
        std::cout << _Integer[_Size-1-i];
    }

    return;
}

std::ostream &InfiniteArithmetic::operator<< (std::ostream & output, const InfiniteArithmetic::Integer & num)
{
    for(size_t i=0; i<num._Size; i++)
    {
        output << num._Integer[num._Size-1-i];
    }

    return output;
}
