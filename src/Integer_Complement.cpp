#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Complement() const 
{
    Integer complement (*this);

    uint16_t sum = 0;
    uint16_t carry= 0;
    uint16_t digit = 0;

    for(size_t i=0; i<Size; i++)
    {
        sum = 9 - complement.Array[i] + i==0 + carry;
        carry = sum/10;
        digit = sum%10;

        complement.Array[i] = digit;
    }

    return complement;
}