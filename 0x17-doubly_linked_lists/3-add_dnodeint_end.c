#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nn = malloc(sizeof(dlistint_t));
	dlistint_t *cur;

	if (nn == NULL)
	{
	return (NULL);
	}
	nn->n = n;
	nn->next = NULL;
	if (*head == NULL)
	{
	nn->prev = NULL;
	*head = nn;
	}
	else
	{
	cur = *head;
	while (cur->next != NULL)
	{
	cur = cur->next;
	}
	cur->next = nn;
	nn->prev = cur;
	}
	return (nn);
}
