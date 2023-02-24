#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory
 * @b: integer to check
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)

{
	void *a = malloc(b);

		if (a == NULL)
		{
			exit(98);
		}

	return (a);
}





