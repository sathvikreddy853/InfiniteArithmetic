#include "Integer.h"

void InfiniteArithmetic::Integer::PopZero()
{
    while(Array.size() > 0 && Array.back() == 0)
        Array.pop_back();

    return;
}