#include <stdarg.h>

/**
* sum_them_all - a function that returns sum of all its parameters
* @n: total number of arguments passed
*
* Return: sum of all the parameters of the function
*/

int sum_them_all(const unsigned int n, ...)
{
va_list valist;

unsigned int i = 0;
int x;
int sum = 0;

va_start(valist, n);

for (; i < n; )
{

x = va_arg(valist, int);

sum += x;
i++;
}

return (sum);
}
