#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: An input number
 * Return: 1 if number is positive, 0 if number is 0, or
 * -1 if negative
 */
int print_sign(int n)
{
int value;

if (n > 0)
{
value = 1;
_putchar('+');
}
else if (n == 0)
{
value = 0;
_putchar('0');
}
else
{
value = -1;
_putchar('-');
}

return (value);
}
