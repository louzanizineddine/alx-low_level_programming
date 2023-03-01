#include "main.h"

/**
 * string_toupper - uppercase a string
 * @str: pointer to string.
 * Return: the same pointer.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
