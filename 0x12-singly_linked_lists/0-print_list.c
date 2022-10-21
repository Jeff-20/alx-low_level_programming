#include "lists.h"
#include <stdio.h>


/**
* print_list - prints all the elements of a list_t list
* @list_t: struct
* @h: pointer to the head
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
unsigned int i = 0;
unsigned int nodes = 0;

if (h != NULL)
{
nodes++;
}

else
return (-1);

while (i < nodes)
{
if (h->str == NULL)
printf("[0] (nil)\n");

printf("[%u] %s\n", h->len, h->str);
i++;
}

return (nodes);
}
