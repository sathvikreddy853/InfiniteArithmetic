#include <iostream>
#include "Integer.h"

int main()
{
    InfiniteArithmetic::Integer num1 ("000231");
    InfiniteArithmetic::Integer num2 ("-9923");

    LOG(num1);
    LOG(num2);

    return 0;
}