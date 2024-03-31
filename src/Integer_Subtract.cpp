#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Subtract(Integer other)
{
    Integer result;

    other = other.Complement();
    other.isNegative = -1;

    result = this->Add(other);

    return result;
}