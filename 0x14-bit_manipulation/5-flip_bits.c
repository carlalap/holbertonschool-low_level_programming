#include "main.h"


/**
 * flip_bits - counts the number of bits needed to flip to go from n to m
 * @n: first unsigned long int
 * @m: second unsigned long int
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{

unsigned long int count = 0, flips;

	flips = n ^ m;

	while (flips > 0)

	{
	if (flips & 1)
	{
		count++;
	}
	flips = flips >> 1;

	}
	return (count);
}

