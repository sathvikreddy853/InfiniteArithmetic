#include "Integer.h"

void InfiniteArithmetic::Integer::Print()
{
    for(std::vector<uint16_t>::const_reverse_iterator it = Array.rbegin(); it<Array.rend(); it++)
        std::cout << *it;
        
    return;
}

std::ostream &InfiniteArithmetic::operator<< (std::ostream & output, const InfiniteArithmetic::Integer & num)
{
    for(std::vector<uint16_t>::const_reverse_iterator it = num.Array.rbegin(); it<num.Array.rend(); it++)
        output << *it;

    return output;
}
