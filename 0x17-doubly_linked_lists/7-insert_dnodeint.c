#include "lists.h"



dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp, *new, *forw;
unsigned int i = 0;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

if (h == NULL || *h == NULL)
{
new->n = n;
new->next = NULL;
new->prev = NULL;
*h = new;
}
tmp = *h;
forw = *h;
while (i < (idx - 1))
{
tmp = tmp->next;
i++;
}

while (i < (idx + 2))
forw = forw->next;
i++;

new->n = n;
tmp->next = new;
new->prev = tmp;
new->next = forw;

return (new);
}
