#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t
 * doubly-linked list
 * @h: pointer to a head of a doubly-linked list
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_number = 0;
	const dlistint_t *count;

	count = h;
	while (count)
	{
		printf("%d\n", count->n);
		count = count->next;
		nodes_number += 1;
	}
	return (nodes_number);
}
