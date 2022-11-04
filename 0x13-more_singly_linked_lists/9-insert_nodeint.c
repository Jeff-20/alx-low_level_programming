#include "lists.h"

/**
* insert_nodeint_at_index - function that inserts a new
* node at a given position
* @head: pointer to the first node of the list
* @idx: index of the list where the new node should be
* added. It starts at 0
* @n: integer
* Return: the address of the new node. NULL on failure
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 1;
listint_t *tmp;
listint_t *new;

tmp = *head;
if (head == NULL)
return (NULL);

new = malloc(sizeof(listint_t));
new->n = n;

if (new == NULL)
return (NULL);

if (*head == NULL)
{
*head = new;
new->next = NULL;
return (new);
}
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
while (i != idx)
{
tmp = tmp->next;

i++;
}

new->next = tmp->next;
tmp->next = new;

return (new);
}
