#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 * Return: Always 0 (Success)
 */


int main(void)
{

int i;
char letter;

	for (i = 0; i < 9; i++)
		putchar(i);

	for (letter = 'a'; letter <= 'f'; letter++)

	putchar(letter);
	putchar('\n');

return (0);
}
