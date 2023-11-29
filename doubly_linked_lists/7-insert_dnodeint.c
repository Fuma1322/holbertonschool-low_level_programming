#include "lists.h"

/**
* create_dnode - creates a new doubly linked list node.
* @n: integer to be stored in the new node.
* Return: Address of the new node, or NULL if it failed.
*/
dlistint_t *create_dnode(int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;

return (new_node);
}

/**
* insert_dnode_at_beginning - inserts a new node at the beginning of the list.
* @h: Pointer to the pointer of head of the list.
* @new_node: Pointer to the new node.
* Return: Address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnode_at_beginning(dlistint_t **h, dlistint_t *new_node)
{
if (new_node == NULL)
return (NULL);

new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;

*h = new_node;

return (new_node);
}

/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: Pointer to the pointer of head of the list.
* @idx: index where the new node should be added.
* @n: integer to be stored in the new node.
* Return: Address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
if (h == NULL)
return (NULL);

dlistint_t *temp = *h;
unsigned int i = 0;

while (temp != NULL && i < idx - 1) {
temp = temp->next;
i++;
}

if (temp == NULL)
return (NULL);

dlistint_t *new_node = create_dnode(n);
if (new_node == NULL)
return (NULL);

new_node->prev = temp;
new_node->next = temp->next;

if (temp->next != NULL)
temp->next->prev = new_node;

temp->next = new_node;

return (new_node);
}
