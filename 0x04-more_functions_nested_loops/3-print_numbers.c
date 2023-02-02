#include "main.h"

/**
* print_numbers from 0 to 9.
* Return: Always 0
*/

void print_numbers(void)

{

int num = 0;

	while (num < 10)

		_putchar(num++ + '0');

	_putchar('\n');
}
