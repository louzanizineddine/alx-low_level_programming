#include <stdio.h>

/**
 * main - Fizz Buzz code
 *
 * Return: void
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", n);
		}
		if (n != 100)
		{
			putchar(' ');
		}

		n++;
	}
	putchar('\n');
	return (0);
}

