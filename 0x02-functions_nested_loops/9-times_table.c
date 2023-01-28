#include "main.h"

/**
 * times_table - times table function
 *
 */

void times_table(void)

{

	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int c = a * b;

			if (b == 0)
			{
			_putchar('0');
			}
			else if (c == 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
		}
		return(0);
	}


}
i
