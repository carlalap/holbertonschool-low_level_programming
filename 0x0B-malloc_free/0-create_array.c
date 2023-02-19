#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 **/


char *create_array(unsigned int size, char c)
{
	unsigned int i;

/*
 * asking malloc to get memory to size of array (char)
 * and it keep base address in the *prt pointer
 */
char *ptr = (char *)malloc(size * sizeof(char));


	if (size <= 0)
	return (NULL);

/*Memory not available, returns NULL*/
	if (ptr == NULL)
	return (NULL);

/*it move thro ptr*/

	for (i = 0; i < size; i++)
	ptr[i] = c;

	return (ptr);
}
