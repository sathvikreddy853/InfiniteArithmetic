#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Complement()
{
    Integer complement;
    complement = *this;

    for(int i=0; i<Size; i++)
    {
        complement.Array[i] = 9 - complement.Array[i];
    }

    complement = complement.Add(Integer("1"));
    complement.PopZero();

    return complement;
}