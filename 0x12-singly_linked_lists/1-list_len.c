#include "lists.h"

/**
 * list_len - Finds the number of nodes in
 * @h: The linked list_t list.
 *
 * Return: The number of nodes  in h.
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
