#include "main.h"

/**
* _islower - check the code.
* @c: function that checks is c is a lowercase character.
* Return: Always 0.
**/

int _islower(int c)


{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
