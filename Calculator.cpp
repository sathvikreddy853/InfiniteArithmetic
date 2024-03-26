#include <iostream>
#include "Integer.h"

int main()
{

    InfiniteArithmetic::Integer num1 ("2312");
    num1.PopZero();
    LOG(num1);

    return 0; 
}