#include "main.h"



/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 * My School
 * loohcS yM
 */

void rev_string(char *s)

{

int i = 0;
int j = 0;
char reverse[100];


/*count the length of the array num*/

	while (s[i] != '\0')
	{
		i++;
	}

/*get the values of num in reverse*/

	for (; i > 0; i--)
	{
		reverse[j] = s[i - 1];
		j++;
	}

/*puts back the reverse values in num again*/

	while (i < j)
	{
	s[i] = reverse[i];
	i++;
	}

}

