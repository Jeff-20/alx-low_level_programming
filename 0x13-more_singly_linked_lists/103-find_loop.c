#include "lists.h"

/**
 * find_listint_loop - finds the loop in a list
 * @head: pointer to listint_t structure
 * Return: address of the node where the loop start, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tmp = head, *ptr = head;

while (ptr && tmp && ptr->next)
{
tmp = tmp->next;
ptr = ptr->next->next;
if (tmp == ptr)
{
return (tmp);
}
}
return (NULL);
}
