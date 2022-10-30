#include "lists.h"
#include <stdlib.h>

/**
* free_list - frees a listint_t list
* @head: pointer to the first node of the list
*
* Return: Nothing
*/

void free_list(list_t *head)
{
list_t *f;

f = head;

while (head)
{
f = head;

head = head->next;
free(f->str);
free(f);
}
free(head);
}
