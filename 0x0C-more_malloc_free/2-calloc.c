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

	/* If nmemb or size is 0, _calloc returns NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/*declaration malloc*/
	s = (char *)malloc(nmemb * size);

	/*if malloc fails, _calloc returns NULL*/
	if (s == NULL)
		return (NULL);

	/*allocation memory for array*/
	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;

	return (s);
}



