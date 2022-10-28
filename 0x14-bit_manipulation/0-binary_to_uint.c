#include <stdio.h>
#include <string.h>

/**
* binary_to_uint - function that converts binary
* number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
*
* Return: the converted number, or 0 if there's one
* or more chars in the string b that is not 0 or 1
* or if b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int uint = 0;
unsigned int w = 1;
unsigned int i = 0;

if (b == NULL)
return (0);

while (b[i])
i++;

while (i)
{
if (b[i - 1] != '0' && b[i - 1] != '1')
return (0);

if (b[i - 1] != '0')
uint += w;
w *= 2;
i--;

}
return (uint);
}
