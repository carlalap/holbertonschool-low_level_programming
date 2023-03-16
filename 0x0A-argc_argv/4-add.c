#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program that adds positive numbers
 * @argc: int num of inbound args
 * @argv: pointer to array of pointers w/ said args
 * Description: print int sum of addition of argv[]
 * Return: 1 if one symbols is not digit prints Error
 */


int main(int argc, char *argv[])


{
	int x, y;
	int sum = 0;

	if (argc > 0)
	{
		for (x = 1; x < argc; x++)
		{

/* inner loop checks if it is no digit.*/

			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (!isdigit(argv[x][y]))
				{
					printf("Error\n");
					return (1);
				}
			}
		sum = sum + atoi(argv[x]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
