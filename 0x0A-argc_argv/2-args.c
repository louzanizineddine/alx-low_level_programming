#include <stdio.h>
#include "main.h"

/**
   * main - main function entry point
   * @argc: Numner of command line arguments
   * @argv: Array of arguments
   * Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
