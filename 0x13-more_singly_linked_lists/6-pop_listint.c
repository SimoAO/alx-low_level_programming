#include "lists.h"

/**
 * pop_listint - a function that delets the head node of a
 * listint_t linked list, and returns the head node's data
 * @head: the head of the list
 *
 * Return: 0 if the linked list is empty, otherwise the
 * head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *c;
	int d;

	if (*head == NULL)
	return (0);
	else
	c = *head;
	d = c->n;
	*head = c->next;

	free(c);
	return (d);
}
