#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concats strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns concated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *conca;

	i = 0;
	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		len2++;
	}

	conca = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (conca == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		conca[i] = s1[i];

	for (i = 0; i < len2; i++)
		conca[i + len1] = s2[i];

	conca[i + len1] = '\0';
	return (conca);
}
