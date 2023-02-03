#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: characters of the string
 */


void print_rev(char *s)

{
	int i;


	for (i = _strlen(s); i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
