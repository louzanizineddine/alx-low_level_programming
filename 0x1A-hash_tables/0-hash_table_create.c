#include "hash_tables.h"

/**
 * hash_table_create - Write a function that creates a hash table.
 *
 * Prototype: hash_table_t *hash_table_create(unsigned long int size);
 *
 * @size: is the size of the array
 *
 * Return: a pointer to the newly created hash table
 * If something went wrong, your function should return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	int i;

	ht = malloc(sizeof(hash_node_t));
	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < (int)size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
