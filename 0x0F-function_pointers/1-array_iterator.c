#include <stdlib.h>

/**
* array_iterator - executes a function given as a parameter
* on each element of an array
* @array: pointer to an array of integers
* @size: size of the array
* @action: pointer to the function being executed
*
* Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

if (array == NULL || size == 0 || action == NULL)
return;

for (; i < size; )
{
action(array[i]);

i++;
}
}
