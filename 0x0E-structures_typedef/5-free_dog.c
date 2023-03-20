#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory of dog.
 * @d: The dog to be init.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);

}
