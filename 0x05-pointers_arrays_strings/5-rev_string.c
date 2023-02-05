#include "main.h"
#include "2-strlen.c"


/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 * My School
 * loohcS yM
 */



void rev_string(char *s)

{
	int i = 0;
	int count = 0;
	char len [500];


	while (s[i] != '\0')

	{
	count++;
	i++;
	}

	for (; i > 0; i++)
	{
	_putchar(s[i]);
	}

	
