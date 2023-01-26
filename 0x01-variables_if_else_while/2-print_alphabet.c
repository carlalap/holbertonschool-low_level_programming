#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/**
* main - entry point
*
*
* Return: always return 0
*
*/

/* betty style doc for function main goes there */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
