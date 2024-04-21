#include "Integer.h"

namespace
{
	bool isDigit(char c)
	{
		if ('0' <= c && c <= '9')
			return true;
		return false;
	}
}

void InfiniteArithmetic::Integer::VerifyString(std::string num)
{
	try
	{
		if(num[0] == '-' || isDigit(num[0])){}
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
			else
			{
				throw "ParseError: Invalid Character For Integer";
			}
		}
	}

	catch(const char * error_msg)
	{
		std::cerr << error_msg << std::endl;
		exit(1);
	}
}