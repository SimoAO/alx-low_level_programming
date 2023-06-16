#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new
 * node at a given position
 * @h: head of the list
 * @idx: index of the list
 * @n: node input
 *
 * Return: the address of the new node, NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *po, *nn = malloc(sizeof(dlistint_t));

	if (!nn || !h)
		return (NULL);
	nn->n = n;
	if (idx == 0)
	{
	nn->prev = NULL;
	nn->next = *h;
	if (*h != NULL)
	(*h)->prev = nn;
	*h = nn;
	return (nn);
	}
	po = *h;
	while (idx > 1)
	{
	if (po == NULL)
	{
	free(nn);
	return (NULL);
	}
	po = po->next;
	idx--;
	}
	nn->prev = po;
	nn->next = po->next;
	if (nn->next != NULL)
	nn->next->prev = nn;
	po->next = nn;
	return (nn);
}
