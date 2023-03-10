#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program that takes in all integer arguments and returns the res
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 ,0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, l, res;
	char *char_ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		res = 0;
		for (i = 1; i < argc; i++)
		{
			char_ptr = argv[i];
			l = strlen(char_ptr);

			for (j = 0; j < l; j++)
			{
				if (isdigit(*(char_ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			res += atoi(argv[i]);
		}

		printf("%d\n", res);
	}
	return (0);
}
