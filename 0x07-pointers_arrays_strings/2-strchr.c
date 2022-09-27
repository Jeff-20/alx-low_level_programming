#include "main.h"
#include <string.h>
#include <unistd.h>

/**
 * _strchr - locates a character in a string
 * @s: input string
 * @c: character to locate into string s
 * Return: returns pointer to the matched character c
 */
char *_strchr(char *s, char c)
{
char *r;

c = 'l';

r = strchr(s, c);

return (r);
}
