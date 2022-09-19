#include "main.h"

/**
 * rev_string - reverses a string,
 * followed by a new line
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;

while (len)

_putchar(s[--len]);

_putchar('\n');
}
