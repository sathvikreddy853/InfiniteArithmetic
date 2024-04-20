#include <iostream>
#include "Integer.h"
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

    // InfiniteArithmetic::Float number1 ("1312.1");
    // InfiniteArithmetic::Float number2 ("32342");

    //     // change the function here
    //     InfiniteArithmetic::Integer result = num1.Add2(num2);

    //     LOG(result);

///////////////////////////////////////////////////////////////////////////////

    InfiniteArithmetic::Float number1 ("8792726365283060579833950521677211.0");
    InfiniteArithmetic::Float number2 ("493835253617089647454998358"); 

    InfiniteArithmetic::Float::SetPrecision(100);

    LOG(number1.Add(number2));
    LOG(number1.Subtract(number2));
    LOG(number1.Multiply(number2));
    LOG(number1.Divide(number2));

    // InfiniteArithmetic::Float::SetPrecision(1000);

    // InfiniteArithmetic::Float number1 ("0.00006");
    // InfiniteArithmetic::Float number2 ("50");

    // InfiniteArithmetic::Integer number1 ("-31051733526151724502375603548743916109532380");
    // InfiniteArithmetic::Integer number2 ("31051733526151724502375603548743916109532380");


    // LOG(number1.Add(number2));

    
    // LOG(num1 + num2);

    return 0;
}