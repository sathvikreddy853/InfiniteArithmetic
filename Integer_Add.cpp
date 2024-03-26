#include "Integer.h"


InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Add(const Integer &other)
{
    Integer result;

    bool inThis = false, inOther = false;

    if (this->_Size > 0)
        inThis = true;

    if (other._Size > 0)
        inOther = true;

    int carry = 0;
    int digit = 0;
    int sum = 0;


    for(size_t i = 0; inThis || inOther; i++)
    {
        // to calculate sum of digits and carry
        sum = carry; 
        if (inThis)
            sum += this->_Integer[i];
        if (inOther)
            sum += other._Integer[i];

        digit = sum%10;
        carry = sum/10;
        result._Integer.push_back(digit);


        if(i == this->_Size - 1)
            inThis = false;
        
        if(i == other._Size - 1)
            inOther = false;
    }

    if (carry != 0)
        result._Integer.push_back(carry);

    result._Size = result._Integer.size();

    return result;
}