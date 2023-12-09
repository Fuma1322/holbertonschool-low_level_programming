#include "hash_tables.h"

/**
 * key_index - Function that generates an index of a key.
 * @key: Key.
 * @size: Size of the tables.
 *
 * Return: Key index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
if (key == NULL || size == 0)
return (0);
return (hash_djb2(key) % size);
}
