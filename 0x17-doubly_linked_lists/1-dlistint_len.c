#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to the first node of the doubly linked list
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t number_of_nodes = 0;
const dlistint_t *temp = h;

while (temp != NULL)
{
temp = temp->next;
number_of_nodes++;
}
return (number_of_nodes);
}
