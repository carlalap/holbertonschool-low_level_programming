#include "main.h"
#include "2-strlen.c"


/**
 * char *_strcpy - Write a function that copies the string pointed to by src
 * @src: pointer of array
 * @dest: destination pointer
 * @n: how many times to prints
*/


char *_strcpy(char *dest, char *src)

{
	int a;

	for (a = 0; a < _strlen(src); a++)

	{
		dest[a] = src[a];
	}

	return (dest);

}
