#include "lists.h"

/**
 * add_dnodeint - Adds node at the beginning
 * @head: Pointer to the pointed list
 * @n: Value of the node data
 * Return: Address of the pointed
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	node->prev = NULL;
	node->next = (*head);

	if ((*head) != NULL)
		(*head)->prev = node;
	(*head) = node;
	return (node);
}
