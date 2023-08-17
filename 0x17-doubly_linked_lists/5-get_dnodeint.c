#include "lists.h"

/**
 * get_dnodeint_at_index - get node at given index in a double linked list
 * @head: head of the list
 * @index: index to get the node at
 * Return: node at the given index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int len = 0;

	temp = head;

	if (index == 0)
		return (temp);

	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	if ((index > len) || (!index))
		return (NULL);

	temp = head;

	while (index)
	{
		temp = temp->next;
		index--;
	}

	return (temp);

}
