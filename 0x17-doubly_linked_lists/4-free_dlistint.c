#include "lists.h"

/**
 * free_dlistint - free all nodes in a double linked list
 *
 * @head: pointer to the head of the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *prev;

	prev = NULL;
	temp = head;

	while (temp != NULL)
	{
		prev = temp;
		temp = temp->next;
		prev->next = temp;
		prev->prev = NULL;
		free(prev);
	}

	free(temp);

}
