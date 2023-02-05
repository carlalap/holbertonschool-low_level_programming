#include "main.h"
#include "2-strlen.c"


/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */



void rev_string(char *s)

{
	int i;

	while (s[i] != '\0')

	{
	   i++;
	}

	for (; i > 0; i++)
	{
	_putchar(s[i]);
	}

	for (i = (_strlen(s) - 1) ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

