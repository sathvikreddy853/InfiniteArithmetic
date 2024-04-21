#include "Integer.h"

void InfiniteArithmetic::Integer::Assign(const Integer &obj)
{
	Array.clear();

    for(int i : obj.Array)
        Array.push_back(i);

    isNegative = obj.isNegative;
}