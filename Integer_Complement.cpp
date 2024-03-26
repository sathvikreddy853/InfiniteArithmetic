#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Complement()
{
    Integer complement;
    complement = *this;

    for(int i=0; i<Size; i++)
    {
        complement.Array[i] = 9 - complement.Array[i];
    }

    while(complement.Size > 0 && complement.Array[complement.Size - 1] == 0)
    {
        complement.Array.pop_back();
        complement.Size -= 1;
    }

    complement = complement.Add(Integer("1"));

    return complement;
}