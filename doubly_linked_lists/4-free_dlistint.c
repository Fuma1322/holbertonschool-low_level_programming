#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list.
*@head: pointer to head of list.
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *lebo;

while (head != NULL)
{
lebo = head;
head = head->next;
free(lebo);
}
}
