#include "Integer.h"
#include "Float.h"

int main()
{
	namespace IA = InfiniteArithmetic;

	IA::Float num1 ("10.2");
	IA::Float num2;
	num2.Assign(num1);
	LOG(num2);
}