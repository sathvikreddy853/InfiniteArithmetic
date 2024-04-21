#include "Float.h"

namespace
{
	bool isDigit(char c)
	{
		if ('0' <= c && c <= '9')
			return true;
		return false;
	}
}

void InfiniteArithmetic::Float::VerifyString(std::string num)
{
	int64_t no_of_dots = 0;

	try
	{
		if(num[0] == '-' || isDigit(num[0])){}
		else if(num[0] == '.')
		{
			no_of_dots += 1;
		}
		else
		{
			throw "ParseError: Invalid Character For Integer";
		}

		for(size_t i=1; i<num.length();i++)
		{
			if (isDigit(num[i]))
			{
				;
			}
			else if(num[i] == '.')
			{
				no_of_dots += 1;
			}
			else
			{
				throw "ParseError: Invalid Character For Integer";
			}

			if(no_of_dots > 1)
				throw "DotError: More Than One Decimal Point";
		}
	}

	catch(const char * error_msg)
	{
		std::cerr << error_msg << std::endl;
		exit(1);
	}
}