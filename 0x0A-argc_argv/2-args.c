#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - program that prints args passed to it
 * @argc: int num of inbound args
 * @argv: pointer to array of pointers w/ said args
 * Description: print number of arguments
 * Return: Always 0 if it pass
 */

int main(int argc, char *argv[])

	{

	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
