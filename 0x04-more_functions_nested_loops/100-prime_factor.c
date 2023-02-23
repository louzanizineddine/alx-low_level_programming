#include <stdio.h>

/**
 * main - prime numbers are fun
 *
 * Return: 0
 */

int main(void)
{
	long number = 612852475143;
	long d = 2;
	long max = 0;

	while (number != 1)
	{
		if (number % d == 0)
		{
			number = number / d;
			max = d;
		}
		d += 1;
	}
	printf("%ld\n", max);
	return (0);
}
