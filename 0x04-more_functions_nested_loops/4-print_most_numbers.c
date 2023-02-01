#include "main.h"

/**
* print_most_numbers - check the code.
* Descrption: prints the numbers from 0 to 9, except 2-4.
* Return: Always 0.
**/


void print_most_numbers(void)

{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
		_putchar((i % 10) + '0');
		}
	}
	_putchar('\n');
}
