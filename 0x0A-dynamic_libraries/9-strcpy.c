#include "main.h"


/**
 * _strcpy - main function to copy
 *
 * @dest: destination to copy
 * @src: src
 *
 * Return: a character value
 */

char *_strcpy(char *dest, char *src)

{
	int a;

	for (a = 0; a <= _strlen(src); a++)

	{
		dest[a] = src[a];
	}

	return (dest);

}
