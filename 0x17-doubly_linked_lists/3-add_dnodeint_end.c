#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: Pointer to a pointed list
 * @n: Data of the node
 * Return: Address of node
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL, *last = *head;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if ((*head) == NULL)
	{
		node->prev = NULL;
		(*head) = node;
		return (node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = node;
	node->prev = last;
	return (node);
}
