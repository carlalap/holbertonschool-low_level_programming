#include "main.h"

/**
 * print_alphabet_x10- prints 10 times the alphabet, in lowercase,
 *
 * Return: always 0;
 *
 */

void print_alphabet_x10(void)

{
 char letter;
 int num;

 for (num = 0; num <= 9; num++)

	 for (letter = 'a'; letter <= 'z'; letter++)
	 {
	 	-putchar(letter);
	 
	 }

         _putchar('\n');
 
}

