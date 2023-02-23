#include "main.h"

/**
 * print_diagonal - diagonal lines of $
 * @n: number of \ to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, m;

	while (i < n && n > 0)
	{
		m = 0;
		while (m < i)
		{
			_putchar(' ');
			m++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}

