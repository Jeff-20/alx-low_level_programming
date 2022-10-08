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
int d;
d = max - min;

if (min > max)
return (NULL);

z = malloc(sizeof(int) * (d + 1));

if (z == NULL)
{
return (NULL);
}

for (i = 0; i <= d; i++)
{

z[i] = min;
min++;
}

return (z);

}
