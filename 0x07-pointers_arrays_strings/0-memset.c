#include "main.h"
#include <string.h>

/**
 * _memset - fills the first n bytes of memory area pointed
 * to by s with constant byte b
 * @s: memory area pointed
 * @b: the constant byte to fill the memory area
 * @n: size of the memory area s to fill
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)

{

while (n--)
{
*s = b;
s++;

}

return (s);

}
