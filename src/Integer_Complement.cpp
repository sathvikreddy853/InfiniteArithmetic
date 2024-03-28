#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Complement() const 
{
    Integer complement;
    complement = *this;

    for(size_t i=0; i<Size; i++)
    {
        complement.Array[i] = 9 - complement.Array[i];
    }

    complement = complement.Add(Integer("1"));
    complement.PopZero();

    return complement;
}