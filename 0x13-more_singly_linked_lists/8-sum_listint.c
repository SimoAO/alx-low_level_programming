#include "lists.h"

/**
 * sum_listint - a function that returns the sum of
 * all the data of a listint_t linked list
 * @head: the head of the list
 *
 * Return: 0 if the list is empty, otherwise the sum
 * of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}
	return (sum);
}
