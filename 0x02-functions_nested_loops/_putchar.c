#include <unistd.h>

/**
 * _putchar -wirte the character c to stdout
 * @c: the character to print
 * Return: On susccess 1.
 * ON erro, -1 is returned, and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
