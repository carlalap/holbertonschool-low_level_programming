#include <stdio.h>

/**
 * main - main function , prints the numbers from 1 to 100, after new line
 * for multiples of three print Fizz / multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: a number
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			if (num % 3 == 0)
			{
				printf("Fizz");
			}
			if (num % 5 == 0)
			{
				printf("Buzz");
			}
		} else
		{
			printf("%d", num);
		}
		if (num != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
