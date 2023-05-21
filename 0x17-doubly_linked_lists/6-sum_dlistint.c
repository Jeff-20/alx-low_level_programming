#include "lists.h"

/**
 * sum_dlistint - function that returns sum of all the
 * data of a doubly linked list
 * @head: pointer to the first node of the list
 * Return: sum of all the data of the list, or zero if
 * the list is empty
 */


int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);

while (head)
{
sum += (head->n);
head = head->next;
}
return (sum);
}
