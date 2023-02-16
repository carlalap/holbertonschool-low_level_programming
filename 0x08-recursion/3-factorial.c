#include "main.h"

/**
 * factorial - return the factorial of a number.
 * @n: the number we receive
 * Return: the factorial of the number we receive
 */


int factorial(int n)

{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
