#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - prints strings, followed by a newline
* @separator: string to be printed between the strings
* @n: number of strings to be passed to the function
*
* Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;

unsigned int i =  0;

char *str;

va_start(valist, n);

for (; i < n; i++)
{
str = va_arg(valist, char*);

if (str == NULL)
printf("(nil)");

else
printf("%s", str);

if (separator == NULL)
continue;

if (i < n - 1)
printf("%s", separator);

}

printf("\n");

va_end(valist);
}
