#include "lists.h"

/**
 * sum_dlistint- get sum of all nodes
 * @head: head of the list
 * Return:the sum of all nodes.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;

	if (head == NULL)
		return (sum);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);

}
