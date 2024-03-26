#include <iostream>
#include "Integer.h"

int main()
{
    InfiniteArithmetic::Integer num1 ("2124399");
    LOG(num1);
    InfiniteArithmetic::Integer num2 ("2124399");
    LOG(num2.Complement().Add(num1).Complement());

    InfiniteArithmetic::Integer result = num1.Add(num2);
    LOG(result);

    return 0; 
}