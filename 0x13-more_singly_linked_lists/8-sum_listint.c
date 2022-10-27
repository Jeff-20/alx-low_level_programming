#include "lists.h"


/**
* sum_listint - function that sums all the
* data (n) of a listint_t linked list
* @head: pointer to first node of the list
*
* Return: sum
*/

int sum_listint(listint_t *head)
{
listint_t *tmp;
int sum = 0;

tmp = head;

if (head == NULL)
return (0);

while (tmp)
{
sum += tmp->n;
tmp = tmp->next;

}
return (sum);
}
