#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: input array
 * @n: input integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
int m = 0;

for (; m < n; m++)
{

printf("%d", a[m]);

if (m < n - 1)

printf(", ");
}
putchar('\n');
}
