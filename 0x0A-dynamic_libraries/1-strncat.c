#include "main.h"
#include <string.h>

/**
 * _strncat - concats two string
 *
 * @dest: destination of concat
 * @src: source array to concat
 * @n: number of values to concatenate
 * Description: concatenates n number of values from src to end of dest
 * Return: char value
 */

char *_strncat(char *dest, char *src, int n)

{

/*
 * len1=lenght of destination array.
 * len2=lenght of the source array.
 */

	int len1, len2;

	len1 = strlen(dest);


	for (len2 = 0 ; len2 < n && src[len2] != '\0' ; len2++)

	{
		dest[len1 + len2] = src[len2];
	}


	dest[len1 + len2] = '\0';
	return (dest);
}
