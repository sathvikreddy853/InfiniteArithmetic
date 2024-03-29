#include <iostream>
#include "Integer.h"

int main()
{
    InfiniteArithmetic::Integer num1 ("231");
    InfiniteArithmetic::Integer num2 ("-9923");

    InfiniteArithmetic::Integer::MatchDigits(num1, num2);

    LOG(num1);
    LOG(num2);

    return 0;
}