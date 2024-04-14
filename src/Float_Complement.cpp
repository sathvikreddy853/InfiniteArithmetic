#include "Float.h"

InfiniteArithmetic::Float &InfiniteArithmetic::Float::Complement() const
{
	Float *complement = new Float(*this);

    uint16_t sum = 0;
    uint16_t carry= 0;
    uint16_t digit = 0;
	
	for (auto elem_it = complement->Array.begin(); elem_it != complement->Array.end(); ++elem_it)
    {
        sum = (9 - *elem_it) + (elem_it == complement->Array.begin()) + carry;
        carry = sum/10;
        digit = sum%10;
        *elem_it = digit;
    }

	return *complement;
}