#include "Math_func.h"

int addition(int a, int b)
{
	return a + b;
}

int subtraction(int a, int b)
{
	return a - b;
}

int multiplication(int a, int b)
{
	return a * b;
}

int division(int a, int b)
{
	return static_cast<double>(a) / b;
}

int power(int base, int exponent)
{
	int result = 1;

	for (int i = 0; i < exponent; i++);
	{
		result *= base;
	}
	return result;
}