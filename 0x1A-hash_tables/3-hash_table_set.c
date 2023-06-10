#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: A pointer to the hash table to add or update to
 * @key: the key
 * @value: value to set as hash_node's value, associated
 * with the key
 * Return: 1 on success, otherwise 0 .
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int i = 0;
char *value_cop = NULL, *key_cop = NULL;
hash_node_t *new_node = NULL, *tmp_node = NULL;

if (ht == NULL || key == NULL || value == NULL)
return (0);

else if (strlen(key) == 0)
return (0);
value_cop = strdup(value);
key_cop = strdup(key);
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);
new_node->value = value_cop;
new_node->key = key_cop;
new_node->next = NULL;
i = key_index((unsigned char *)key, ht->size);
if ((ht->array)[i] != NULL)
{
tmp_node = (ht->array)[i];
while (tmp_node)
{
if (strcmp(tmp_node->key, key_cop) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = value_cop;
free(key_cop);
free(new_node);
return (1);
}
tmp_node = tmp_node->next;
}
tmp_node = (ht->array)[i];
new_node->next = tmp_node;
(ht->array)[i] = new_node;
}
else
(ht->array)[i] = new_node;
return (1);
}
