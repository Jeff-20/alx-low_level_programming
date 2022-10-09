#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _realloc - reallocates a memory block using a malloc and free
* @ptr: pointer to memory previously allocated
* with a call to malloc: malloc(old_size)
* @old_size: bytes of the allocated space for ptr
* @new_size: bytes of the new memory block
* Return: pointer to the newly allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
int *ptr_new;

ptr = malloc(old_size);

ptr_new = malloc(new_size);

memcpy(ptr_new, ptr, old_size);

if (new_size < old_size)
{
if (ptr_new != NULL)
memset(ptr_new, 0, new_size);
}

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
while (old_size && new_size)
{
return (ptr_new);
}
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
free(ptr);
return (ptr_new);
}

