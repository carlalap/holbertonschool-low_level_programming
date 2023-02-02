#include "main.h"

/**
 * more_numbers - a function that prints more numbers
 * Return: nothing, is void
 * external loop, count lines
 * internal loop, count from 0-14
*/


void more_numbers(void)

{
	int j;
	int i;

	for (j = 0; j <= 9; j++)

	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
			_putchar ((i / 10) + '0');
			}
		_putchar ((i % 10) + '0');
		}
	_putchar('\n');
	}
}
