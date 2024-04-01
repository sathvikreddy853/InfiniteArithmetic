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
}