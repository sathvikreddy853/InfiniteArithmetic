#include <iostream>
// #include "Integer.h"
#include "Float.h"

int main()
{

///////////////////////////////////////////////////////////////////////////////

    // testing code 

    // std::string str1;
    // std::string str2;

    // uint64_t test_cases;
    // std::cin >> test_cases;

    // for(uint64_t test_case=0; test_case<test_cases; test_case++)
    // {
    //     std::cin >> str1 >> str2;

    //     InfiniteArithmetic::Integer num1 (str1);
    //     InfiniteArithmetic::Integer num2 (str2);

    //     // change the function here
    //     InfiniteArithmetic::Integer result = num1.Divide(num2);

    //     LOG(result);
    // }

///////////////////////////////////////////////////////////////////////////////

    // InfiniteArithmetic::Integer number1 ("8093247819237489123");
    // InfiniteArithmetic::Integer number2 ("49180348170349287809");

    // LOG(number1.Multiply(number2));

    // for(InfiniteArithmetic::Integer i ("0"); i.Compare(InfiniteArithmetic::Integer("12")) < 0 ; i = i.Add(InfiniteArithmetic::Integer("1")))
        // LOG(i);


    InfiniteArithmetic::Float number1 ("7342.783");
    InfiniteArithmetic::Float number2 ("456.89");

    number1.Add(number2).Print();

    return 0;
}