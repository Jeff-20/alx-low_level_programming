#include <stdio.h>

/**
 * _atoi - converts string to integer
 * @s: input string
 * Return: converted value
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int conv = 0;
char null_flag = 0;

while (*s)
{
if (*s == '-')
sign *= -1;

if (*s >= '0' && *s <= '9')
{
null_flag = 1;
conv = conv * 10 + *s - '0';
}

else if (null_flag)
break;
s++;
}

if (sign < 0)
conv = (-conv);

return (conv);
}
