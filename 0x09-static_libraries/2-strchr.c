#include "main.h"

/**
 * _strchr -returns the first occurence of char in a string.
 * @s: string to search.
 * @c: character to look for.
 *
 * Return: If c is found - a pointer to the first occurence.
 * If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}

