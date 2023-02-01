#include "main.h"
#include <stdio.h>


/**
 * more_numbers - a function that prints more numbers
 * Return: nothing, is void
 */


void more_numbers(void)

{

	int i, j;


	for (j = 0; j < 9; j++)

	{
		for (i = 1; i < 15; i++)
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
