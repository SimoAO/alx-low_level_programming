#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *tn = NULL;
	hash_node_t *h = NULL;

	if (ht == NULL)
	return;
	for (; i < ht->size; i++)
	{
	h = ht->array[i];;
	while (h != NULL)
	{
	tn = h->next;
	free(h->value);
	free(h->key);
	free(h);
	h = tn;
	}
	}
	free(h->array);
	free(h);
}
