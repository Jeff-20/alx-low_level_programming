#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the
 * end of a doubly linked list
 * @head: pointer to the first node of linked list
 * @n: Data to be added to the new node
 * Return: Address of the element, or NULL or failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *tmp;
new = malloc(sizeof(dlistint_t));

if (new == NULL)
{
free(new);
return (NULL);
}

else
{
new->n = n;
if (head == NULL || *head == NULL)
{

new->next = NULL;
new->prev = NULL;
(*head) = new;
return (new);
}

else
{

tmp = *head;

while (tmp->next != NULL)
tmp = tmp->next;

tmp->next = new;
new->prev = tmp;
new->next = NULL;

return (new);
}

}

}
