#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: input string
 * @accept: an input character with to locate into string s
 * Return: number of bytes in the initial segment of
 * s which consists entirely of bytes in accept
 */

unsigned int _strspn(char *s, char *accept)

{

int len;

len = strspn(s, accept);

return (len);

}
