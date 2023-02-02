

#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The number of \ characters to be printed.
 */



void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('\\');
	}

	_putchar('\n');
}


