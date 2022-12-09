#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: double pointer to the first node of the list
 * @n: data to be added to the new node
 * Return: address of the new element, or NULL on failure.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
temp->prev = new;
*head = new;
new->next = temp;
return (new);
}
return (NULL);
}
