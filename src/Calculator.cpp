#include <iostream>
#include "Integer.h"
#include "Float.h"

int main()
{

///////////////////////////////////////////////////////////////////////////////

    // testing code 

    // std::string str1;
    // std::string str2;

    // usize_t test_cases;
    // std::cin >> test_cases;

    // for(usize_t test_case=0; test_case<test_cases; test_case++)
    // {
    //     std::cin >> str1 >> str2;

    //     InfiniteArithmetic::Integer num1 (str1);
    //     InfiniteArithmetic::Integer num2 (str2);

    //     // change the function here
    //     InfiniteArithmetic::Integer result = num1.Add(num2);

    //     LOG(result);
    // }

///////////////////////////////////////////////////////////////////////////////

    // InfiniteArithmetic::Float number1 ("1312.1");
    // InfiniteArithmetic::Float number2 ("32342");

    //     // change the function here
    //     InfiniteArithmetic::Integer result = num1.Add2(num2);

    //     LOG(result);

///////////////////////////////////////////////////////////////////////////////

    InfiniteArithmetic::Float number1 ("5834.2812");
    InfiniteArithmetic::Float number2 ("28.3");

    LOG(number1.Divide(number2));
    // LOG(number1.Divide(number2));

    // InfiniteArithmetic::Integer num1 ("132213");
    // InfiniteArithmetic::Integer num2 ("-413419");

    // LOG(num1 + num2);

    return 0;
}