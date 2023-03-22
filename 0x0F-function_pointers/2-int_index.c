#include "function_pointers.h"

/**
   *int_index- function that  searches for an integer.
   *@array: array to do something with.
   *@size: array size.
   *@cmp: the function to call.
   *Return: return the first index of the int that matches;
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp  == NULL)
	{
		return (-1);
	}

	while (size > 0)
	{
		index = cmp(*array);
		if (index != 0)
		{
			return (index);
		}
		array++;
		size--;
	}

	return (-1);
}
