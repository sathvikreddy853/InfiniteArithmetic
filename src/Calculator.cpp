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

    // InfiniteArithmetic::Integer number1 ("8093247819237489123");
    // InfiniteArithmetic::Integer number2 ("49180348170349287809");

    // LOG(number1.Multiply(number2));

    // for(InfiniteArithmetic::Integer i ("0"); i.Compare(InfiniteArithmetic::Integer("12")) < 0 ; i = i.Add(InfiniteArithmetic::Integer("1")))
        // LOG(i);


    InfiniteArithmetic::Float number1 ("97342.783");
    InfiniteArithmetic::Float number2 ("99456.89");
    InfiniteArithmetic::Float number3 ("97342.783");

    LOG(number1.Add(number3));
    // number1.Add(number1).Print(); 

    // number1.Add(number2).Complement().Print();

    // InfiniteArithmetic::Integer number1 ("-213");
    // InfiniteArithmetic::Integer number2 ("-7921");

    // number1.Print();
    // number2.Print();
    // HR;
    // number1.Add2(number2).Print();
    // LOG(number1.Add2(number2));

    return 0;
}