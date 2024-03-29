#include "Integer.h"

void InfiniteArithmetic::Integer::Print()
{
    Size = this->Array.size();

    for(size_t i=0; i<Size; i++)
        std::cout << Array[Size-1-i];
        
    return;
}

std::ostream &InfiniteArithmetic::operator<< (std::ostream & output, const InfiniteArithmetic::Integer & num)
{
    for(size_t i=0; i<num.Array.size(); i++)
        output << num.Array[num.Array.size()-1-i];

    return output;
}
