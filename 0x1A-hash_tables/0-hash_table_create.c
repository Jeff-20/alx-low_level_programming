#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 * or NULL if something goes wrong
 */


hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *H_table;
unsigned long int i;

H_table = malloc(sizeof(hash_table_t));

if (H_table == NULL)
return (NULL);

H_table->array = malloc(sizeof(hash_node_t *) * size);
H_table->size = size;
if (H_table->array == NULL)
{
free(H_table);
return (NULL);
}

for (i = 0; i < size; i++)
H_table->array[i] = NULL;

return (H_table);
}
