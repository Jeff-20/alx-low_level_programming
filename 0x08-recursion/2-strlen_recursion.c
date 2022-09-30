#include "main.h"
#include <string.h>

/**
* _strlen_recursion - prints the length of a string
* @s: input string
* Return: the length of the string
*/

int _strlen_recursion(char *s)

{
int len;

if (*s)
{

len = strlen(s);

_strlen_recursion(s + 1);

}
return (len);
}
