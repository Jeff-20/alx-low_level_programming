#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* add_node_end - adds a new node at the end of
* a list_t list
* @head: pointer to first node
* @str: string to be printed
* Return: address of the new element, or NULL if failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *tmp;
list_t *new;
unsigned int length;

length = strlen(str);

new = malloc(sizeof(list_t));

if (new == NULL)
return (NULL);

new->str = strdup(str);
new->len = length;
new->next = NULL;

if (*head == NULL)
{
new->next = *head;
*head = new;
}
else
{
tmp = *head;

while (tmp->next)
tmp = tmp->next;
tmp->next = new;
}
return (new);
}
