#include "hash_tables.h"

int not_last_node(const hash_table_t *ht, hash_node_t *node);

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
unsigned long int i = 0, end = 0;
hash_node_t *node = NULL;

if (ht == NULL)
return;

putchar('{');
for (; i < ht->size - 1; i++)
{
if (ht->array[i] != NULL)
end = i;
}

for (i = 0; i <= end; i++)
{
node = ht->array[i];
while (node)
{
printf("'%s': '%s'", node->key, node->value);
node = node->next;
if (i < end - 1)
printf(", ");
}

}

printf("}\n");
}
