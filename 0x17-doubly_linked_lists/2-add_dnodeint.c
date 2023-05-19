#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a doubly linked list
 * @head: pointer to the first node of the linked list
 * @n: Data added to the new node
 * Return: address of the new element, or NULL on failure
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));

if (new == NULL)
{
free(new);
return (NULL);
}

else
{
if (head == NULL || (*head) == NULL)
{
new->next = NULL;
new->prev = NULL;
new->n = n;
(*head) = new;
return (new);
}
else
{
new->next = *head;
(*head)->prev = new;
new->prev = NULL;
new->n = n;
*head = new;
return (new);
}

}
return (NULL);
}
