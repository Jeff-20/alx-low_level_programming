#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - a function that searches for an integer
* @array: an array pointer
* @size: the number of elements in the array
* cmp - function pointer to the function to be called
*
* Return: 0 for success and -1 for failure
*/

int int_index(int *array, size_t size, int (*cmp)(int))
{
unsigned int i = 0;

if (size <= 0 || array == NULL || cmp == NULL)
return (-1);

for (; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (i);
}
