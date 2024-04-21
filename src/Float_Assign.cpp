#include "Float.h"

void InfiniteArithmetic::Float::Assign(const Float &obj)
{
    Array.clear();

    for (int i : obj.Array)
        Array.push_back(i);

    isNegative = obj.isNegative;
    PointPosition = obj.PointPosition;
}