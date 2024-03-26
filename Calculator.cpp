#include <iostream>
#include "Integer.h"

int main()
{

    InfiniteArithmetic::Integer num1 ("9992564");
    InfiniteArithmetic::Integer num2 (num1);
    LOG(num1);
    
    return 0; 
}