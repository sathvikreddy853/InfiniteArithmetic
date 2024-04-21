#include "Float.h"

void InfiniteArithmetic::Float::Print()
{
    if(this->isNegative)
        std::cout << '-';

    int64_t count = 0;
    int64_t Size = Array.size();

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

    int64_t count = 0;
    int64_t Size = num.Array.size();

    uint64_t terminate_index = 0;
    while(printable.Array[terminate_index] == 0 && terminate_index < printable.Array.size() - printable.PointPosition - 2)
    {
        terminate_index += 1;
    }

    for(std::vector<uint16_t>::const_reverse_iterator it = printable.Array.rbegin(); it<printable.Array.rend(); it++, count++)
    {
        if (count ==  Size - num.PointPosition + 1)
        {
            std::cout << '.';
            showZero = true;
        }

        if(count == (int64_t)(Size - terminate_index))
            break;

        if (!showZero && *it == 0)   continue;
            showZero = true;
        output << *it;
    }

    if (!showZero)
        output << 0;

    return output;
}