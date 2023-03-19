#include "main.h"


/**
 * set_bit - sets a bit at index to 1
 * @n: pointer to a integer
 * @index: index to chage
 * Return: 1 if successful, -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	if (index > 32)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
