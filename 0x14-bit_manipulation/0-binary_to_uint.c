
#include "main.h"

/**
 * binary_to_uint - binary to uint
 * @b: string to convert
 * Return: unsigned int
 *
 */


unsigned int binary_to_uint(const char *b)

{
	unsigned int result = 0;
	int bit = 0;


	if (b == NULL)
		return (0);

/*
 * Iterate through each character in the string
*/
	while (*b != '\0')
	{
 /* If the character is not '0' or '1', the input is invalid */

		if (*b != '0' && *b != '1')
			return (0);
/*
 * Shift the current result to the left and add the current bit
 */
		result = (result << 1) | (*b - '0');
/*
 * Move to the next character and increment the bit counter
*/
		b++;
		bit++;
	}
	return (result);
}
