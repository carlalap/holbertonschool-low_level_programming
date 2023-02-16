#include "main.h"


/**
 * pow_recursion - returns a x raised to the power y
 * @x: value raised y
 * @y: power of x
 * Return:  x exp y
 */


int _pow_recursion(int x, int y)

{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, (y - 1)));
	}
}
