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

    // InfiniteArithmetic::Float number1 ("50");
    // InfiniteArithmetic::Float number2 ("10000006"); 

    // InfiniteArithmetic::Float::SetPrecision(1000);

    // InfiniteArithmetic::Float number1 ("50");
    // InfiniteArithmetic::Float number2 ("0.0006");

    InfiniteArithmetic::Integer number1 ("108937456");
    InfiniteArithmetic::Integer number2 ("2780345");

    LOG(number1.Add(number2));

    // LOG(number1.Add(number2));
    // LOG(number1.Divide(number2));

    
    // LOG(num1 + num2);

    return 0;
}