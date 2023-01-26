#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 * Return: Always 0 (Success)
 */


int main(void)
{

int num;
char letter;

	for (num = '0'; num < '9'; num++)
		putchar(num);

	for (letter = 'a'; letter <= 'f'; letter++)

	putchar(letter);
	putchar('\n');

return (0);
}
