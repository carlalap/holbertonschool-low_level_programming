#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to be compare with lenght of s2
 * Return: returns NULL if it fail string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)

{

	unsigned int i,  len1 = 0, len2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

/*check lenght of s1 and s2 */

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

/*n => lenngth S2, will use S2 */

	if (n >= len2)
		n = len2;

s = (char *) malloc(sizeof(char) * n + len1 + 1);

	if (s ==  NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (i = 0; i < n; i++)
		s[i + len1] = s2[i];


	s[i + len1] = '\0';

	return (s);


}
