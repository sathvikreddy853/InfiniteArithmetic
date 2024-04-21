#include "Integer.h"
#include "Float.h"
#include <string>

int main(int argc, char const *argv[])
{	
	namespace IA = InfiniteArithmetic;

	if (argc == 5)
	{
		std::string type(argv[1]);
		std::string oper(argv[2]);
		std::string num1(argv[3]);
		std::string num2(argv[4]);

		if(type == "int")
		{
			if (oper == "add")
				std::cout << (IA::Integer(num1) + IA::Integer(num2));
			else if(oper == "sub")
				std::cout << (IA::Integer(num1) - IA::Integer(num2));
			else if(oper == "mul")
				std::cout << (IA::Integer(num1) * IA::Integer(num2));
			else if(oper == "div")
				std::cout << (IA::Integer(num1) / IA::Integer(num2));
			else
			{
				std::cout << "IncorrectOperationError: The Operation Provided Does Not Exist" << std::endl;
				exit(1);
			}
		}
		else if(type == "float")
		{
			if (oper == "add")
				std::cout << (IA::Float(num1) + IA::Float(num2));
			else if(oper == "sub")
				std::cout << (IA::Float(num1) - IA::Float(num2));
			else if(oper == "mul")
				std::cout << (IA::Float(num1) * IA::Float(num2));
			else if(oper == "div")
				std::cout << (IA::Float(num1) / IA::Float(num2));
			else
			{
				std::cout << "IncorrectOperationError: The Operation Provided Does Not Exist" << std::endl;
				exit(1);
			}
		}
		else
		{
			std::cout << "IncorrectTypeError: The Type Provided Does Not Exist" << std::endl;
			exit(1);
		}
	}
	else
	{
		std::cout << "InsufficientArgumentError: Insufficient Arguments Have Been Provided" << std::endl;
		exit(1);
	}
}