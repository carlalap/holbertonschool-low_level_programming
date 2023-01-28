#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * num: prints the last digit of a number
 * Return: Always 0.
 */

int print_last_digit(int num)
{
	int lastnum;

	lastnum = (num % 10);

	if (lastnum < 0)
	{
	lastnum = (lastnum * -1);
	}

	_putchar(lastnum + '0');
	return (lastnum);
}
