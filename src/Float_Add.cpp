#include "Float.h"

InfiniteArithmetic::Float InfiniteArithmetic::Float::Add(Float otherOne)
{
    Float result;
    bool inThis = true, inOther = true;

    MatchDigits(*this, otherOne);
    ResizeEnds(*this, otherOne);

    uint16_t carry = 0;
    uint16_t digit = 0;
    uint16_t sum = 0;

    for(size_t i=0; inThis || inOther; i++)    
    {
        // to calculate the sum of the digits and carry
        sum = carry;
        if (inThis)
            sum += this->Array[i];
        
        if (inOther)
            sum += otherOne.Array[i];

        digit = sum%10;
        carry = sum/10;
        result.Array.push_back(digit);

        if(i == this->Array.size() - 1)
            inThis = false;
        
        if(i == otherOne.Array.size() - 1)
            inOther = false;
    }

    if(result.Array.back() == 9)
        result.isNegative = true;
    
    result.PointPosition = (this->PointPosition > otherOne.PointPosition ? this->PointPosition : otherOne.PointPosition) + 2;

    result.PopZero();

    return result;
}