#include "Integer.h"

// time taken by Add2 : 4.567s
// time taken by Add  : 4.848s

InfiniteArithmetic::Integer &InfiniteArithmetic::Integer::Add2(Integer &obj)
{
	Integer *result = new Integer;
	Integer *other = &obj;

	bool inThis = true, inOther = true;

	uint16_t sum = 0;
	uint16_t carry = 0;
	uint16_t digit= 0;

	for(size_t i=0; inThis || inOther; i++)
	{
		sum = carry;

		if(inThis)
			sum += this->Array[i];
		else if(this->isNegative)
			sum += 9;

		if(inOther)
			sum += other->Array[i];
		else if(other->isNegative)
			sum += 9;

		digit = sum % 10;
		carry = sum / 10;

		result->Array.push_back(digit);

		if (i == this->Array.size() - 1)
			inThis = false;
		
		if (i == other->Array.size() - 1)
			inOther = false;
	}

	std::vector<uint16_t> thisPrefix (2);
	std::vector<uint16_t> otherPrefix (2);

	for(auto i=0; i<2; i++)
	{
		thisPrefix[i] = 9 * this->isNegative;
		otherPrefix[i] = 9 * other->isNegative;
	}

	for(int i=0; i<2; i++)
	{
		sum = carry;
		sum += thisPrefix[i];
		sum += otherPrefix[i];

		digit = sum % 10;
		carry = sum / 10;

		result->Array.push_back(digit);
	}

	if(result->Array.back() == 9)
		result->isNegative = true;

	return *result;
}