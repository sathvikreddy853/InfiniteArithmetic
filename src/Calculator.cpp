#include <iostream>
#include "Integer.h"

int main()
{
    std::string str1;
    std::string str2;

    uint64_t test_cases;
    std::cin >> test_cases;

    for(uint64_t test_case=0; test_case<test_cases; test_case++)
    {
        std::cin >> str1 >> str2;

        InfiniteArithmetic::Integer num1 (str1);
        InfiniteArithmetic::Integer num2 (str2);

        InfiniteArithmetic::Integer result = num1.Add(num2);

        LOG(result);
    }


    return 0;
}