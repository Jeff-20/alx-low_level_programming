#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

/**
* add_node - function that adds a new node at the beginning
* of a list_t list
* @str: pointer to a string to be printed
* @head: pointer to the first node of list_t list
* Return: address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
unsigned int length;
list_t *shift;

length = strlen(str);

shift = malloc(sizeof(list_t));

if (shift == NULL)
return (NULL);

shift->str = strdup(str);
shift->len = length;

*head = shift;
print_list(*head);

free(shift);
return (*head);
}
