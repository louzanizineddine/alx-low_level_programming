#include "main.h"

/**
 * rev_string - print a string in reverse
 * @s: pointer to string to reverse
 * Return: void
 */

void rev_string(char *s)
{
int l, i, h;
	char temp;

	for (l = 0; s[l] != '\0'; l++)
	;
	i = 0;
	h = l / 2;

	while (h--)
	{
		temp = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
