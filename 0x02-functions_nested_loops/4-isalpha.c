#include "main.h"

/**
* _isalpha - main function
* @c: function that checks is c is a letter, lowercase or uppercase.
* Return: Always 0.
**/

int _isalpha(int c)


{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
