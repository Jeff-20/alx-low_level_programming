#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars and
* initializes it with a specific char
* @c: character that initializes the array
* @size: size of the array
*
* Return: a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i = 0;

a = malloc(sizeof(char) * size);

if (a == NULL)
{
return (NULL);
}

if (size == 0)
{
return (NULL);
}

for (; i < size; i++)
{
a[i] = c;
}

return (a);
}
