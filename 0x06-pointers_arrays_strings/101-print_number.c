#include "main.h"

/**
 * bas10 - power in 10 base
 * @n: exponent
 * Return: 10 to the power exponent
 */
int bas10(int n)
{
int bas = 10;

while (n > 0)
{
bas *= 10;
n--;
}
return (bas);
}

/**
 * print_number - prints integers enters as parameters using _putchar
 * @n: integer to print
 *
 * Return: returns void
 */
void print_number(int n)
{
int power;

power = bas10(8);

if (n < 0)
{
_putchar('-');
n *= -1;
}

if (n == 0)
_putchar('0');

else
{
while (n / power == 0)
power /= 10;

while (power >= 1)
{
_putchar((n / power) +'0');
n %= power;
power /= 10;
}
}
}
