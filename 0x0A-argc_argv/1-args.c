#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers of arguments
 * @argc: int num of inbound args
 * @argv: pointer to array of pointers w/ said args
 * Description: print number of arguments
 * Return: Always 0 if it pass
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	argv = argv;

	return (0);
}
