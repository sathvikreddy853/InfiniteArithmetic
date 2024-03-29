#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Complement() const 
{
    Integer complement (*this);

    uint16_t sum = 0;
    uint16_t carry= 0;
    uint16_t digit = 0;

    for (auto it = complement.Array.begin(); it != complement.Array.end(); ++it)
    {
        sum = (9 - *it) + (it == complement.Array.begin()) + carry;
        carry = sum/10;
        digit = sum%10;
        *it = digit;
    }

    complement.PopZero();
    return complement;
}