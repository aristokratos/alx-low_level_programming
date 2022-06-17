#include "lists.h"

/**
 * sum_dlistint - Prints all the elements of the list
 * @head: Pointer to the list
 * Return: Sum of all data in a list
**/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int i = 0, sum = 0;

	if (head == NULL)
		return (0);
	while (node != NULL)
	{
		i++;
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
