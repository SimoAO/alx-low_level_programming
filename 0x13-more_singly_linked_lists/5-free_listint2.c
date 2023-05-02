#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: the head of the list
 *
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *c;

	if (head == NULL)
	return;
	while (*head != NULL)
	{
	c = (*head)->next;
	free(*head);
	*head = c;
	}
	*head = NULL;
}
