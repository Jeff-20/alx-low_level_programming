#include "main.h"
#include <stdlib.h>


/**
* array_range - a function that creates an array of integers
* @min: lowest integer in the array
* @max: highest integer in the array
*
*Return: pointer to the newly created array
*/

int *array_range(int min, int max)
{
int *z;
int i;

z = malloc(sizeof(int) * (max + 1));

if (z == NULL || min > max)
{
return (NULL);
}

for (i = 0; i >= min && i <= max; i++)
{

z[i] = min;
min++;
}

return (z);

}
