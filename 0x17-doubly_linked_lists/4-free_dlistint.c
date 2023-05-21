#include "lists.h"

/**
 * free_dlistint - function that frees a doubly linked list
 * @head: pointer to the first node of the list
 * Return: Nothing
 */


void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

while (head != NULL)
{
tmp = head->next;
free(head);
head = tmp;
}
}
