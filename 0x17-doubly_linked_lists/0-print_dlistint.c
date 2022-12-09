#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: pointer to the first node of the doubly linked list
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{

size_t number_of_nodes = 0;
const dlistint_t *temp = h;

while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
number_of_nodes++;
}

return (number_of_nodes);

}
