#include "main.h"

/**
* _print_numbers - check the code
* Description:  prints the numbers, from 0 to 9.
* Return: Always 0.
**/

void print_numbers(void)
{

int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');
}
