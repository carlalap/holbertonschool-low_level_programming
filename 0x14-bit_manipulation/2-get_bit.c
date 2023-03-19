#include "main.h"

/**
 * get_bit - gets bit a index
 * @n: number to go through
 * @index: index to go through
 * Return: int value
 */

int get_bit(unsigned long int n, unsigned int index)

{
	if (index > 32)
	{
		return (-1);
	}
	n = n >> index;
	n = n & 1;
	return (n);
}
