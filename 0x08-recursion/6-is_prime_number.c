#include "main.h"

int is_div(int num, int div);
int is_prime_number(int n);

/**
 * is_div - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 */
int is_div(int n, int div)
{
	if (n % div == 0)
		return (0);

	if (div == n / 2)
		return (1);
	return (is_div(n, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 */
int is_prime_number(int n)
{
	int div = 2;
	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_div(n, div));
}

