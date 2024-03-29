#include <iostream>
#include "Integer.h"

int main()
{
    InfiniteArithmetic::Integer num1 ("999999098428934728931");
    InfiniteArithmetic::Integer num2 ("-999992443124343129923");

    InfiniteArithmetic::Integer result = num1.Add(num2);

    LOG(result);

    return 0;
}