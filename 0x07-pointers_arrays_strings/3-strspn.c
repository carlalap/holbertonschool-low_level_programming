
#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */

unsigned int _strspn(char *s, char *accept)

{

	unsigned int i, j, countb = 0;



	for (i = 0; accept[i] != '\0'; i++)
	
	j = 0;
	{
		while ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z'))
		{
			if (accept[i] == s[j])
			{
				countb++;
			}
		j++;
		}

	}
	return (countb);
}
