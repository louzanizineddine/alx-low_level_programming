#include "function_pointers.h"

/**
   *array_iterator- function that executes something on an array.
   *@array: array to do something with.
   *@size: array size.
   *@action: the function to call.
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == 0)
	{
		return;
	}

	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}
