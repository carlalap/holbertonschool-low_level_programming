#include<stdio.h>
#include "main.h"


/**
* _isupper - check the code.
* @c: function that checks is c is a upper character.
* Return: Always 0.
**/


int _isupper(int c)

{
	if (c >= 'A' && c <= 'z')

	{
	return (1);
	}
	else
	{
	return (0);
	}
}
