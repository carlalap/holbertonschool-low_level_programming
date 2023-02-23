#include "main.h"


/**
 * _strlen - gets character string
 *
 * @s: character to getstring
 * Return: returns length
 */


int _strlen(char *s)


{

int i = 0;

while (s[i] != '\0')

	{
	i++;
	}

	return (i);

}
