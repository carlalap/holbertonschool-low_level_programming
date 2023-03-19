#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */

void print_binary(unsigned long int n)

{
	if (n > 1)

/*
 * dividing n by 2 until n becomes 0 or 1
 */
		print_binary(n >> 1);

/* 
 * heck if the least significant bit of n is 1, 
 * If it is, the function prints '1'. 
 * if not  it prints '0'.
 */

	_putchar((n & 1) + '0');
}
