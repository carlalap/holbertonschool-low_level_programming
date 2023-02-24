#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @min: min element
 * @max: max element
 * Return: returns pointer or void
 */


int *array_range(int min, int max)

{
	int i, len_s = 0;
	int *s;


	if (min > max)
		return (NULL);

	 /*allocation memory for array*/
	for (i = min; i <= max; i++)
                len_s++;

	/*declaration malloc*/
	s = (int *)malloc(len_s * sizeof(int));

	/*if malloc fails, returns NULL*/
	if (s == NULL)
		return (NULL);

	
	i = 0;
	while (min <= max)
	{
		s[i] = min;
		i++;
		min++;
	}
	return (s);

}



