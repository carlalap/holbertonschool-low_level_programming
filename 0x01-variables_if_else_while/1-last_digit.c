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
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	lastn = n % 10;

	if (lastn > 5)
	{
	printf("Last digit of %d is %d and is greater than 5", n, lastn);
	}
	else if (lastn == 0)
	{
	printf("Last digit of %d is %d and is 0", n, lastn);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6", n, lastn);
	}
	return (0);
}
