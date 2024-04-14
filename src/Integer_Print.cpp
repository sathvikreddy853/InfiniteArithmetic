#include "Integer.h"

void InfiniteArithmetic::Integer::Print()
{
    if(this->isNegative)
        std::cout << '-';

    for(std::vector<uint16_t>::const_reverse_iterator it = Array.rbegin(); it<Array.rend(); it++)
        std::cout << *it;
        
    std::cout << std::endl;
    return;
}

std::ostream &InfiniteArithmetic::operator<< (std::ostream & output, const InfiniteArithmetic::Integer & num)
{
    bool showZero = false;

    Integer printable; 

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

    for(std::vector<uint16_t>::const_reverse_iterator it = printable.Array.rbegin(); it<printable.Array.rend(); it++)
    {
        if (!showZero && *it == 0)   continue;
        showZero = true;
        output << *it;
    }

    if (!showZero)
        output << 0;

    return output;
}