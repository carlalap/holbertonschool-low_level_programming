
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The number of '\' characters to be printed.
 * Return: nothing, is void
 */


void print_line(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}


