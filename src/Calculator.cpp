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
    //     InfiniteArithmetic::Integer result = num1.Add2(num2);

    //     LOG(result);
    // }

///////////////////////////////////////////////////////////////////////////////

    InfiniteArithmetic::Float number1 ("1312.1");
    // InfiniteArithmetic::Float number2 ("32342");

    LOG(number1.MultiplyByDigit(7));
    
    return 0;
}