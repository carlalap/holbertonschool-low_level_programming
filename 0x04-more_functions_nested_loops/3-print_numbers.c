#include "main.h"

/**
* _print_numbers
* Description:  prints the numbersfrom 0-9.
**/

void print_numbers(void)
{

int num = 0;

	while (num < 10)

		_putchar(num++ + '0');

	_putchar('\n');
}
