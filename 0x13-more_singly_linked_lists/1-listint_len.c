#include <stdio.h>
#include "lists.h"

/**
 * listint_len - number of nodes in a linked list.
 * @h: head of the list.
 * Return: the liength of the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
