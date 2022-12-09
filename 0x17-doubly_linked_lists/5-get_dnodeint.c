#include "lists.h"

/**
 * get_dnodeint_at_index - A function that gets a node at index
 * @head: pointer to the head of the list
 * @index: index of node to get
 * Return: address to nth node if found, otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

while (head)
{
if (i++ == index)
break;
head = head->next;
}
return (head);
}
