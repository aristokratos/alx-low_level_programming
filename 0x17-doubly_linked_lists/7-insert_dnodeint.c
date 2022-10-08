#include "lists.h"

/**
 * insert_dnodeint_at_index - Adds node at an idx with n data
 * @h: Pointer to the pointed list
 * @idx: Position where the node will be inserted
 * @n: Value of the node data
 * Return: Address of the pointed
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}

	for (i = 1; i < idx; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
	{
		node = add_dnodeint_end(h, n);
		return (node);
	}

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	node->prev = tmp;
	node->next = tmp->next;
	tmp->next->prev = node;
	tmp->next = node;

	return (node);
}
