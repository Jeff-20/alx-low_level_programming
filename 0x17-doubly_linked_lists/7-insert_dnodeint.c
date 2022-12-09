#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a node at a position in a list.
 * @h: double pointer to the head.
 * @idx: index to insert new node at.
 * @n: data to add to the new node.
 * Return: address to the new element, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new = NULL;
dlistint_t *temp = NULL;
unsigned int i = 0;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
new->prev = NULL;

if (h == NULL || (*h) == NULL)
*h = new;
else
{
temp = *h;
while (idx != i++ && temp->next)
temp = temp->next;
if (temp->next)
new->prev = temp->prev;
else
new->prev = temp;
if (idx == i)
temp->next = new, new->prev = temp;
else if (idx == i - 1)
{
if (temp->prev)
temp->prev->next = new;
else
*h = new;
temp->prev = new;
new->next = temp;
}
else
{
free(new);
return (NULL);
}
}
return (new);
}
