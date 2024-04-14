#include "Integer.h"

bool InfiniteArithmetic::Integer::isZero() const
{
    uint16_t zero_digit = 9 * this->isNegative;
    bool isZero = true;

    for(uint16_t elem : this->Array)
    {
        if (elem != zero_digit)
        {
            isZero = false;
            break;
        }
    }

    return isZero;
}