#include "main.h"

/**
 * binary_to_uint - binary number to unsigned int.
 * @b: a  pointer to  string.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	for (; *b != '\0'; b++)
	{
		if (*b == '0')
			result = (result << 1) | 0;
		else if (*b == '1')
			result = (result << 1) | 1;
		else
			return (0);
	}

	return (result);
}
