#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to sting
 * Return: void
 */

void print_rev(char *s)
{
	int l = _strlen(s) - 1;

	while (l--)
		_putchar(s[l]);
	_putchar('\n');
}
