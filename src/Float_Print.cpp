#include "Float.h"

void InfiniteArithmetic::Float::Print()
{
    if(this->isNegative)
        std::cout << '-';

    size_t count = 0;
    size_t Size = Array.size();

    for(auto it = Array.rbegin(); it<Array.rend(); it++, count++)
    {
        if (count ==  Size - PointPosition + 1)
            std::cout << '.';
        std::cout << *it;
    }

    std::cout << std::endl;
}

std::ostream &InfiniteArithmetic::operator<<(std::ostream &output, const InfiniteArithmetic::Float & num)
{
    bool showZero = false;

    Float printable;

    if(num.isNegative) 
    {
        if(!num.isZero())
            output << '-';

        printable = num.Complement();
    }
    else
    {
        printable = num;
    }

    size_t count = 0;
    size_t Size = num.Array.size();

    for(std::vector<uint16_t>::const_reverse_iterator it = printable.Array.rbegin(); it<printable.Array.rend(); it++, count++)
    {
        if (!showZero && *it == 0)   continue;
        showZero = true;
        if (count ==  Size - num.PointPosition + 1)
            std::cout << '.';
        output << *it;
    }

    if (!showZero)
        output << 0;

    return output;
}