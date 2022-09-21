#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: input string
 * @src: input string
 * @n: bytes from src
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{

strncat(dest, src, n);

return (dest);
}
