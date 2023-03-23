#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - sum all number in args.
  *@n: number of args that will come.
  *@...: args to come.
  * Return: sum of all numbers.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum = 0;
	unsigned int i = 0;

	if (n  == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
