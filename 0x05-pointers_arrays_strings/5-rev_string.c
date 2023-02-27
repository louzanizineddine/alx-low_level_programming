#include "main.h"

/**
 * rev_string - print a string in reverse
 * @s: pointer to string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int l, i, half;
	char temp;
l = _strlen(s);
	i = 0;
	half = l / 2;

	while (half--)
	{
		temp = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
