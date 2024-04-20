#include "Float.h"

InfiniteArithmetic::Float InfiniteArithmetic::Float::Multiply(Float otherOne)
{
	Float result;
	Float thisOne;

	if(this->isNegative)
		thisOne = this->Complement();
	else
		thisOne = *this;

	if (otherOne.isNegative)
		otherOne = otherOne.Complement();

	result.isNegative = thisOne.isNegative ^ otherOne.isNegative;

	// vars 
    uint16_t carry = 0;
    uint16_t digit = 0;
    uint16_t sum = 0;

    // for result
    int64_t shift = 0;
    int64_t place = 0;

	result.Array.resize(thisOne.Array.size() + otherOne.Array.size() + 1);
        
    for(std::vector<uint16_t>::const_iterator thisElem = thisOne.Array.begin(); thisElem < thisOne.Array.end(); thisElem++, shift++)
    {
        carry = 0;
        place = 0;

        for(std::vector<uint16_t>::const_iterator otherElem = otherOne.Array.begin(); otherElem < otherOne.Array.end(); otherElem++, place++)
        {   
            sum = (*thisElem) * (*otherElem) + carry + result.Array[shift + place];
            digit = sum%10;
            carry = sum/10;

            result.Array[shift + place] = digit;
        }

        if (carry != 0)
            result.Array[shift + place] = carry;
    }

    if(result.isNegative)
        result = result.Complement();

	result.PointPosition = thisOne.PointPosition + otherOne.PointPosition - 1;

	if (thisOne.PointPosition == 0)
		result.PointPosition += 1;

	if (otherOne.PointPosition == 0)
		result.PointPosition += 1;

    return result;
}