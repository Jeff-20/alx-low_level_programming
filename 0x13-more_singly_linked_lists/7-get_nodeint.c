#include "lists.h"


/**
* get_nodeint_at_index - function that returns the nth
* node of a listint_t linked list
* @head: poiinter to first node of the list
* @index: index of the node, starting at 0
*
* Return: nth node of the list or NULL if the
* node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *tmp;

unsigned int count = 0;

if (head == NULL)
return (NULL);

tmp = head;

while (tmp != NULL)
{
if (count == index)
return (tmp);

tmp = tmp->next;
count++;
}
return (NULL);
}
