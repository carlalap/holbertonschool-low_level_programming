#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * 
 * @size: is the size of the triangle
 */

void print_triangle(int size)

{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
/*
 * external loop for number of rows
 */
		for (i = 1; i <= size; i++)
		{

/*
* internal loop for number of columns
*/
			for (j = 1; j <= size; j++)
			{
				if ((i + j) <= size)
				{
				_putchar(' ');
				}
				else
				{
				_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
