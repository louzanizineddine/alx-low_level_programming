#include "main.h"

/**
 * _strl_recursion - get the length of string.
 * @s: string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}

	return (l);
}
