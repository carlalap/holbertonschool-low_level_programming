#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - function allocates memory for an array
 * @nmemb: arrays elements
 * @size: size bytes elements of array
 * Return: returns pointer or void
 */


void *_calloc(unsigned int nmemb, unsigned int size)

{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = (char *)malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;

	return (s);

}



