#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints the reverse of a string
 *
 * @s: string to print
 */


void print_rev(char *s)

{
	int i;


	for (i = (_strlen(s) - 1) ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
