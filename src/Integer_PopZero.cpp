#include "Integer.h"

void InfiniteArithmetic::Integer::PopZero()
{
    while(Size > 0 && Array[Size - 1] == 0)
    {
        Array.pop_back();
        Size -= 1;
    }

    return;
}