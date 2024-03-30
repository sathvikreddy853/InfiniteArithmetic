#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Multiply(Integer otherOne)
{
    Integer result;
    Integer thisOne;

    // setting the variables up;
    if (this->isNegative)
        thisOne = this->Complement();
    else
        thisOne = *this;
    
    if (otherOne.isNegative)
        otherOne = otherOne.Complement();
    
    result.isNegative = thisOne.isNegative ^ otherOne.isNegative;

    bool inThisOne = false, inOtherOne = false;

    if(!thisOne.Array.empty())
        inThisOne = true;

    if(!thisOne.Array.empty())
        inOtherOne = true;

    uint16_t carry = 0;
    uint16_t digit = 0;
    uint16_t sum = 0;

    // for result
    uint16_t shift = 0;
    uint16_t place = 0;

    result.Array.resize(thisOne.Array.size() + otherOne.Array.size() + 1);

    {
        using iter = std::vector<uint16_t>::const_iterator;
        for(iter thisElem = thisOne.Array.begin(); thisElem < thisOne.Array.end(); thisElem++, shift++)
        {
            carry = 0;
            place = 0;

            for(iter otherElem = otherOne.Array.begin(); otherElem < otherOne.Array.end(); otherElem++, place++)
            {   
                sum = (*thisElem) * (*otherElem) + carry + result.Array[shift + place];
                digit = sum%10;
                carry = sum/10;

                result.Array[shift + place] = digit;
            }

            if (carry != 0)
                result.Array[shift + place] = carry;
        }
    }

    if(result.isNegative)
        result = result.Complement();

    return result;
}