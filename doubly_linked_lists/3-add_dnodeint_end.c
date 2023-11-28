#include "lists.h"

/**
* add_dnodeint_end - adds a lebo node at the end of a dlistint_t list.
*@head: pointer to the pointer at head of list.
*@n: interger to be stored in the lebo node.
*
* Return: address of the new element, or NULL if failed.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *lebo_node, *hot;

lebo_node = malloc(sizeof(dlistint_t));

if (lebo_node == NULL)
return (NULL);

lebo_node->n = n;
lebo_node->next = NULL;

if (*head == NULL)
{
lebo_node->prev = NULL;
*head = lebo_node;
return (lebo_node);
}

hot = *head;

while (hot->next != NULL)
hot = hot->next;

hot->next = lebo_node;
lebo_node->prev = hot;

return (lebo_node);
}
