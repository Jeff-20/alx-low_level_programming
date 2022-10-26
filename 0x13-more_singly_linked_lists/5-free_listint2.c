#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - frees a listint_t list
* @head: pointer to pointer to first node
* of the listint_t list
*
* Return: Nothing
*/

void free_listint2(listint_t **head)
{
if (*head == NULL)
return (NULL);

listint_t *tmp;
tmp = *head;

while (tmp != NULL)
{
tmp = tmp->next;
free(*head);
(*head) = tmp;
}
}
