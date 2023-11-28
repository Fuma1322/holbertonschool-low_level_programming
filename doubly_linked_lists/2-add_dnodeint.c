#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beggining of a dlistint_t list.
* @head: pointer to the pointer of the head of the list.
* @n: interger to be stored in the stash node.
*
* Return: address of the new element, or NULL if it failed.
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
