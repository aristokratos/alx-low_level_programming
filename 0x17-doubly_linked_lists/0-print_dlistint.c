#include "lists.h"

/**
 * print_dlistint - Prints all the elements of the list
 * @h: Pointer to the list
 * Return: Number of counted nodes
**/
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
