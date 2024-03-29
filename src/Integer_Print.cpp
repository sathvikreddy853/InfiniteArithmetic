#include "Integer.h"

void InfiniteArithmetic::Integer::Print()
{
    for(size_t i=0; i<Array.size(); i++)
        std::cout << Array[Array.size()-1-i];
        
    return;
}

std::ostream &InfiniteArithmetic::operator<< (std::ostream & output, const InfiniteArithmetic::Integer & num)
{
    for(size_t i=0; i<num.Array.size(); i++)
        output << num.Array[num.Array.size()-1-i];

    return output;
}
