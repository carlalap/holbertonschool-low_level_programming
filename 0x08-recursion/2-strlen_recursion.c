#include "main.h"

/**
 * _strlen_recursion - reverse print s via recursion
 * @s: input string
 * @len: longitud del string
 * Return: value to main
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

