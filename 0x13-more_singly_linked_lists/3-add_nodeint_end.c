#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list
 * @head: the head of the list
 * @n: integer
 *
 * Return: the address of the new element, or NULL
 * if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn, *c;

	newn = malloc(sizeof(listint_t));
	if (newn == NULL)
	return (NULL);

	newn->n = n;
	newn->next = NULL;

	if (*head == NULL)
	*head = newn;
	else
	{
	c = *head;
	while (c->next != NULL)
	{
	c = c->next;
	}
	c->next = newn;
	}
	return (*head);
}
