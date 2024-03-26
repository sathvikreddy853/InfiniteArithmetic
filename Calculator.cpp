#include <iostream>
#include "Integer.h"

int main()
{
    // InfiniteArithmetic::Integer num1 ("999999");
    // LOG(num1);
    InfiniteArithmetic::Integer num2 ("96");
    LOG(num2.Complement());
    InfiniteArithmetic::Integer result = num2.Add(InfiniteArithmetic::Integer("1"));
    LOG(result);

    return 0; 
}