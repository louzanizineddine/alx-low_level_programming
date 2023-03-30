#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees the  list.
 * @head: A pointer to list.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

