#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table like json works
 * @ht: pointer to the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int end = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];

		while (temp != NULL)
		{
			if (end == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			end = 1;
			temp = temp->next;
		}
	}

	printf("}\n");
}
