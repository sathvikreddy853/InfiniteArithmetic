#include <iostream>
#include "Integer.h"

#define HR LOG("------------------------------------------------------")

int main()
{
    InfiniteArithmetic::Integer num1 ("231");
    InfiniteArithmetic::Integer num2 ("-9923");

    InfiniteArithmetic::Integer::MatchDigits(num1, num2);
    LOG(num1);
    LOG(num2);
    LOG((num1.Add(num2)));
    LOG((num1.Add(num2)).Complement());
    HR;

    InfiniteArithmetic::Integer num3 ("9923");
    InfiniteArithmetic::Integer num4 ("-1");

    InfiniteArithmetic::Integer::MatchDigits(num3, num4);
    LOG(num3);
    LOG(num4);
    LOG((num3.Add(num4)));
    LOG((num3.Add(num4)).Complement());
    HR;


    InfiniteArithmetic::Integer num5 ("231");
    InfiniteArithmetic::Integer num6 ("90077");

    InfiniteArithmetic::Integer::MatchDigits(num5, num6);
    LOG(num5);
    LOG(num6);
    LOG((num5.Add(num6)));
    LOG((num5.Add(num6)).Complement());
    HR;

    InfiniteArithmetic::Integer test1 ("-768");
    InfiniteArithmetic::Integer test2 ("90077");

    InfiniteArithmetic::Integer::MatchDigits(test1, test2);
    LOG(test1);
    LOG(test2);
    LOG((test1.Add(test2)));
    LOG((test1.Add(test2)).Complement());
    HR;


    // InfiniteArithmetic::Integer num3 ("9923");
    // InfiniteArithmetic::Integer num4 ("-231");

    // LOG(num1.Add(num2));
    return 0;
}