#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: width of grid (no. of columns)
* @height: height of grid (no. of rows)
* Return: pointer to a 2 dimensional array of integers
*/

int **alloc_grid(int width, int height)
{
int **g;
int i = 0;
int j = 0;
if (height <= 0 || width <= 0)
return (NULL);

g = (int **)malloc(sizeof(int *) * height);

if (g == NULL)
return (NULL);

for (; i < height; i++)
{
g[i] = (int *)malloc(sizeof(int) * width);

if (g[i] == NULL)
return (NULL);
}

for (i = 0; i < height; i++)
{
for (; j < width; j++)
{
g[i][j] = 0;

}

}

return (g);
}
