#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 *
 * @s: input string
 * Return: pointer to converted string
 */
char *string_toupper(char *s)
{
char *upper = s;

while (*s)
{

if (*s >= 'a' && *s <= 'z')

*s = *s - 32;

s++;
}
return (upper);
}
