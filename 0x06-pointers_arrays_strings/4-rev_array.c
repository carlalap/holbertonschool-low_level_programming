#include <string.h>
#include "holberton.h"

/**
 * reverse_array - Reverses a string.
 * @n: size of the array
 * @a: arrat to be reverse
 * Return:nothing
 */


void reverse_array(int *a, int n)

{

	int  c, i;

	for (i = 0; i < n / 2; i++)

	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;

	}

}
