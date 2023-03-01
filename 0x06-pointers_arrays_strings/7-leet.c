#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to encod.
 *
 * Return: pointer to string.
 */
char *leet(char *str)
{
	int i_one = 0, i_two;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i_one])
	{
		for (i_two = 0; i_two <= 7; i_two++)
		{
			if (str[i_one] == leet[i_two] ||
			    str[i_one] - 32 == leet[i_two])
				str[i_one] = i_two + '0';
		}

		i_one++;
	}

	return (str);
}
