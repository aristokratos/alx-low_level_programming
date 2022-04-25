#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node
 * @head: Pointer to a pointer of a struct constant
 * @n: int constant
 * Return: The number of nodes
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *MyNode;

	MyNode = malloc(sizeof(MyNode));
	if (MyNode == NULL)
		return (NULL);
	MyNode->n = n;
	MyNode->next = *(head);
	*head = MyNode;

return (MyNode);
}
