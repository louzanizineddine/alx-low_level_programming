#include "main.h"

/**
 * _strspn - the length of a prefix substring.
 * @s: string to search.
 * @accept: prefix to measure.
 *
 * Return: The number of b in s which
 * consist only of b from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (b);
		}

		s++;
	}

	return (b);
}
