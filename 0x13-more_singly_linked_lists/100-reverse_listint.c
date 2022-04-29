#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - function to reverse lists
 * @head: Pointer to a pointer pointing to a struct
 *
 * Return: Returns a pointer to the first node of the reversed list
**/

listint_t *reverse_listint(listint_t **head)
{
listint_t *tmp = *head;
listint_t *prev = NULL, *next = NULL;

while (tmp != NULL)
{
next = tmp->next;
tmp->next = prev;
prev = tmp;
tmp = next;
}
*head = prev;

return (*head);
}
