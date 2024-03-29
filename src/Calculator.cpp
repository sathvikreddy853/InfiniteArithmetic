#include <iostream>
#include "Integer.h"

int main()
{
    InfiniteArithmetic::Integer num1 ("231");
    // InfiniteArithmetic::Integer num2 ("-9923");
    LOG(num1);
    LOG(num1.Complement());

    return 0;
}