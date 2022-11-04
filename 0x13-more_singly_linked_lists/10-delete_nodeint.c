#include "lists.h"


/**
* delete_nodeint_at_index - function that deletes the node
* at index index of a listint_t linked list
* @head: pointer to the first node of the list
* @index: the index of the node that should be deleted
*
* Return: 1 on success, and -1 on failure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *before = *head;
listint_t *current = *head;
unsigned int i = 0;

if (*head == NULL)
return (-1);

else if (index == 0)
{
*head = current->next;
free(current);
current = NULL;
}

else
{
while (i != index)
{
before = current;
current = current->next;
i++;
}

before->next = current->next;
free(current);
current = NULL;

}
return (1);
}
