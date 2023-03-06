#include "main.h"

/**
 * *_memset - fills the memory with a constant byte.
 * @s: pointer where to put the constant
 * @b: constant
 * @n: how many butes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
