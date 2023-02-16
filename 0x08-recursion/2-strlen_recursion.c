#include "main.h"

/**
 * _strlen_recursion -  print length of a string via recursion
 * @s: input string
 * Return: void
 */


int _strlen_recursion(char *s)
{

	int len = 0;

	if (s[0])
	{
	len++;
	len = 1 + (_strlen_recursion(s + 1));
	}
	return (len);
}

