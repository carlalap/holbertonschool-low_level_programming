#include <stdio.h>

/**
* main - entry point
*
* Return: alway returns 0
*
*/

int main(void)

{

	int x;


	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
