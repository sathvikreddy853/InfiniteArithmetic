#include "Integer.h"

bool InfiniteArithmetic::Integer::isZero() const
{
    bool isZero = true;

    for(uint16_t elem : this->Array)
    {
        if (elem != 0)
        {
            isZero = false;
            break;
        }
    }

    return isZero;
}