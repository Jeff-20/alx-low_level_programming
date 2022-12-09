#include "lists.h"

/**
 * sum_dlistint - sums all the data in the list
 * @head: pointer to first node of the list
 * Return: sum of all elements in the list, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
int summation = 0;

while (head)
{
summation += head->n;
head = head->next;
}
return (summation);
}
