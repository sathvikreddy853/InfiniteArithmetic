#include "Integer.h"

int16_t InfiniteArithmetic::Integer::Compare(const Integer & other)
{
    if (this->isNegative ^ other.isNegative)
    {
        if(this->isNegative)
            return -1;
        else
            return 1;
    }
    
    else
    {
        Integer thisOne;
        Integer otherOne;
        int16_t multiplier;

        if (this->isNegative)
        {
            thisOne = this->Complement();
            otherOne = other.Complement();
            multiplier = -1;
        }
        else
        {
            thisOne = *this;
            otherOne = other;
            multiplier = 1;
        }

        thisOne.PopZero();
        otherOne.PopZero();

        if(thisOne.Array.size() > otherOne.Array.size())
            return 1 * multiplier;
        
        if(thisOne.Array.size() < otherOne.Array.size())
            return -1 * multiplier;

        while(thisOne.Array.size() > 0)
        {
            if (thisOne.Array.back() > otherOne.Array.back())
                return 1 * multiplier;
            
            if (thisOne.Array.back() < otherOne.Array.back())
                return -1 * multiplier;

            thisOne.Array.pop_back();
            otherOne.Array.pop_back();
        }
    }

    return 0;   
}