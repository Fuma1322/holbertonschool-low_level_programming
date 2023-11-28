#include "lists.h"

/**
*
*
*
*
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlist_t *stash_node;

stash_node = malloc(sizeof(dlistint_t));

if (stash_node == NULL)
return (NULL);

stash_node->n = n;
stash_node->prev = NULL;
stash_node->next = *head;

if (*head != NULL)
(*head)->prev = stash_node;
*head = stash_node;

return (stash_node);
}
