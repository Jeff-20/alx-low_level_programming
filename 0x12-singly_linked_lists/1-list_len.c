#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
* list_len - function that returns a number of
* of elements in a linked list_t list
* @list_t: struct
* @h: pointer to first node
*
* Return: number of elements
*/

size_t list_len(const list_t *h)

{
unsigned int i = 0;
unsigned int nodes = 0;

if (h != NULL)
{

while (i < nodes)
return (i++);
h = h->next;
nodes++;
i++;

}
return (i + 1);
}
