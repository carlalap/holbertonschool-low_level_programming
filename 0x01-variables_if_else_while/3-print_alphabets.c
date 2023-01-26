
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/**
 * main - entry point
 *
 *
 * Description: Write a program that prints the alphabet in lowercase,
 * * and then in uppercase, followed by a new line.
 * *
 */

/* betty style doc for function main goes there */

int main(void)
{
	char letter;
	char LETTER;

	for (letter = 'a'; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}
	for (LETTER = 'A'; letter <= 'Z' ; letter++)
	{
		putchar(LETTER);
	}
	putchar('\n');
	return (0);
}
