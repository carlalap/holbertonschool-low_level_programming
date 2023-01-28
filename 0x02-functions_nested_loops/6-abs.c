#include "main.h"

/**
 * _abs - main function
 *
 * @c: integer to make absolute
 * Return: int or int times negative
 *
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = (c * -1);
	return (abs_val);
	}
	return (c);
}
