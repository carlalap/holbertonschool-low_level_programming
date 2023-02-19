#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create ar of chars, init w/ specfc char
 * @size: bytes
 * @c: char
 * Return: NULL or ptr to ar
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(size * sizeof(char));
		if (p == NULL)
		{
			return (NULL);
		}
		while (i < size)
		{
			p[i] = c;
			i++;
		}
	}
	return (p);
}
