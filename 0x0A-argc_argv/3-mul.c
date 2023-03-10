#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
   * main - main function entry point
   * @argc: Numner of command line arguments
   * @argv: Array of arguments
   * Return: 0
*/

int main(__attribute__((unused)) int argc, char *argv[])
{
	int res;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

		res = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", res);
	}

	return (0);
}
