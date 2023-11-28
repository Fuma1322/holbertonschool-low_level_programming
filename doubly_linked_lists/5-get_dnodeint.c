#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node of a dlistint_t.
*@head: pointer to head of list.
*@index: index of the node, starting from 0.
*
* Return: address of the nth node, or NULL if it does not exist.  
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

while (head != NULL)
{
if (i == index)
return (head);
head = head->next;
i++;
}
return (NULL);
}
