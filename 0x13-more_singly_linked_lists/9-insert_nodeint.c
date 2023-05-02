#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position
 * @head: the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: integer
 *
 * Return: the address of the new node, NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newn, *c;

	if (head == NULL)
	return (NULL);
	c = *head;
	idx--;
	while (idx != 0)
	{
	c = c->next;
	idx--;
	if (c == NULL)
	return (NULL);
	}
	newn = malloc(sizeof(listint_t));
	newn->n = n;
	newn->next = c->next;
	c->next = newn;

	return (c);
}
