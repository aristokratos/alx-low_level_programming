#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements
 * @h: Pointer to an int constant
 *
 * Return: The number of mine
**/

size_t print_listint(const listint_t *h)
{
unsigned int mine = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		mine++;
	}

return (mine);
}
