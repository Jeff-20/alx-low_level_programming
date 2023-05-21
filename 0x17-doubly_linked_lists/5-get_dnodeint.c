#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns nth node
 * of a doubly linked list
 * @index: index of the node to return
 * @head: pointer to the first node of the list
 * Return: nth node of the list, or NULL if the node doesn't
 * exit
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

dlistint_t *tmp;
unsigned int i = 0;

if (head == NULL)
return (NULL);

tmp = head;

while (head != NULL)
{

while (i < index)
{
tmp = tmp->next;
i++;
}

return (tmp);
}
return (tmp);
}
