#include "Integer.h"

// empty constructor
InfiniteArithmetic::Integer::Integer()
{
    isNegative = false;
}

// integer constructor: `string` -> `integer`
InfiniteArithmetic::Integer::Integer(std::string num)
{
    VerifyString(num);

    if(num[0] == '-')
    {
        isNegative = true;
        int64_t Size = num.length() - 1;

        uint16_t carry = 0;
        uint16_t digit = 0;

        for(int64_t i=0; i<Size; i++)
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
        int64_t Size = num.length();
        for(int64_t i=0; i<Size; i++)
            Array.push_back((num[Size-i-1] - '0'));
    }

    bool isZero = true;
    for(auto elem : Array)
    {
        if (elem != 0) 
        {
            isZero = false;
            break;
        }
    }

    if(!isZero)
    {
        while(!isNegative && !Array.empty() && Array.back() == 0)
            Array.pop_back();

        while(isNegative && !Array.empty() && Array.back() == 9)
            Array.pop_back();
    }
    else
    {
        Array = {0};
        isNegative = false;
    }
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