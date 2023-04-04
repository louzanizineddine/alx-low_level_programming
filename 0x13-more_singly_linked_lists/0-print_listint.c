#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all nodes in a linked list.
 * @h: pointer to the head  of the  list.
 *
 * Return: return thelen of the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n);
}
