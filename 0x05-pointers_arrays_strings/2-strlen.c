#include "main.h"

/**
 * _strlen - l of string
 * @s: string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l])
		l++;
	return (l);
}
