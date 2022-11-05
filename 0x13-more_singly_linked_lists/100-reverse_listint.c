#include "lists.h"


/**
* reverse_listint - function that reverses a listint_t linked list
* @head: pointer to pointer which points to the first node of the
* listint_t linked list
*
* Return: pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{

listint_t *before = NULL, *current = NULL;

if (*head == NULL)
return (NULL);

while (*head)
{
current = (*head)->next;
(*head)->next = before;
before = *head;
*head = current;
}

*head = before;
return (*head);
}
