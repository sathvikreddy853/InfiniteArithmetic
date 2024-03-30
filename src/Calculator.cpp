#include <iostream>
#include "Integer.h"

int main()
{

///////////////////////////////////////////////////////////////////////////////

    // testing code 

    std::string str1;
    std::string str2;

    uint64_t test_cases;
    std::cin >> test_cases;

    for(uint64_t test_case=0; test_case<test_cases; test_case++)
    {
        std::cin >> str1 >> str2;

        InfiniteArithmetic::Integer num1 (str1);
        InfiniteArithmetic::Integer num2 (str2);

        // change the function here
        InfiniteArithmetic::Integer result = num1.Add(num2);

        LOG(result);
    }

///////////////////////////////////////////////////////////////////////////////

    // InfiniteArithmetic::Integer number1 ("-1462");

    // LOG(number1.Multiply(InfiniteArithmetic::Integer("-273")));
    // LOG(number1.Complement());

    return 0;
}