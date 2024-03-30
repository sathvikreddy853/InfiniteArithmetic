#include "Integer.h"

InfiniteArithmetic::Integer InfiniteArithmetic::Integer::Add(Integer otherOne)
{
    Integer result;

    Integer thisOne = *this;

    MatchDigits(thisOne, otherOne);

    bool inThis = true, inOther = true;

    int carry = 0;
    int digit = 0;
    int sum = 0;

    for(size_t i = 0; inThis || inOther; i++)
    {
        // to calculate sum of digits and carry
        sum = carry; 
        if (inThis)
            sum += thisOne.Array[i];
        if (inOther)
            sum += otherOne.Array[i];

        digit = sum%10;
        carry = sum/10;
        result.Array.push_back(digit);


        if(i == thisOne.Array.size() - 1)
            inThis = false;
        
        if(i == otherOne.Array.size() - 1)
            inOther = false;
    }

    if (carry > 0)
        result.Array.push_back(carry);  

    result.Array.pop_back();

    if(result.Array.back() == 9)
        result.isNegative = true;

    // HR; 
    // thisOne.Print(); 
    // otherOne.Print();
    // result.Print();
    // HR;

    return result;
}