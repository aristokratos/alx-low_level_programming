#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - It frees a list
 * @head: pointer to a struc
 *
 * Return: Returns nothing
**/

void free_listint(listint_t *head)
{
listint_t *tmp;

while (head != NULL)
{
tmp = head->next;
free(head);
head = tmp;
}
}
