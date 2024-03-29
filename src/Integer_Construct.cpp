#include "Integer.h"

InfiniteArithmetic::Integer::Integer()
{
    isNegative = false;
}

InfiniteArithmetic::Integer::Integer(std::string num)
{
    if(num[0] == '-')
    {
        isNegative = true;
        uint16_t Size = num.length() - 1;

        uint16_t carry = 0;
        uint16_t digit = 0;

        for(size_t i=0; i<Size; i++)
        {
            uint16_t sum = '9' - num[Size-i] + (i==0) + carry;
            carry = sum/10;
            digit = sum%10;
            Array.push_back(digit);
        }
    } 
    else
    {
        isNegative = false;
        uint16_t Size = num.length();
        for(size_t i=0; i<Size; i++)
            Array.push_back((num[num.length()-i-1] - '0'));
    }
}

InfiniteArithmetic::Integer::Integer(const Integer &obj)
{
    for(int i : obj.Array)
        Array.push_back(i);
    
    isNegative = obj.isNegative;
}