#include "Float.h"

InfiniteArithmetic::Float InfiniteArithmetic::Float::Add(Float otherOne)
{
    Float result;
    bool inThis = true, inOther = true;

    if(this->PointPosition > otherOne.PointPosition)
        inOther = false;
    
    if(this->PointPosition < otherOne.PointPosition)
        inThis = false;

    MatchDigits(*this, otherOne);

    size_t shift = this->PointPosition - otherOne.PointPosition;

    size_t thisIndex = 0; 
    size_t otherIndex = 0;

    thisIndex -= !inThis * shift;
    otherIndex -= !inOther * shift;

    uint16_t carry = 0;
    uint16_t digit = 0;
    uint16_t sum = 0;

    for(size_t i=0; inThis || inOther; i++, thisIndex++, otherIndex++)    
    {
        // to calculate the sum of the digits and carry
        sum = carry;
        if (inThis)
            sum += this->Array[thisIndex];
        
        if (inOther)
            sum += otherOne.Array[otherIndex];

        digit = sum%10;
        carry = sum/10;
        result.Array.push_back(digit);

        if(i+1-shift == 0)
            inThis = true, inOther = true;

        if(thisIndex == this->Array.size() - 1)
            inThis = false;
        
        if(otherIndex == otherOne.Array.size() - 1)
            inOther = false;
    }

    if(result.Array.back() == 9)
        result.isNegative = true;
    
    result.PointPosition = this->PointPosition > otherOne.PointPosition ? this->PointPosition : otherOne.PointPosition;

    // HR;
    // this->Print();
    // otherOne.Print();
    // result.Print();
    // HR;

    return result;
}