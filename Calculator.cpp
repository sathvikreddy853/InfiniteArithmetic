#include "Integer.h"
#include "Float.h"

int main()
{
	using namespace InfiniteArithmetic;

	Integer num1 ("0");
	LOG(num1.isZero());

	Integer num2 ("2");
	LOG(num2.isZero());
}