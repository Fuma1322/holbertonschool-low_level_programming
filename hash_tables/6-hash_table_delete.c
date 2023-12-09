#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *curr;
hash_node_t *last;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
curr = ht->array[i];
while ((last = curr) != NULL)
{
curr = curr->next;
free(last->key);
free(last->value);
free(last);
}
}
free(ht->array);
free(ht);
}
