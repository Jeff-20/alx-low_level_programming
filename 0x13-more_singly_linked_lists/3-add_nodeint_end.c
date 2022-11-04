#include "lists.h"
#include <stdlib.h>


/**
* add_nodeint_end - function that adds a new
* node at the end of a list
* @head: pointer to the first node of the list
* @n: integer to be put into the new node
*
* Return: address of the new element, or NULL on failure
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp;
listint_t *new;

new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
*head = new;

else
{
tmp = *head;

while (tmp->next)
tmp = tmp->next;
tmp->next = new;

} 

return (new);
}
