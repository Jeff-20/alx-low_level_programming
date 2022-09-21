#include <string.h>
#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: input string
 * @src: input string
 * @n: size of src
 * Return: pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);

return (dest);
}
