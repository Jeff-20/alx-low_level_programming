#include "lists.h"
#include <stdlib.h>

/**
* free_listint - frees a listint_t list
* @head: pointer to the first node of the list
*
* Return: Nothing
*/

void free_listint(listint_t *head)
{
listint_t *tmp;

tmp = head;

while (tmp != NULL)
{
tmp = tmp->next;
free(head);
head = tmp;
}
}
