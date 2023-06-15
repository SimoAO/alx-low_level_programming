#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the
 * beginning of a dlistint_t list
 * @head: head of the list
 * @n: value of the node
 *
 * Return: the address of the new element, NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn = malloc(sizeof(dlistint_t));

	if (nn == NULL)
	return (NULL);
	nn->n = n;
	nn->prev = NULL;
	if (*head != NULL)
	{
	nn->next = NULL;
	*head = nn;
	}
	else
	{
	nn->next = *head;
	(*head)->prev = nn;
	*head = nn;
	}
	return (nn);
}
