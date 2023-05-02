#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: the head of the list
 *
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *c;

	while (head != NULL)
	{
	c = head->next;
	free(head);
	head = c;
	}
}
