#include "Float.h"

InfiniteArithmetic::Float InfiniteArithmetic::Float::MultiplyByDigit(uint16_t num)
{
    Float result;
    Float thisOne;

    if(this->isNegative)     
        thisOne = this->Complement();
    else
        thisOne = *this;

    int64_t thisOneSize = thisOne.Array.size();
    result.Array.resize(thisOneSize + 1);

    uint16_t carry = 0;
    uint16_t digit = 0;
    uint16_t sum = 0;

    int64_t index = 0;

    for(; index<thisOneSize; index++)
    {
        sum = (thisOne.Array[index] *  num) + carry;
        carry = sum/10;
        digit = sum%10;

        result.Array[index] = digit;
    }
    
    if (carry>0)
        result.Array[index] = carry;

    if (this->isNegative)
    {
        result = result.Complement();
        result.isNegative = true;
    }

	result.PointPosition = thisOne.PointPosition;
    
    return result;
}