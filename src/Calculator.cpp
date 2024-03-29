#include <iostream>
#include "Integer.h"

int main()
{
    InfiniteArithmetic::Integer num1 ("000231");
    InfiniteArithmetic::Integer num2 ("-00009923");

    LOG(num1);
    LOG(num2.Complement().Complement());

    return 0;
}