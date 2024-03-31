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
        InfiniteArithmetic::Integer result = num1.Divide(num2);

        LOG(result);
    }

///////////////////////////////////////////////////////////////////////////////

    // InfiniteArithmetic::Integer number1 ("3516868914390683122516736429325977893165369858706");
    // InfiniteArithmetic::Integer number2 ("70719220970653686589403705094165435925675574");

    // number1.Divide(number2).Print();

    return 0;
}