#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list
 * @h: rhe head of the list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nbr = 0;

	while (h != NULL)
	{
	h = h->next;
	nbr++;
	}
	return (nbr);
}
