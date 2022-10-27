#include "lists.h"


/**
* pop_listint - function that deletes the head node
* of listint_t linked list, and returns the head
* node's data (n)
* @head: pointer to pointer to the first node
*
* Return: the head node's data
*/

int pop_listint(listint_t **head)
{
listint_t *tmp;

int n;

if ((*head) == NULL)
return (0);

n = (*head)->n;

tmp = (*head)->next;
free(*head);
*head = tmp;
return (n);

}
