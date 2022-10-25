#include "lists.h"


/**
* listint_len - function that returns the number of
* elements in a listint_t ist
* @h: pointer to the first node of the list
*
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
unsigned int nodes = 0;

while (h != NULL)
{
h = h->next;
nodes++;
}

return (nodes);
}
