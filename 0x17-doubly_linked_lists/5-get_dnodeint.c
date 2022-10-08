#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node
 * @head: Pointer to a list
 * @index: Position of the desired node
 * Return: Address of node
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}

	return (node);
}
