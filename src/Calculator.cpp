#include <iostream>
#include "Integer.h"

int main()
{
    InfiniteArithmetic::Integer num1 ("231");
    InfiniteArithmetic::Integer num2 ("-9923");
    LOG(num2);
    LOG(num2.Complement());

    return 0;
}