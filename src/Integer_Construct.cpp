#include "Integer.h"

// empty constructor
InfiniteArithmetic::Integer::Integer()
{
    isNegative = false;
}

// integer constructor: `string` -> `integer`
InfiniteArithmetic::Integer::Integer(std::string num)
{
    if(num[0] == '-')
    {
        isNegative = true;
        size_t Size = num.length() - 1;

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
        size_t Size = num.length();
        for(size_t i=0; i<Size; i++)
            Array.push_back((num[Size-i-1] - '0'));
    }

    while(!isNegative && !Array.empty() && Array.back() == 0)
        Array.pop_back();

    while(isNegative && !Array.empty() && Array.back() == 9)
        Array.pop_back();
}

// copy constructor
InfiniteArithmetic::Integer::Integer(const Integer &obj)
{
    for(int i : obj.Array)
        Array.push_back(i);
    
    isNegative = obj.isNegative;
}

InfiniteArithmetic::Integer &InfiniteArithmetic::Integer::operator=(const Integer &obj)
{
    Array.clear();

    for(int i : obj.Array)
        Array.push_back(i);

    isNegative = obj.isNegative;

    return *this;
}