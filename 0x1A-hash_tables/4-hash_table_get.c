#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key looking for
 *
 * Return: the value associated with the element, or NULL if key
 * couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int in = 0;
	hash_node_t *loc = NULL;

	if (!ht || !key || !*key)
	return (0);
	in = key_index((unsigned char *)key, ht->size);
	loc = ht->array[in];
	while (loc != NULL)
	{
	if (strcmp(loc->key, key) == 0)
	return (loc->value);
	loc = loc->next;
	}
	return (NULL);
}
