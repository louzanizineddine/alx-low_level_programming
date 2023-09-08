#include "hash_tables.h"

/**
 * khash_table_set - add a key and value to hash table
 * @ht: hash table
 * @key: key
 * @value: value of that key
 * Return: 1 on success 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	long unsigned int index;

	index = key_index(key, ht->size);
	
	if (ht->array[index] == NULL)
	{
		ht->array[index]->key = key;
		ht->array[index]->value = value;
		return (0);
	}


}