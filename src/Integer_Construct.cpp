#include "Integer.h"

InfiniteArithmetic::Integer::Integer()
{
    Size = 0;
    isNegative = false;
}

InfiniteArithmetic::Integer::Integer(std::string num)
{
    if(num[0] == '-')
    {
        isNegative = true;
        Size = num.length() - 1;

        uint16_t carry = 0;
        uint16_t digit = 0;

        for(size_t i=0; i<Size; i++)
        {
            uint16_t sum = '9' - num[num.length()-i-1] + (i==0) + carry;
            carry = sum/10;
            digit = sum%10;
            Array.push_back(digit);
        }
    } 
    else
    {
        isNegative = false;
        Size = num.length();
        for(size_t i=0; i<Size; i++)
            Array.push_back((num[num.length()-i-1] - '0'));
    }
}

InfiniteArithmetic::Integer::Integer(const Integer &obj)
{
    Size = obj.Size;

    for(int i : obj.Array)
        Array.push_back(i);
    
    isNegative = obj.isNegative;
}