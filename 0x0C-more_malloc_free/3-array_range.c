#include "main.h"
#include <stdlib.h>

/**
 * array_range- fill an array with ordered values.
 * @min: start from min included.
 * @max: stop at max included.
 *
 * Return: NULL if fail for pointer to the new array.
 */
int *array_range(int min, int max)
{
	int len;
	int *arr;
	int i;

	len = max - min + 1;
	if (min > max)
	{
		return (NULL);
	}
	arr = (int *)malloc(len * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
