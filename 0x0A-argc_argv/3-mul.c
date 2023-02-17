#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - program that prints result of multiplication
 * @argc: int num of inbound args
 * @argv: pointer to array of pointers w/ said args
 * Description: print resul of mul of 2 arguments
 * Return: if is less 3 arg prints Error
 */

int main(int argc, char *argv[])

{
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);

}
