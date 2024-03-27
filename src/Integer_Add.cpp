#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Add(const Integer &other)
{
    Integer result;

    bool inThis = false, inOther = false;

    if (this->Size > 0)
        inThis = true;

    if (other.Size > 0)
        inOther = true;

    int carry = 0;
    int digit = 0;
    int sum = 0;


    for(size_t i = 0; inThis || inOther; i++)
    {
        // to calculate sum of digits and carry
        sum = carry; 
        if (inThis)
            sum += this->Array[i];
        if (inOther)
            sum += other.Array[i];

        digit = sum%10;
        carry = sum/10;
        result.Array.push_back(digit);


        if(i == this->Size - 1)
            inThis = false;
        
        if(i == other.Size - 1)
            inOther = false;
    }

    result.Array.push_back(carry);
    result.PopZero();

    result.Size = result.Array.size();

    return result;
}