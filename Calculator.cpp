#include <iostream>
#include "Integer.h"

int main()
{
    InfiniteArithmetic::Integer num1 ("2332418748201738217480927489132748921703849712837812");
    LOG(num1);
    InfiniteArithmetic::Integer num2 ("784320722149387481207387418239047893748397483475892478597432089573480133785446875879");
    LOG(num2);

    InfiniteArithmetic::Integer result = num1.Add(num2);
    LOG(result);

    return 0; 
}