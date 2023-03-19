#include "main.h"


/**
 * clear_bit - set bit to 0 at a given index.
 * @n: pointer to int
 * @index: index to change
 * Return: 1 if successful, -1 if an error occurred
 */


int clear_bit(unsigned long int *n, unsigned int index)

{
	unsigned long int i;

	if (index > 32)
	{
		return (-1);
	}

	i = *n ^ (1 << index);
	*n = *n & i;
	return (1);
}
