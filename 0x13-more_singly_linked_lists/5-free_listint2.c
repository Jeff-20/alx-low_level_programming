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

listint_t *tmp;
tmp = *head;

if (head == NULL)
return;

while (tmp)
{
tmp = tmp->next;
free(*head);
(*head) = tmp;
}
*head = NULL;
}
