
#include "main.h"

/**
 * divisor_incrementor - used to increment divisor since no globals
 * @n: num to determine primeness of
 * @divisor: divisor to be incremented on target fail
 * Return: see is_prime_number
 */

int divisor_incrementor(int n, int divisor)

{
	if ((n % divisor) == 0)
	{
		return (0);
	}
	else if (divisor == (n - 1))
	{
		return (1);
	}
	return (divisor_incrementor(n, divisor + 1));
}

/**
 * is_prime_number - determines if supplied n is prime
 * @n: num to check for primeness
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)

{
	int divisor = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (divisor_incrementor(n, divisor));
}
