#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- allocates memory.
 * @b: how much memory to allocate.
 * Return: pointer to memory or status of fail 98.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
