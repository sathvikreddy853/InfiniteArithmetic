#include <iostream>
#include "Integer.h"

int main()
{
    InfiniteArithmetic::Integer num1 ("2313");
    InfiniteArithmetic::Integer num2 ("-2312");
    LOG(num1);
    LOG(num2.Complement());
    LOG(num1.Add(num2.Complement()));

    return 0; 
}