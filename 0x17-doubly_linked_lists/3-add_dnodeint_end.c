#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to the end of list.
 * @head: double pointer to the first node of the list
 * @n: data to add to new node.
 * Return: address to new element, NULL on failure.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = NULL;
dlistint_t *temp = NULL;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;
new->prev = NULL;

if (head == NULL || (*head) == NULL)
{
*head = new;
return (new);
}
else
{
temp = *head;
while (temp->next)
temp = temp->next;

new->prev = temp;
temp->next = new;

return (new);
}
return (NULL);
}
