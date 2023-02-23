#include "main.h"

/**
 * print_square - print a square 
 * @n: number of #
 * Return: void
 */

void print_square(int n)
{
	int i = 0, m;

	while (i < n && n > 0)
	{
		m = 0;
		while (m < n)
		{
			_putchar('#');
			m++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
