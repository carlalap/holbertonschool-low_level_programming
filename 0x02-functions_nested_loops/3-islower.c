#include "main.h"

/**
 * main - check the code.
 * Description - function that checks for lowercase character.
 * Return: Always 0.
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	return(0);
}
