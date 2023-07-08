#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned int flag = 0;
	hash_node_t *loc;

	if (ht == NULL)
	return;
	printf("{");
	for (; i < ht->size; i++)
	{
	loc = ht->array[i];
	while (loc != NULL)
	{
	if (flag != 0)
	printf(", '%s': '%s'", loc->key, loc->value);
	else
	printf("'%s': '%s'", loc->key, loc->value);
	flag = 1;
	loc = loc->next;
	}
	}
	printf("}\n");
}
