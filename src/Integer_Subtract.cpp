#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Subtract(Integer other)
{
    Integer result;

    if (!other.isZero())
        result = this->Add(other.Negate());
    else
        result = this->Add(other);

    return result;
}