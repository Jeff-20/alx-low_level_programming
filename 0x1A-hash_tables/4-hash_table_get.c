#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 * Return: value associated with the element, or NULL on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int i;
hash_node_t *node;

if (ht == NULL || key == NULL)
return (NULL);

i = key_index((unsigned char *)key, ht->size);
node = ht->array[i];

while (node)
{
if (!strcmp(key, node->key))
return (node->value);

node = node->next;
}

return (NULL);
}


