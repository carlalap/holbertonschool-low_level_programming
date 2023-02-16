#include "main.h"

/**
 * sqrt_con - returns root of n using i
 * @n: value to get square root
 * @i: variable to help get the square
 * Description: find square root of n using recursion and two variables
 * Return:  natural square root of a number
 */


int sqr_con(int n, int i)
{
	if (n == i * i)
	{
	return (i);
	}
	else if (n < i * i)
	{
	return (-1);
	}
	return (sqr_con(n, i + 1));
}

/**
 * _sqrt_recursion - find a square root of n
 * @n: value to get square root
 * Description: find square root of n using recursion
 * Return:  square root of n or (-1) if n root is not natural
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (sqr_con(n, 0));
}

