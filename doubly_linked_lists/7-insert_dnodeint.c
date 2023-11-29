#include "lists.h"

/**
* create_dnode - creates a new doubly linked list node.
* @n: integer to be stored in the lebo node.
* Return: Address of the lebo node, or NULL if it failed.
*/
dlistint_t *create_dnode(int n)
{
dlistint_t *lebo_node = malloc(sizeof(dlistint_t));
if (lebo_node == NULL)
return (NULL);

lebo_node->n = n;
lebo_node->prev = NULL;
lebo_node->next = NULL;

return (lebo_node);
}

/**
* insert_dnode_at_beginning - inserts a lebo node at the beginning of the list.
* @h: Pointer to the pointer of head of the list.
* @lebo_node: Pointer to the lebo node.
* Return: Address of the lebo node, or NULL if it failed.
*/
dlistint_t *insert_dnode_at_beginning(dlistint_t **h, dlistint_t *lebo_node)
{
if (lebo_node == NULL)
return (NULL);

lebo_node->next = *h;
if (*h != NULL)
(*h)->prev = lebo_node;

*h = lebo_node;

return (lebo_node);
}

/**
* insert_dnodeint_at_index - inserts a lebo node at a given position.
* @h: Pointer to the pointer of head of the list.
* @idx: index where the lebo node should be added.
* @n: integer to be stored in the lebo node.
* Return: Address of the lebo node, or NULL if it failed.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
if (h == NULL)
return (NULL);

dlistint_t *hot = *h;
dlistint_t *lebo_node;
unsigned int i;

if (idx == 0)
{
dlistint_t *lebo_node = create_dnode(n);
return (insert_dnode_at_beginning(h, lebo_node));
}

for (i = 0; hot != NULL && i < idx - 1; i++)
{
hot = hot->next;
}

if (hot == NULL)
return (NULL);


lebo_node = create_dnode(n);
if (lebo_node == NULL)
return (NULL);

lebo_node->prev = hot;
lebo_node->next = hot->next;

if (hot->next != NULL)
hot->next->prev = lebo_node;

hot->next = lebo_node;

return (lebo_node);
}
