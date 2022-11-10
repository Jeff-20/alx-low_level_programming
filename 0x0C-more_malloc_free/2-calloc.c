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

z = malloc(nmemb * size);

if (z == NULL)
return (NULL);

else
memset(z, 0, nmemb * size);

if (nmemb == 0 || size == 0)
return (NULL);

return (z);
}
