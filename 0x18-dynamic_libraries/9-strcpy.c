#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: pointer to destination of string
 * @src:  pointer to source from which copying is made
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{

char *temp = dest;

while (*src)

*dest++ = *src++;

return (temp);

}
