#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hassh table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table,
 * otherwise NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size == 0)
	return (NULL);
	ht = calloc(1, sizeof(hash_table_t));
	if (ht == 0)
	return (NULL);
	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
	free(ht);
	return (NULL);
	}
	return (ht);
}
