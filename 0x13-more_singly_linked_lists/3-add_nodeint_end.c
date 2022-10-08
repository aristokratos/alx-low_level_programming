#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: Pointer to a pointer of a struct constant
 * @n: int constant
 *
 * Return: The number of nodes
**/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *MyNode, *tmp = *head;

MyNode = malloc(sizeof(MyNode));
if (MyNode == NULL)
return (NULL);
MyNode->n = n;
MyNode->next = NULL;
if (*head == NULL)
{
*head = MyNode;
return (MyNode);
}
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = MyNode;

return (MyNode);
}
