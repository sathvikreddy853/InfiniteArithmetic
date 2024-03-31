#include <iostream>
#include "Integer.h"

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
    //     InfiniteArithmetic::Integer result = num1.Add(num2);

    //     LOG(result);
    // }

///////////////////////////////////////////////////////////////////////////////

    InfiniteArithmetic::Integer number1 ("9932");
    // std::string string2 = "9932";
    InfiniteArithmetic::Integer number2 ("-9932");
    // string2.insert(string2.begin(), '-');
    // InfiniteArithmetic::Integer number3 (string2);

    number1.Print();
    number2.Print();

    LOG(number1.Add(number2));

    // LOG(number1.MultiplyByDigit(9));
    // LOG(number1.Complement());

    return 0;
}