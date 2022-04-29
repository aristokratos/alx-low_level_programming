#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: pointer to a struc
 * @index: position of the node
 *
 * Return: Returns the nth node
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

if (head == NULL)
return (NULL);

for (i = 0; i < index; i++)
{
if (head != NULL)
head = head->next;
else
return (NULL);
}

return (head);
}
