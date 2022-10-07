#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _calloc - allocates a memory for an array using malloc
* @nmemb: number of elements to be allocated
* @size: size of each element in bytes
*
* Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *z;

z = malloc(sizeof(char) * size);

if (z != NULL)
memset(z, 0, sizeof(char) * size);

if (nmemb == 0 || size == 0 ||  z == NULL)
return (NULL);

return (z);
}
