#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a list and sets head to NULL
 * @head: pointer to a struc
 *
 * Return: Nothing
**/

void free_listint2(listint_t **head)
{
listint_t *tmp;

if (head == NULL)
return;

while (*head != NULL)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}

*head = NULL;
}
