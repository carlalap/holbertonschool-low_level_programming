#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
	{
		continue;
	}
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
