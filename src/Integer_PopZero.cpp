#include "Integer.h"

void InfiniteArithmetic::Integer::PopZero()
{
    while(!Array.empty() && Array.back() == 0)
        Array.pop_back();

    return;
}