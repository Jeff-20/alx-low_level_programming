#include "lists.h"
#include <stdio.h>

/**
* print_listint_safe - function that prints a listint_t linked list
* @head: pointer to the first node of the listint_t list
*
* Return: number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
unsigned int i = 0;
const listint_t *tmp, *ptr;

if (head == NULL)
exit(98);

tmp = head;
ptr = head;
while (head && tmp && ptr && ptr->next)
{
tmp = tmp->next;
ptr = ptr->next->next;
if (tmp == ptr)
{
printf("-> [%p] %d\n", (void *)head, head->n);
exit(98);
}

printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
i++;

}

return (i);
}
