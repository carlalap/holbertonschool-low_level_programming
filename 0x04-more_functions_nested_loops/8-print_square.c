#include "main.h"

/**
 * print_square - prints a square, followed by a new line..
 * @size: is the size of the square.
 * Return: nothing, is void
 */


void print_square(int size)

{
	int h, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (h = 0; h < size; h++)
	{
		for (w = 0; w < size; w++)
		{
		_putchar('#');
		}
	_putchar('\n');
	}
}
