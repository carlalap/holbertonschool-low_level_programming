#include "main.h"
#include <stdio.h>


/**
 * more_numbers - a function that prints more numbers
 * Return: nothing, is void
 */


void more_numbers(void)

{

	int i, j;

/*external loop, count lines*/

	for (j = 0; j <= 9; j++)

	{

/**
 * internal loop, count from 0-14
 * _putchar funtion, prints just 1 character
*/
		for (i = 1; i <= 14; i++)
		{
			if (i > 9)
			{
			_putchar ((i / 10) + '0');
			}
		_putchar ((i % 10) + '0');
		}

	_putchar('\n');
	}
}
