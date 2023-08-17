#include "lists.h"

/**
 * dlistint_len - return lenght of a double linked list
 *
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t number_of_nodes = 0;

	temp = h;
	while (temp != NULL)
	{
		number_of_nodes++;
		temp = temp->next;
	}
	return (number_of_nodes);
}

