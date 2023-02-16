#include "main.h"


/**
 * pow_recursion -  function returns a value x raised to the power y
 * @x: value raised to the power y
 * @y: power of the value x
 * Return:  the value of x raised to the power of y
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
