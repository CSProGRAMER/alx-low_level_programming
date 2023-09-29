#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t.
 * @head: A pointer to the head node.
 *
 * Return: The sum of all data values, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}