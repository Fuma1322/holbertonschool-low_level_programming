#include "hash_tables.h"

/**
 * hash_table_print - Prints the keys and values.
 *@ht: Pointer to the table.
 *
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *tmp;
char *sp;

if (ht == NULL)
return;

printf("{");
sp = "";

for (i = 0; i < ht->size; i++)
{
tmp = ht->array[i];
while (tmp != NULL)
{
printf("%s'%s': '%s'", sp, tmp->key, tmp->value);
sp = ", ";
tmp = tmp->next;
}
}
printf("}\n");
}
