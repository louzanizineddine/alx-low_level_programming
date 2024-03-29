#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of n elemenst
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: NULL if it fails or void pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	c = mem;

	for (i = 0; i < (size * nmemb); i++)
		c[i] = '\0';

	return (mem);
}
