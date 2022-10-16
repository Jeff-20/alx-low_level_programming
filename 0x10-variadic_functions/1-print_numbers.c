#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - function that prints numbers,
* followed by newline
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
*
* Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valist;

unsigned int i = 0;

separator = ", ";

va_start(valist, n);

for (; i < n; i++)
{
printf("%d", va_arg(valist, int));

if (separator == NULL)
continue;

if (i < n - 1)
printf("%s", separator);

}
printf("\n");

va_end(valist);
}
