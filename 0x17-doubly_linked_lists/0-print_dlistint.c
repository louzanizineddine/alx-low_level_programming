#include "lists.h"

/**
 * print_dlistint - print all nodes in a double linked list
 *
 * @h: pointer to the list
 * Return: the number of nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t number_of_nodes = 0;

	temp = h;
	while (temp != NULL)
	{
		number_of_nodes++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (number_of_nodes);
}
