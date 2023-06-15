#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements
 * of a dlistint_t list
 * @h: head of the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}
	return (count);
}
