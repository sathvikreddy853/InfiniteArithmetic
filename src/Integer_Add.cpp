#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Add(Integer otherOne)
{
    Integer result;

    Integer thisOne = *this;

    MatchDigits(thisOne, otherOne);

    bool inThis = true, inOther = true;

    uint16_t carry = 0;
    uint16_t digit = 0;
    uint16_t sum = 0;

    for(size_t i = 0; inThis || inOther; i++)
    {
        // to calculate sum of digits and carry
        sum = carry; 
        if (inThis)
            sum += thisOne.Array[i];
        if (inOther)
            sum += otherOne.Array[i];

        digit = sum%10;
        carry = sum/10;
        result.Array.push_back(digit);


        if(i == thisOne.Array.size() - 1)
            inThis = false;
        
        if(i == otherOne.Array.size() - 1)
            inOther = false;
    }

    result.Array.pop_back();

    if(result.Array.back() == 9)
        result.isNegative = true;

    // thisOne.Print(); 
    // otherOne.Print();
    // result.Print();

    return result;
}