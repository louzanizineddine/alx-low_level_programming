#include "main.h"

/**
 * _strncpy - copy from source
 * @dest: where to store .
 * @src: The source string.
 * @n: maximum n to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, l = 0;

	while (src[i++])
		l++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = l; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
