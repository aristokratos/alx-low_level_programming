#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node in a desired index
 * @head: pointer to the pointed list
 * @index: desired position
 * Return: 1 if succeded -1 if it failed
**/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *tmp = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	for (i = 1; i < index; i++)
		tmp = tmp->next;

	if (index == 0)
	{
		*head = (*head)->next;
		if (tmp->next != NULL)
			(*head)->prev = NULL;
		else
			*head = NULL;
		free(tmp);
		return (1);
	}

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	node = (tmp->next)->next;
	if (tmp->next->next != NULL)
		tmp->next->next->prev = tmp;
	free(tmp->next);
	tmp->next = node;
	return (1);
}
