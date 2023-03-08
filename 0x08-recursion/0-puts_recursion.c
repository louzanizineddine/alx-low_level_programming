#include "main.h"

/**
 * *_puts_recursion - print a string followd by a new line
 * @s: pointer to string to print
 *
 * Return: pointer to dest.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
