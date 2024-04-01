#include "Integer.h"

bool InfiniteArithmetic::Integer::isZero() const
{
    Integer thisOne;
    bool isZero = true;

    if (this->isNegative)
        thisOne = this->Complement();
    else 
        thisOne = *this;

    for(uint16_t i : thisOne.Array)
    {
        if (i != 0)
        {
            isZero = false;
            break;
        }
    }

    return isZero;
}