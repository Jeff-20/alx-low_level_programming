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

if (head == NULL)
return;

tmp = *head;

while (*head)
{
tmp = *head;
(*head) = (*head)->next;
free(tmp);

}
*head = NULL;
}
