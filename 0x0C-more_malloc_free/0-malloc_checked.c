#include "main.h"
#include <stdlib.h>


/**
* malloc_checked - a function that allocates a memory using malloc
* @b: bytes to be allocated in the memory
*
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
char *m;

m = (void *) malloc(b);

if (m == NULL)
exit(98);

else
return (m);
}
