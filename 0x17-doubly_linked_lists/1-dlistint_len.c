#include "lists.h"

/**
 * dlistint_len - function that returns the number
 * of elements in a doubly linked list
 * @h: pointer to the first node of the linked list
 * Return: the number of elements in doubly linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t nodes_number = 0;
const dlistint_t *count;

count = h;
while (count)
{
count = count->next;
nodes_number++;
}
return (nodes_number);
}
