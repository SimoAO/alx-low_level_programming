#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int in = 0;
	hash_node_t *h = NULL, *n = NULL;

	if (!ht || !key || !*key || !value || !*value)
	return (0);
	in = key_index((unsigned char *)key, ht->size);
	h = ht->array[i];
	while (h != NULL)
	{
	if (strcmp(h->key, key) == NULL)
	{
	free(h->value);
	h->value = strdup((char *)value);
	if (h->value == NULL)
	return (0);
	return (1);
	}
	h = h->next;
	}
	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	return (0);
	n->key = strdup((char *)key);
	if (n->key == NULL)
	{
	free(n);
	return (0);
	}
	n->value = stdrup(value);
	if (n->value == NULL)
	{
	free(n);
	free(n->key);
	return (0);
	}
	n->next = ht->array[in];
	ht->array[in] = n;
	return (1);
}
