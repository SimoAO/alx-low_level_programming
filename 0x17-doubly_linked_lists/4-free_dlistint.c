#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: head of the list
 *
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tf;

	while (head)
	{
	tf = head;
	head = head->next;
	free(tf);
	}
}
