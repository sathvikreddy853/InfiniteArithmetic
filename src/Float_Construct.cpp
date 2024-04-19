#include "Float.h"

// empty constructor
InfiniteArithmetic::Float::Float() : PointPosition(1), isNegative(false)
{
}

InfiniteArithmetic::Float::Float(std::string num) : PointPosition(1), isNegative(false)
{
    if (num[0] == '-')
    {
        isNegative = true;
        size_t Size = num.length() - 1;

        uint16_t carry = 0;
        uint16_t digit = 0;

        for (size_t i = 0; i < Size; i++)
        {
            if (num[Size - i] == '.')
                PointPosition = i + 1;
            else
            {
                uint16_t sum = '9' - num[Size - i] + (i == 0) + carry;
                carry = sum / 10;
                digit = sum % 10;
                Array.push_back(digit);
            }
        }
    }
    else
    {
        isNegative = false;
        size_t Size = num.length();
        for (size_t i = 0; i < Size; i++)
        {
            if (num[Size - i - 1] == '.')
                PointPosition = i + 1;
            else
                Array.push_back((num[Size - i - 1] - '0'));
        }
    }

    while(!isNegative && Array.size() - PointPosition + 1 > 0 && Array.back() == 0)
        Array.pop_back();

    while(isNegative && Array.size() - PointPosition + 1 && Array.back() == 9)
        Array.pop_back();
}

InfiniteArithmetic::Float::Float(const Float &obj) : PointPosition(obj.PointPosition), isNegative(obj.isNegative)
{
    for (int i : obj.Array)
        Array.push_back(i);
}

InfiniteArithmetic::Float &InfiniteArithmetic::Float::operator=(const Float &obj)
{
    Array.clear();

    for (int i : obj.Array)
        Array.push_back(i);

    isNegative = obj.isNegative;
    PointPosition = obj.PointPosition;

    return *this;
}